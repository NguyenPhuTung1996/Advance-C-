#include"Inform.h"

Inform::Inform(){}
Inform::~Inform(){}

string Inform::get_name()
{
	return this->name;
}

void Inform::set_name(string a)
{
	this->name = a;
}

string Inform::get_personalkey()
{
	return this->personnalkey;
}

void Inform::set_personnalkey(string a)
{
	this->personnalkey = a;
}

string Inform::get_email()
{
	return this->email;
}

void Inform::set_email(string a)
{
	this->email = a;
}

void Inform::nhapthongtinInform(Inform& s)
{								//-----------------Nhap ten chu xe----------------
	string s_name;
	bool isvalid1 = true;
	do
	{
		if (isvalid1)
		{
			cout << "		Set owner name: ";
		}
		else
		{
			cout << "		Please re-enter your owner name: ";
		}
		getline(cin, s_name);
		if (f.isNumber(s_name))			// Ho va ten khong duoc chua ky tu so
		{
			isvalid1 = false;
			cout << "		The input name cannot contain numeric characters." << endl;
			continue;
		}
		else
		{
			isvalid1 = true;
		}
	} while (!isvalid1);
	s.set_name(s_name);
					
								//----------------------Nhap personal key---------------------
	string s_personalkey;
	bool isvalid3 = true;
	do
	{
		if (isvalid3)
		{
			cout << "		Set key number: ";
		}
		else
		{
			cout << "		Please re-enter your key number: ";
		}
		cin >> s_personalkey;
		if ((s_personalkey.length() != 8) || (!f.isNumber(s_personalkey)))			// Key gom 8 ky tu so, duoc nhap vao tu 1->9
		{
			isvalid3 = false;
			cout << "		Incorrect key number format." << endl;
			continue;
		}
		else
		{
			isvalid3 = true;
		}
	} while (!isvalid3);
	s.set_personnalkey(s_personalkey);

	
}
