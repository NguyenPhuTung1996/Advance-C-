#include"Setting.h"
#include"General.h"
#include"Sound.h"
#include"Display.h"
#include"Function.h"
#include"Information.h"
#include"BinaryTree.h"
#include"BinaryTree.cpp"
#include<vector>
#include<fstream>
#include<sstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>
#include<stack>
#include<stdexcept>



using namespace std;
Function f;
void hello();
void input();
void print();
void printone();
void printall();
void inputDisplay();
void askinputDisplay();
void inputSound();
void askinputSound();
void inputGeneral();
void askinputGeneral();
void saveSettingfile();
void loadSettingfile();
void checkfileSetting();
void delete12();
void searchbyKey();
void searchbyName();

BinaryTree<Setting> set, set1;
BinaryTree<Display> disp, disp1;
BinaryTree<Sound> sou, sou1;
BinaryTree<General> gen, gen1;

int main()
{
	//delete12();
	hello();
}
void hello()							// Man hinh hien thi menu chinh
{
	checkfileSetting();
	cout << "--------Select menu--------" << endl;
	cout << endl;
	cout << "1. Input setting information" << endl;
	cout << "2. Print setting information" << endl;
	cout << "3. Exit" << endl;
	string select;
	bool isvalid = true;
	do
	{
		if (isvalid)
		{
			cout << "Your selection: ";
		}
		else
		{
			cout << "Please re-enter your selection: ";
		}
		getline(cin, select);
		if ((select.length() != 1) || (!f.isNumber(select)) || (stoi(select) < 1) || (stoi(select) > 3))
		{
			isvalid = false;
			cout << "Your selection must be an integer between 1 and 3." << endl;
			continue;
		}
		else
		{
			isvalid = true;
		}
	} while (!isvalid);
	switch (stoi(select))
	{
		case 1:					//nguoi dung chon nhap thong tin
		{
			system("cls");
			input();
			break;
		}
		case 2:					//nguoi dung chon in thong tin
		{
			system("cls");
			ifstream filee("Setting.txt");
			if (f.is_emptyfile(filee))
			{
				cout << "File 'Setting.txt' has no data" << endl << "You can not print the information of the vehicles." << endl;
				cout << "Press any key to return to main menu-->" << endl;
				string s;
				getline(cin, s);
				system("cls");
				hello();
			}
			print();
			break;
		}
		case 3:					//ket thuc chuong trinh
		{
			cout << "Good bye!!!!";
			break;
		}
	}
}

void input()					// Man hinh hien thi menu nhap thong tin xe
{
	cout << "--------------------------Input setting information--------------------------" << endl;
	cout << endl;
	cout << "1. Display setting" << endl;
	cout << "2. Sound setting" << endl;
	cout << "3. General setting" << endl;
	cout << "4. Back to main menu" << endl;
	string select1;
	bool isvalid1 = true;
	do
	{
		if (isvalid1)
		{
			cout << "Your selection: ";
		}
		else
		{
			cout << "Please re-enter your selection: ";
		}
		getline(cin, select1);
		if ((select1.length() != 1) || (!f.isNumber(select1)) || (stoi(select1) < 1) || (stoi(select1) > 4))		// du lieu nhap vao phai la so nguyen tu 1 den 4
		{
			isvalid1 = false;
			cout << "Your selection must be an integer between 1 and 4." << endl;
			continue;
		}
		else
		{
			isvalid1 = true;
		}
	} while (!isvalid1);
	switch (stoi(select1))
	{
		case 1:				// nguoi dung chon nhap thong tin display
		{
			system("cls");
			inputDisplay();
			break;
		}
		case 2:				// nguoi dung chon nhap thong tin sound
		{
			system("cls");
			inputSound();
			break;
		}
		case 3:				// nguoi dung chon nhap thong tin general
		{
			system("cls");
			inputGeneral();
			break;
		}
		case 4:				// quay tro lai menu chinh
		{
			system("cls");
			hello();
			break;
		}
	}
}

void print()					// menu nguoi dung chon in thong tin
{
	cout << "---------------Print setting information---------------" << endl;
	cout << endl;
	cout << "1. Print one car setting information" << endl;
	cout << "2. Print all car setting information" << endl;
	cout << "3. Main menu" << endl;
	string select2;
	bool isvalid2 = true;
	do
	{
		if (isvalid2)
		{
			cout << "Your selection: ";
		}
		else
		{
			cout << "Please re-enter your selection: ";
		}
		getline(cin, select2);
		if ((select2.length() != 1) || (!f.isNumber(select2)) || (stoi(select2) < 1) || (stoi(select2) > 3))			// du lieu nhap vao phai la so nguyen tu 1 den 5
		{
			isvalid2 = false;
			cout << "Your selection must be an integer between 1 and 3." << endl;
			continue;
		}
		else
		{
			isvalid2 = true;
		}
	} while (!isvalid2);
	switch (stoi(select2))
	{
		case 1:
		{
			system("cls");
			printone();
			break;
		}
		case 2:
		{
			system("cls");
			printall();
			break;
		}
		case 3:
		{
			system("cls");
			hello();
			break;
		}
	}
}

void printone()									// menu nguoi dung chon in thong tin 1 xe
{
	cout << "---------------Print one car setting information---------------" << endl;
	cout << "1. Search by key number" << endl;
	cout << "2. Search by ownername" << endl;
	cout << "3. Print menu" << endl;
	string select2;
	bool isvalid2 = true;
	do
	{
		if (isvalid2)
		{
			cout << "Your selection: ";
		}
		else
		{
			cout << "Please re-enter your selection: ";
		}
		getline(cin, select2);
		if ((select2.length() != 1) || (!f.isNumber(select2)) || (stoi(select2) < 1) || (stoi(select2) > 3))			// du lieu nhap vao phai la so nguyen tu 1 den 5
		{
			isvalid2 = false;
			cout << "Your selection must be an integer between 1 and 3." << endl;
			continue;
		}
		else
		{
			isvalid2 = true;
		}
	} while (!isvalid2);
	switch (stoi(select2))
	{
	case 1:
	{
		system("cls");
		searchbyKey();
		break;
	}
	case 2:
	{
		system("cls");
		searchbyName();
		break;
	}
	case 3:
	{
		system("cls");
		print();
		break;
	}
	}
}

void searchbyKey()
{
	cout <<"----------------Seacrh by Key number-------------------"<< endl;
	cout << endl;
	string key1;
	bool isvalid = true;
	do
	{
		cout << endl;
		if (isvalid)
		{
			cout << "Enter the vehicle number: ";
		}
		else
		{
			cout << "Please re-enter the vehicle number: ";
		}
		getline(cin, key1);
		if ((key1.length() != 8) || (!f.isNumber(key1)))				// chuoi nhap vao phai la so nguyen co 8 ky tu
		{
			isvalid = false;
			cout << "The vehicle number must be an 8-character number." << endl;
			continue;
		}
		else
		{
			isvalid = true;
			if (set.searchNodeInKey(key1) == NULL)
			{
				isvalid = false;
				cout << "Vehicle is not in the system" << endl;
			}
			else
			{
				system("cls");
				cout << setw(4) << left << " " << setw(30) << left << "Owner name" << setw(30) << left << "Email" << setw(15) << left << "Key number" << setw(10) << left << "ODO" << setw(20) << left << "Service remind" << endl;
				cout << setw(4) << left << " " << setw(30) << left << set.searchNodeInKey(key1)->info.get_ownername() << setw(30) << left << set.searchNodeInKey(key1)->info.get_email() << setw(15) << left << set.searchNodeInKey(key1)->info.get_key() << setw(10) << left << set.searchNodeInKey(key1)->info.get_odo() << setw(20) << left << set.searchNodeInKey(key1)->info.get_sevice() << endl;
				cout << endl;
				cout << setw(4) << left << " " << setw(12) << left << "Display: " << setw(8) << left << "Light" << setw(15) << left << "Screen light" << setw(12) << left << "Taplo light" << endl;
				cout << setw(4) << left << " " << setw(12) << left << " " << setw(8) << left << disp.searchNodeInKey(key1)->info.get_lightlevel() << setw(15) << left << disp.searchNodeInKey(key1)->info.get_screenlightlevel() << setw(12) << left << disp.searchNodeInKey(key1)->info.get_taplolightlevel() << endl;
				cout << endl;
				cout << setw(4) << left << " " << setw(12) << left << "Sound: " << setw(8) << left << "Media" << setw(8) << left << "Call" << setw(15) << left << "Navigation" << setw(15) << left << "Notification" << endl;
				cout << setw(4) << left << " " << setw(12) << left << "" << setw(8) << left << sou.searchNodeInKey(key1)->info.get_media() << setw(8) << left << sou.searchNodeInKey(key1)->info.get_call() << setw(15) << left << sou.searchNodeInKey(key1)->info.get_navigation() << setw(15) << left << sou.searchNodeInKey(key1)->info.get_notification() << endl;
				cout << endl;
				cout << setw(4) << left << " " << setw(12) << left << "General: " << setw(20) << left << "TimeZone" << setw(50) << left << "Language" << endl;
				cout << setw(4) << left << " " << setw(12) << left << " " << setw(20) << left << gen.searchNodeInKey(key1)->info.get_timezone() << setw(50) << left << gen.searchNodeInKey(key1)->info.get_language() << endl;
				cout << endl;
				cout << "----------------------------------------" << endl;
				string r;
				cout << "Press any key to return to main menu-->";
				getline(cin, r);
				system("cls");
				hello();
			}
		}
	} while (!isvalid);	
}

void searchbyName()
{
	cout << "----------------Seacrh by Ownername-------------------" << endl;
	cout << endl;
	string key1;
	bool isvalid = true;
	do
	{
		cout << endl;
		if (isvalid)
		{
			cout << "Enter the ownername: ";
		}
		else
		{
			cout << "Please re-enter the ownername: ";
		}
		getline(cin, key1);
		if (f.isNumber(key1))				// chuoi nhap vao phai la so nguyen co 8 ky tu
		{
			isvalid = false;
			cout << "The input name cannot contain numeric characters." << endl;
			continue;
		}
		else
		{
			isvalid = true;
			system("cls");
			set.set_stt(1);
			set.searchCarByName(key1);
			if (set.Check() == true)
			{
				isvalid = false;
				cout << "This name is not in the system" << endl;
			}
			else
			{
				vector<string> keyyy;
				disp1.add_KeybyName(key1);
				disp1.keynumber_byname.swap(keyyy);
				for (int i = 0; i < keyyy.size(); i++)
				{
					cout << setw(4) << left << i + 1 << setw(30) << left << "Owner name" << setw(30) << left << "Email" << setw(15) << left << "Key number" << setw(10) << left << "ODO" << setw(20) << left << "Service remind" << endl;
					cout << setw(4) << left << " " << setw(30) << left << set.searchNodeInKey(keyyy[i])->info.get_ownername() << setw(30) << left << set.searchNodeInKey(keyyy[i])->info.get_email() << setw(15) << left << set.searchNodeInKey(keyyy[i])->info.get_key() << setw(10) << left << set.searchNodeInKey(keyyy[i])->info.get_odo() << setw(20) << left << set.searchNodeInKey(keyyy[i])->info.get_sevice() << endl;
					cout << endl;
					cout << setw(4) << left << " " << setw(12) << left << "Display: " << setw(8) << left << "Light" << setw(15) << left << "Screen light" << setw(12) << left << "Taplo light" << endl;
					cout << setw(4) << left << " " << setw(12) << left << " " << setw(8) << left << disp.searchNodeInKey(keyyy[i])->info.get_lightlevel() << setw(15) << left << disp.searchNodeInKey(keyyy[i])->info.get_screenlightlevel() << setw(12) << left << disp.searchNodeInKey(keyyy[i])->info.get_taplolightlevel() << endl;
					cout << endl;
					cout << setw(4) << left << " " << setw(12) << left << "Sound: " << setw(8) << left << "Media" << setw(8) << left << "Call" << setw(15) << left << "Navigation" << setw(15) << left << "Notification" << endl;
					cout << setw(4) << left << " " << setw(12) << left << "" << setw(8) << left << sou.searchNodeInKey(keyyy[i])->info.get_media() << setw(8) << left << sou.searchNodeInKey(keyyy[i])->info.get_call() << setw(15) << left << sou.searchNodeInKey(keyyy[i])->info.get_navigation() << setw(15) << left << sou.searchNodeInKey(keyyy[i])->info.get_notification() << endl;
					cout << endl;
					cout << setw(4) << left << " " << setw(12) << left << "General: " << setw(20) << left << "TimeZone" << setw(50) << left << "Language" << endl;
					cout << setw(4) << left << " " << setw(12) << left << " " << setw(20) << left << gen.searchNodeInKey(keyyy[i])->info.get_timezone() << setw(50) << left << gen.searchNodeInKey(keyyy[i])->info.get_language() << endl;
					cout << endl;
					cout << "----------------------------------------" << endl;
				}
			}
		}
	} while (!isvalid);
	string r;
	cout << "Press any key to return to main menu-->";
	getline(cin, r);
	system("cls");
	hello();
}

void printall()					// Man hinh hien thi menu xuat thong tin tat ca cac xe
{
	cout << "---------------Print all car setting information---------------" << endl;
	cout << endl;
	cout << "1. Print Display setting information" << endl;
	cout << "2. Print Sound setting information" << endl;
	cout << "3. Print General setting information" << endl;
	cout << "4. Print all setting information" << endl;
	cout << "5. Main menu" << endl;
	string select2;
	bool isvalid2 = true;
	do
	{
		if (isvalid2)
		{
			cout << "Your selection: ";
		}
		else
		{
			cout << "Please re-enter your selection: ";
		}
		getline(cin, select2);
		if ((select2.length() != 1) || (!f.isNumber(select2)) || (stoi(select2) < 1) || (stoi(select2) > 5))			// du lieu nhap vao phai la so nguyen tu 1 den 5
		{
			isvalid2 = false;
			cout << "Your selection must be an integer between 1 and 5." << endl;
			continue;
		}
		else
		{
			isvalid2 = true;
		}
	} while (!isvalid2);
	switch (stoi(select2))
	{
		case 1:					// xuat thong tin display cua tat ca cac xe 	
		{	
			system("cls");
			cout << "---------------Print all car setting information---------------" << endl;
			cout << endl;
			cout << "1. Sort by key number" << endl;
			cout << "2. Sort by ownername" << endl;
			string select1;
			bool isvalid1 = true;
			do
			{
				if (isvalid1)
				{
					cout << "Your selection: ";
				}
				else
				{
					cout << "Please re-enter your selection: ";
				}
				getline(cin, select1);
				if ((select1.length() != 1) || (!f.isNumber(select1)) || (stoi(select1) < 1) || (stoi(select1) > 2))
				{
					isvalid1 = false;
					cout << "Your selection must be an integer between 1 and 2." << endl;
					continue;
				}
				else
				{
					isvalid1 = true;
				}
			} while (!isvalid1);
			switch (stoi(select1))
			{
				case 1:
				{
					system("cls");
					cout << "-----------Display Setting-----------" << endl;
					cout << setw(30) << left << "Owner name" << setw(30) << left << "Email" << setw(15) << left << "Key number" << setw(10) << left << "ODO" << setw(20) << left << "Service remind" << setw(20) << left << "Light level" << setw(20) << left << "Screen light level" << setw(20) << left << "Taplo light level" << endl;
					disp.printDisplay();
					string r;
					cout << "Press any key to return to main menu-->";
					getline(cin, r);
					system("cls");
					hello();
					break;
				}
				case 2:
				{
					system("cls");
					cout << "-----------Display Setting-----------" << endl;
					cout << setw(30) << left << "Owner name" << setw(30) << left << "Email" << setw(15) << left << "Key number" << setw(10) << left << "ODO" << setw(20) << left << "Service remind" << setw(20) << left << "Light level" << setw(20) << left << "Screen light level" << setw(20) << left << "Taplo light level" << endl;
					disp1.printDisplay();
					string r;
					cout << "Press any key to return to main menu-->";
					getline(cin, r);
					system("cls");
					hello();
					break;
				}
			}
			break;
		}
		case 2:				// xuat thong tin sound cua tat ca cac xe
		{

			system("cls");
			cout << "---------------Print all car setting information---------------" << endl;
			cout << endl;
			cout << "1. Sort by key number" << endl;
			cout << "2. Sort by ownername" << endl;
			string select1;
			bool isvalid1 = true;
			do
			{
				if (isvalid1)
				{
					cout << "Your selection: ";
				}
				else
				{
					cout << "Please re-enter your selection: ";
				}
				getline(cin, select1);
				if ((select1.length() != 1) || (!f.isNumber(select1)) || (stoi(select1) < 1) || (stoi(select1) > 2))
				{
					isvalid1 = false;
					cout << "Your selection must be an integer between 1 and 2." << endl;
					continue;
				}
				else
				{
					isvalid1 = true;
				}
			} while (!isvalid1);
			switch (stoi(select1))
			{
			case 1:
			{
				system("cls");
				cout << "-------------Sound Setting-----------" << endl;
				cout << setw(30) << left << "Owner name" << setw(30) << left << "Email" << setw(15) << left << "Key number" << setw(10) << left << "ODO" << setw(20) << left << "Service remind" << setw(20) << left << "Media volume level" << setw(20) << left << "Call volume level" << setw(25) << left << "Navigation volume level" << setw(25) << left << "Notification volume level" << endl;
				sou.printSound();
				string r;
				cout << "Press any key to return to main menu-->";
				getline(cin, r);
				system("cls");
				hello();
				break;
			}
			case 2:
			{
				system("cls");
				cout << "-------------Sound Setting-----------" << endl;
				cout << setw(30) << left << "Owner name" << setw(30) << left << "Email" << setw(15) << left << "Key number" << setw(10) << left << "ODO" << setw(20) << left << "Service remind" << setw(20) << left << "Media volume level" << setw(20) << left << "Call volume level" << setw(25) << left << "Navigation volume level" << setw(25) << left << "Notification volume level" << endl;
				sou1.printSound();
				string r;
				cout << "Press any key to return to main menu-->";
				getline(cin, r);
				system("cls");
				hello();
				break;
			}
			}
			break;
		}
		case 3:				// xuat thong tin general cua tat ca cac xe
		{
			system("cls");
			cout << "---------------Print all car setting information---------------" << endl;
			cout << endl;
			cout << "1. Sort by key number" << endl;
			cout << "2. Sort by ownername" << endl;
			string select1;
			bool isvalid1 = true;
			do
			{
				if (isvalid1)
				{
					cout << "Your selection: ";
				}
				else
				{
					cout << "Please re-enter your selection: ";
				}
				getline(cin, select1);
				if ((select1.length() != 1) || (!f.isNumber(select1)) || (stoi(select1) < 1) || (stoi(select1) > 2))
				{
					isvalid1 = false;
					cout << "Your selection must be an integer between 1 and 2." << endl;
					continue;
				}
				else
				{
					isvalid1 = true;
				}
			} while (!isvalid1);
			switch (stoi(select1))
			{
				case 1:
				{
					system("cls");
					cout << "---------------General Setting------------" << endl;
					cout << setw(30) << left << "Owner name" << setw(30) << left << "Email" << setw(15) << left << "Key number" << setw(10) << left << "ODO" << setw(20) << left << "Service remind" << setw(20) << left << "Timezone" << setw(25) << left << "Language" << endl;
					gen.printGeneral();
					string r;
					cout << "Press any key to return to main menu-->";
					getline(cin, r);
					system("cls");
					hello();
					break;
				}
				case 2:
				{
					system("cls");
					cout << "---------------General Setting------------" << endl;
					cout << setw(30) << left << "Owner name" << setw(30) << left << "Email" << setw(15) << left << "Key number" << setw(10) << left << "ODO" << setw(20) << left << "Service remind" << setw(20) << left << "Timezone" << setw(25) << left << "Language" << endl;
					gen1.printGeneral();
					string r;
					cout << "Press any key to return to main menu-->";
					getline(cin, r);
					system("cls");
					hello();
					break;
				}
			}
			break;
		}
		case 4:				// xuat tat ca cac thong tin cai dat cua tat ca cac xe
		{
			system("cls");
			cout << "---------------Print all car setting information---------------" << endl;
			cout << endl;
			cout << "1. Sort by key number" << endl;
			cout << "2. Sort by ownername" << endl;
			string select1;
			bool isvalid1 = true;
			do
			{
				if (isvalid1)
				{
					cout << "Your selection: ";
				}
				else
				{
					cout << "Please re-enter your selection: ";
				}
				getline(cin, select1);
				if ((select1.length() != 1) || (!f.isNumber(select1)) || (stoi(select1) < 1) || (stoi(select1) > 2))
				{
					isvalid1 = false;
					cout << "Your selection must be an integer between 1 and 2." << endl;
					continue;
				}
				else
				{
					isvalid1 = true;
				}
			} while (!isvalid1);
			switch (stoi(select1))
			{
				case 1:
				{
					system("cls");
					cout << "---------------All setting--------------" << endl;
					set.add_Key_list();
					vector<string> keyyy;
					set.keynumber.swap(keyyy);
					for (int i = 0; i < keyyy.size(); i++)
					{
						cout << setw(4) << left << i + 1 << setw(30) << left << "Owner name" << setw(30) << left << "Email" << setw(15) << left << "Key number" << setw(10) << left << "ODO" << setw(20) << left << "Service remind" << endl;
						cout << setw(4) << left << " " << setw(30) << left << set.searchNodeInKey(keyyy[i])->info.get_ownername() << setw(30) << left << set.searchNodeInKey(keyyy[i])->info.get_email() << setw(15) << left << set.searchNodeInKey(keyyy[i])->info.get_key() << setw(10) << left << set.searchNodeInKey(keyyy[i])->info.get_odo() << setw(20) << left << set.searchNodeInKey(keyyy[i])->info.get_sevice() << endl;
						cout << endl;
						cout << setw(4) << left << " " << setw(12) << left << "Display: " << setw(8) << left << "Light" << setw(15) << left << "Screen light" << setw(12) << left << "Taplo light" << endl;
						cout << setw(4) << left << " " << setw(12) << left << " " << setw(8) << left << disp.searchNodeInKey(keyyy[i])->info.get_lightlevel() << setw(15) << left << disp.searchNodeInKey(keyyy[i])->info.get_screenlightlevel() << setw(12) << left << disp.searchNodeInKey(keyyy[i])->info.get_taplolightlevel() << endl;
						cout << endl;
						cout << setw(4) << left << " " << setw(12) << left << "Sound: " << setw(8) << left << "Media" << setw(8) << left << "Call" << setw(15) << left << "Navigation" << setw(15) << left << "Notification" << endl;
						cout << setw(4) << left << " " << setw(12) << left << "" << setw(8) << left << sou.searchNodeInKey(keyyy[i])->info.get_media() << setw(8) << left << sou.searchNodeInKey(keyyy[i])->info.get_call() << setw(15) << left << sou.searchNodeInKey(keyyy[i])->info.get_navigation() << setw(15) << left << sou.searchNodeInKey(keyyy[i])->info.get_notification() << endl;
						cout << endl;
						cout << setw(4) << left << " " << setw(12) << left << "General: " << setw(20) << left << "TimeZone" << setw(50) << left << "Language" << endl;
						cout << setw(4) << left << " " << setw(12) << left << " " << setw(20) << left << gen.searchNodeInKey(keyyy[i])->info.get_timezone() << setw(50) << left << gen.searchNodeInKey(keyyy[i])->info.get_language() << endl;
						cout << endl;
						cout << "----------------------------------------" << endl;
					}
					string r;
					cout << "Press any key to return to main menu-->";
					getline(cin, r);
					system("cls");
					hello();
					break;
				}
				case 2:
				{
					system("cls");
					cout << "---------------All setting--------------" << endl;
					set1.add_Key_list();
					vector<string> keyyy;
					set1.keynumber.swap(keyyy);
					for (int i = 0; i < keyyy.size(); i++)
					{
						cout << setw(4) << left << i + 1 << setw(30) << left << "Owner name" << setw(30) << left << "Email" << setw(15) << left << "Key number" << setw(10) << left << "ODO" << setw(20) << left << "Service remind" << endl;
						cout << setw(4) << left << " " << setw(30) << left << set.searchNodeInKey(keyyy[i])->info.get_ownername() << setw(30) << left << set.searchNodeInKey(keyyy[i])->info.get_email() << setw(15) << left << set.searchNodeInKey(keyyy[i])->info.get_key() << setw(10) << left << set.searchNodeInKey(keyyy[i])->info.get_odo() << setw(20) << left << set.searchNodeInKey(keyyy[i])->info.get_sevice() << endl;
						cout << endl;
						cout << setw(4) << left << " " << setw(12) << left << "Display: " << setw(8) << left << "Light" << setw(15) << left << "Screen light" << setw(12) << left << "Taplo light" << endl;
						cout << setw(4) << left << " " << setw(12) << left << " " << setw(8) << left << disp.searchNodeInKey(keyyy[i])->info.get_lightlevel() << setw(15) << left << disp.searchNodeInKey(keyyy[i])->info.get_screenlightlevel() << setw(12) << left << disp.searchNodeInKey(keyyy[i])->info.get_taplolightlevel() << endl;
						cout << endl;
						cout << setw(4) << left << " " << setw(12) << left << "Sound: " << setw(8) << left << "Media" << setw(8) << left << "Call" << setw(15) << left << "Navigation" << setw(15) << left << "Notification" << endl;
						cout << setw(4) << left << " " << setw(12) << left << "" << setw(8) << left << sou.searchNodeInKey(keyyy[i])->info.get_media() << setw(8) << left << sou.searchNodeInKey(keyyy[i])->info.get_call() << setw(15) << left << sou.searchNodeInKey(keyyy[i])->info.get_navigation() << setw(15) << left << sou.searchNodeInKey(keyyy[i])->info.get_notification() << endl;
						cout << endl;
						cout << setw(4) << left << " " << setw(12) << left << "General: " << setw(20) << left << "TimeZone" << setw(50) << left << "Language" << endl;
						cout << setw(4) << left << " " << setw(12) << left << " " << setw(20) << left << gen.searchNodeInKey(keyyy[i])->info.get_timezone() << setw(50) << left << gen.searchNodeInKey(keyyy[i])->info.get_language() << endl;
						cout << endl;
						cout << "----------------------------------------" << endl;
					}
					string r;
					cout << "Press any key to return to main menu-->";
					getline(cin, r);
					system("cls");
					hello();
					break;
				}
			}
			break;
		}
		case 5:			// tro ve menu chinh
		{
			system("cls");
			hello();
			break;
		}
	}
}

void inputDisplay()						// man hinh hien thi khi nguoi dung chon display setting
{
	int count;
	string key1;
	cout << "--------------------------Input dislay setting--------------------------" << endl;
	bool isvalid = true;
	do
	{
		bool isvalid1 = true;
		
		cout << endl;
		if (isvalid)
		{
			cout << "Enter the vehicle number: ";
		}
		else
		{
			cout << "Please re-enter the vehicle number: ";
		}
		getline(cin, key1);
		if ((key1.length() != 8) || (!f.isNumber(key1)))				// chuoi nhap vao phai la so nguyen co 8 ky tu
		{
			isvalid = false;
			cout << "The vehicle number must be an 8-character number." << endl;
			continue;
		}
		else
		{
			isvalid = true;
			Setting* S = new Setting[100];
			Display* d = new Display[100];
			Sound* s = new Sound[100];
			General* g = new General[100];
			if (set.searchNodeInKey(key1) != NULL)
			{
				system("cls");
				isvalid1 = true;
				set.add_Key_list();
				vector<string> keyyy;
				set.keynumber.swap(keyyy);
				for (int i = 0; i < keyyy.size(); i++)
				{
					if (key1 == keyyy[i])
					{
						count = i;
						break;
					}
					
				}
				cout << "--------------------------Input dislay setting--------------------------" << endl;
				cout << endl;
				cout << "Car index: " << count + 1 << endl;
				cout << "		Key number: " << set.searchNodeInKey(key1)->info.get_key() << endl;
				disp.searchNodeInKey(key1)->info.nhapthongtin(disp.searchNodeInKey(key1)->info, set.searchNodeInKey(key1)->info, sou.searchNodeInKey(key1)->info, gen.searchNodeInKey(key1)->info);
				system("cls");
				cout << "--------------------------Input dislay setting--------------------------" << endl;
				cout << "	Car index: " << count + 1 << endl;
				disp.searchNodeInKey(key1)->info.xuatthongtin(set.searchNodeInKey(key1)->info);
				cout << "This car already existed, data will be overwritten." << endl;
				disp.searchNodeInKey(key1)->info.nhapthongtinDisplay(disp.searchNodeInKey(key1)->info);
				
				set.insertKey(set.searchNodeInKey(key1)->info);
				set1.insertName(set.searchNodeInKey(key1)->info);
				disp.insertKey(disp.searchNodeInKey(key1)->info);
				disp1.insertName(disp.searchNodeInKey(key1)->info);
				sou.insertKey(sou.searchNodeInKey(key1)->info);
				sou1.insertName(sou.searchNodeInKey(key1)->info);
				gen.insertKey(gen.searchNodeInKey(key1)->info);
				gen1.insertName(gen.searchNodeInKey(key1)->info);
			}
			else
			{
				isvalid1 = false;
				S[0].set_key(key1);
				d[0].set_key(key1);
				s[0].set_key(key1);
				g[0].set_key(key1);
				system("cls");
				cout << "--------------------------Input dislay setting--------------------------" << endl;
				cout << endl;
				cout << "		Key number: " << S[0].get_key() << endl;
				d[0].nhapthongtin(d[0], S[0], s[0], g[0]);
				system("cls");
				cout << "--------------------------Input dislay setting--------------------------" << endl;
				d[0].xuatthongtin(S[0]);
				if (isvalid1 == true)
				{
					cout << "This car already existed, data will be overwritten." << endl;
				}
				else
				{
					cout << "This is new car, please enter the following information." << endl;
				}
				d[0].nhapthongtinDisplay(d[0]);
				set.insertKey(S[0]);
				set1.insertName(S[0]);
				disp.insertKey(d[0]);
				disp1.insertName(d[0]);
				sou.insertKey(s[0]);
				sou1.insertName(s[0]);
				gen.insertKey(g[0]);
				gen1.insertName(g[0]);
			}
			
			askinputDisplay();
		}
	} while (!isvalid);
}

void inputSound()				// man hinh hien thi khi nguoi dung chon sound setting
{
	int count;
	string key1;
	cout << "--------------------------Input sound setting--------------------------" << endl;
	bool isvalid = true;
	do
	{
		bool isvalid1 = true;
		cout << endl;
		if (isvalid)
		{
			cout << "Enter the vehicle number: ";
		}
		else
		{
			cout << "Please re-enter the vehicle number: ";
		}
		getline(cin,key1);
		if ((key1.length() != 8) || (!f.isNumber(key1)))				// chuoi nhap vao phai la so nguyen co 8 ky tu
		{
			isvalid = false;
			cout << "The vehicle number must be an 8-character number." << endl;
			continue;
		}
		else
		{
			isvalid = true;
			Setting* S = new Setting[100];
			Display* d = new Display[100];
			Sound* s = new Sound[100];
			General* g = new General[100];
			if (set.searchNodeInKey(key1) != NULL)
			{
				system("cls");
				isvalid1 = true;
				set.add_Key_list();
				vector<string> keyyy;
				set.keynumber.swap(keyyy);
				for (int i = 0; i < keyyy.size(); i++)
				{
					if (key1 == keyyy[i])
					{
						count = i;
						break;
					}
				}
				cout << "--------------------------Input sound setting--------------------------" << endl;
				cout << endl;
				cout << "Car index: " << count + 1 << endl;
				cout << "		Key number: " << set.searchNodeInKey(key1)->info.get_key() << endl;
				sou.searchNodeInKey(key1)->info.nhapthongtin(disp.searchNodeInKey(key1)->info, set.searchNodeInKey(key1)->info, sou.searchNodeInKey(key1)->info, gen.searchNodeInKey(key1)->info);
				system("cls");
				cout << "--------------------------Input sound setting--------------------------" << endl;
				cout << "	Car index: " << count + 1 << endl;
				sou.searchNodeInKey(key1)->info.xuatthongtin(set.searchNodeInKey(key1)->info);
				cout << "This car already existed, data will be overwritten." << endl;
				sou.searchNodeInKey(key1)->info.nhapthongtinSound(sou.searchNodeInKey(key1)->info);

				set.insertKey(set.searchNodeInKey(key1)->info);
				set1.insertName(set.searchNodeInKey(key1)->info);
				disp.insertKey(disp.searchNodeInKey(key1)->info);
				disp1.insertName(disp.searchNodeInKey(key1)->info);
				sou.insertKey(sou.searchNodeInKey(key1)->info);
				sou1.insertName(sou.searchNodeInKey(key1)->info);
				gen.insertKey(gen.searchNodeInKey(key1)->info);
				gen1.insertName(gen.searchNodeInKey(key1)->info);
			}
			else
			{
				isvalid1 = false;
				S[0].set_key(key1);
				d[0].set_key(key1);
				s[0].set_key(key1);
				g[0].set_key(key1);
				system("cls");
				cout << "--------------------------Input sound setting--------------------------" << endl;
				cout << endl;
				cout << "		Key number: " << S[0].get_key() << endl;
				d[0].nhapthongtin(d[0], S[0], s[0], g[0]);
				system("cls");
				cout << "--------------------------Input sound setting--------------------------" << endl;
				d[0].xuatthongtin(S[0]);
				if (isvalid1 == true)
				{
					cout << "This car already existed, data will be overwritten." << endl;
				}
				else
				{
					cout << "This is new car, please enter the following information." << endl;
				}
				d[0].nhapthongtinDisplay(d[0]);
				set.insertKey(S[0]);
				set.insertName(S[0]);
				disp.insertKey(d[0]);
				disp.insertName(d[0]);
				sou.insertKey(s[0]);
				sou.insertName(s[0]);
				gen.insertKey(g[0]);
				gen.insertName(g[0]);
			}

			askinputSound();
		}
	} while (!isvalid);
}

void inputGeneral()					// man hinh hien thi khi nguoi dung chon General setting
{
	int count;
	string key1;
	cout << "--------------------------Input general setting--------------------------" << endl;
	bool isvalid = true;
	do
	{

		bool isvalid1 = true;
		
		cout << endl;
		if (isvalid)
		{
			cout << "Enter the vehicle number: ";
		}
		else
		{
			cout << "Please re-enter the vehicle number: ";
		}
		getline(cin, key1);
		if ((key1.length() != 8) || (!f.isNumber(key1)))				// chuoi nhap vao phai la so nguyen co 8 ky tu
		{
			isvalid = false;
			cout << "The vehicle number must be an 8-character number." << endl;
			continue;
		}
		else
		{
			isvalid = true;
			Setting* S = new Setting[100];
			Display* d = new Display[100];
			Sound* s = new Sound[100];
			General* g = new General[100];
			if (set.searchNodeInKey(key1) != NULL)
			{
				system("cls");
				isvalid1 = true;
				set.add_Key_list();
				vector<string> keyyy;
				set.keynumber.swap(keyyy);
				for (int i = 0; i < keyyy.size(); i++)
				{
					if (key1 == keyyy[i])
					{
						count = i;
						break;
					}
				}
				cout << "--------------------------Input general setting--------------------------" << endl;
				cout << "Car index: " << count + 1 << endl;
				cout << "		Key number: " << set.searchNodeInKey(key1)->info.get_key() << endl;

				gen.searchNodeInKey(key1)->info.nhapthongtin(disp.searchNodeInKey(key1)->info, set.searchNodeInKey(key1)->info, sou.searchNodeInKey(key1)->info, gen.searchNodeInKey(key1)->info);
				system("cls");
				cout << "--------------------------Input general setting--------------------------" << endl;
				cout << "	Car index: " << count + 1 << endl;
				gen.searchNodeInKey(key1)->info.xuatthongtin(set.searchNodeInKey(key1)->info);

				cout << "This car already existed, data will be overwritten." << endl;

				gen.searchNodeInKey(key1)->info.selectlanguage(gen.searchNodeInKey(key1)->info);
				system("cls");
				gen.searchNodeInKey(key1)->info.xuatthongtin(set.searchNodeInKey(key1)->info);
				gen.searchNodeInKey(key1)->info.selecttimezone(gen.searchNodeInKey(key1)->info);
				set.insertKey(set.searchNodeInKey(key1)->info);
				set1.insertName(set.searchNodeInKey(key1)->info);
				disp.insertKey(disp.searchNodeInKey(key1)->info);
				disp1.insertName(disp.searchNodeInKey(key1)->info);
				sou.insertKey(sou.searchNodeInKey(key1)->info);
				sou1.insertName(sou.searchNodeInKey(key1)->info);
				gen.insertKey(gen.searchNodeInKey(key1)->info);
				gen1.insertName(gen.searchNodeInKey(key1)->info);
			}
			else
			{
				isvalid1 = false;
				S[0].set_key(key1);
				d[0].set_key(key1);
				s[0].set_key(key1);
				g[0].set_key(key1);
				cout << "--------------------------Input general setting--------------------------" << endl;
				cout << "		Key number: " << S[0].get_key() << endl;
				g[0].nhapthongtin(d[0], S[0], s[0], g[0]);
				system("cls");
				cout << "--------------------------Input general setting--------------------------" << endl;
				g[0].xuatthongtin(S[0]);
				cout << "This is new car, please enter the following information." << endl;
				g[0].selectlanguage(g[0]);
				system("cls");
				g[0].xuatthongtin(g[0]);
				g[0].selecttimezone(g[0]);
				set.insertKey(S[0]);
				set1.insertName(S[0]);
				disp.insertKey(d[0]);
				disp1.insertName(d[0]);
				sou.insertKey(s[0]);
				sou1.insertName(s[0]);
				gen.insertKey(g[0]);
				gen1.insertName(g[0]);
			}
			askinputGeneral();
		}
	} while (!isvalid);
}
																// ham co nhiem vu hoi nguoi dung co nhap du lieu cho cac xe tiep theo hay khong
void askinputDisplay()						
{
	string ask;
	char c_ask;
	bool isvalid1 = true;
	do
	{
		if (isvalid1)
		{
			cout << " Will you input for next car? " << endl;
			cout << "Chose y/n --> ";
		}
		else
		{
			cout << " Please re-enter your choice: ";
		}
		getline(cin, ask);
		if ((ask.length() != 1) || (f.isNumber(ask)))
		{
			isvalid1 = false;
			cout << " Your choice must be 1 character (y/n or Y/N). " << endl;
			continue;
		}
		else
		{
			isvalid1 = true;
			if ((ask[0] >= 'A') && (ask[0] <= 'Z'))
			{
				ask[0] += 32;
				c_ask = ask[0];
			}
			else
			{
				c_ask = ask[0];
			}
			if (c_ask == 'y')
			{
				system("cls");
				inputDisplay();
				break;
			}
			else if (c_ask == 'n')
			{
				system("cls");
				delete12();
				saveSettingfile();
				hello();
				
			}
		}
	} while (!isvalid1);

}

void askinputSound()
{
	string ask;
	char c_ask;
	bool isvalid1 = true;
	do
	{
		if (isvalid1)
		{
			cout << " Will you input for next car? " << endl;
			cout << "Chose y/n --> ";
		}
		else
		{
			cout << " Please re-enter your choice: ";
		}
		getline(cin, ask);
		if ((ask.length() != 1) || (f.isNumber(ask)))
		{
			isvalid1 = false;
			cout << " Your choice must be 1 character (y/n or Y/N). " << endl;
			continue;
		}
		else
		{
			isvalid1 = true;
			if ((ask[0] >= 'A') && (ask[0] <= 'Z'))
			{
				ask[0] += 32;
				c_ask = ask[0];
			}
			else
			{
				c_ask = ask[0];
			}
			if (c_ask == 'y')
			{
				system("cls");
				cin.ignore();
				inputSound();
				break;
			}
			else if (c_ask == 'n')
			{
				system("cls");
				delete12();
				saveSettingfile();
				hello();
			}
		}
	} while (!isvalid1);
}

void askinputGeneral()
{
	string ask;
	char c_ask;
	bool isvalid1 = true;
	do
	{
		if (isvalid1)
		{
			cout << " Will you input for next car? " << endl;
			cout << "Chose y/n --> ";
		}
		else
		{
			cout << " Please re-enter your choice: ";
		}
		getline(cin, ask);
		if ((ask.length() != 1) || (f.isNumber(ask)))
		{
			isvalid1 = false;
			cout << " Your choice must be 1 character (y/n or Y/N). " << endl;
			continue;
		}
		else
		{
			isvalid1 = true;
			if ((ask[0] >= 'A') && (ask[0] <= 'Z'))
			{
				ask[0] += 32;
				c_ask = ask[0];
			}
			else
			{
				c_ask = ask[0];
			}
			if (c_ask == 'y')
			{
				system("cls");
				cin.ignore();
				inputGeneral();
				break;
			}
			else if (c_ask == 'n')
			{
				system("cls");
				delete12();
				saveSettingfile();
				hello();
			}
		}
	} while (!isvalid1);
}

void saveSettingfile()						// ghi cac gia tri vao file Setting.txt
{
	fstream save;
	save.open("Setting.txt", ios::app);
	vector<string> keyyy;
	set.add_Key_list();
	set.keynumber.swap(keyyy);
	for (int i = 0; i < keyyy.size(); i++)
	{
		save
			<< "Common:"
			<< set.searchNodeInKey(keyyy[i])->info.get_ownername() << ","					//b0
			<< set.searchNodeInKey(keyyy[i])->info.get_email() << ","						//b1
			<< set.searchNodeInKey(keyyy[i])->info.get_key() << ","							//b2
			<< set.searchNodeInKey(keyyy[i])->info.get_odo() << ","							//b3
			<< set.searchNodeInKey(keyyy[i])->info.get_sevice() << ";"
			<< "General:"
			<< gen.searchNodeInKey(keyyy[i])->info.get_language() << ","					//b4
			<< gen.searchNodeInKey(keyyy[i])->info.get_timezone() << ";"
			<< "Display:"
			<< disp.searchNodeInKey(keyyy[i])->info.get_lightlevel() << ","					//b5
			<< disp.searchNodeInKey(keyyy[i])->info.get_screenlightlevel() << ","			//b6
			<< disp.searchNodeInKey(keyyy[i])->info.get_taplolightlevel() << ";"
			<< "Sound:"
			<< sou.searchNodeInKey(keyyy[i])->info.get_media() << ","						//b7
			<< sou.searchNodeInKey(keyyy[i])->info.get_call() << ","						//b8
			<< sou.searchNodeInKey(keyyy[i])->info.get_navigation() << ","					//b9
			<< sou.searchNodeInKey(keyyy[i])->info.get_notification() << endl;				//b10	
	}
	save.close();
}

void loadSettingfile()							// doc file va gan gia tri tuong ung
{
	Setting* setting = new Setting[100];
	Display* display = new Display[100];
	Sound* sound = new Sound[100];
	General* general = new General[100];
	
	ifstream file("Setting.txt");
	int count1 = 0;
	if (file.is_open())
	{
		string ss;
		vector<string> b, c, dd, e, gg, h, k, l;
		while (getline(file, ss))
		{
			b = f.explode(ss, ',');
			c = f.explode(b[0], ':');
			dd = f.explode(b[4], ';');
			e = f.explode(dd[1], ':');
			gg = f.explode(b[5], ';');
			h = f.explode(gg[1], ':');
			k = f.explode(b[7], ';');
			l = f.explode(k[1], ':');
			setting[count1].set_ownername(c[1]);
			setting[count1].set_email(b[1]);
			setting[count1].set_key(b[2]);
			setting[count1].set_odo(stoi(b[3]));
			setting[count1].set_service(stoi(dd[0]));
		
			general[count1].set_ownername(c[1]);
			general[count1].set_email(b[1]);
			general[count1].set_key(b[2]);
			general[count1].set_odo(stoi(b[3]));
			general[count1].set_service(stoi(dd[0]));
			general[count1].set_language(e[1]);
			general[count1].set_timezone(gg[0]);

			display[count1].set_ownername(c[1]);
			display[count1].set_email(b[1]);
			display[count1].set_key(b[2]);
			display[count1].set_odo(stoi(b[3]));
			display[count1].set_service(stoi(dd[0]));
			display[count1].set_lightlevel(stoi(h[1]));
			display[count1].set_screenlightlevel(stoi(b[6]));
			display[count1].set_taplolightlevel(stoi(k[0]));

			sound[count1].set_ownername(c[1]);
			sound[count1].set_email(b[1]);
			sound[count1].set_key(b[2]);
			sound[count1].set_odo(stoi(b[3]));
			sound[count1].set_service(stoi(dd[0]));
			sound[count1].set_media(stoi(l[1]));
			sound[count1].set_call(stoi(b[8]));
			sound[count1].set_navigation(stoi(b[9]));
			sound[count1].set_notification(stoi(b[10]));
		
			set.insertKey(setting[count1]);
			disp.insertKey(display[count1]);
			sou.insertKey(sound[count1]);
			gen.insertKey(general[count1]);

			set1.insertName(setting[count1]);
			disp1.insertName(display[count1]);
			sou1.insertName(sound[count1]);
			gen1.insertName(general[count1]);
			count1++;
		}

	}
	file.close();

}

void delete12()
{
	fstream delete123;
	delete123.open("Setting.txt", ofstream::out);
	delete123.close();
}

void checkfileSetting()						// kiem soat ngoai le khi doc file chua co du lieu
{
	
	const int aa = 1;
	const string bb = "2";
	try
	{
		ifstream filee("Setting.txt");
		if (f.is_emptyfile(filee))
		{
			throw aa;
		}
		if (!f.is_emptyfile(filee))
		{
			throw bb;
		}
	}
	catch (int eee)
	{

		if (eee == aa)
		{
			cout << "--------------------------File Setting.txt has no data----------------------------" << endl;
		}
	}
	catch (string ggg)
	{
		if (ggg == bb)
		{
			loadSettingfile();
		}
	}

}



