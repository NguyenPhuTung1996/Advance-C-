#include "Setting.h"

Setting::Setting()
{
}
Setting::~Setting()
{}


string Setting::get_ownername()					// Tra ve ten nguoi dung sau khi nhap
{
	return this->ownername;
}

void Setting::set_ownername(string arr)			// Nhan vao ten nguoi dung sau khi nhap
{
	this->ownername = arr;
}

string Setting::get_email()
{
	return this->email;
}

void Setting::set_email(string a)
{
	this->email = a;
}
string Setting::get_key()					// Tra ve ma so nguoi dung sau khi nhap
{
	return this->key;
}

void Setting::set_key(string arr)	// Nhan vao ma so nguoi dung sau khi nhap
{
	this->key = arr;
}

int Setting::get_odo()						// Tra ve quang duong de da di duoc
{
	return this->odo;
}

void Setting::set_odo(int n)				// Nhan vao gia tri odo nguoi dung sau khi nhap
{
	if (n < 0)
	{
		cout << "Invalid distance !!!" << endl;
	}
	else
	{
		this->odo = n;
	}
}

int Setting::get_sevice()		// Tra ve quang duong bao tri cua xe
{
	return this->service;
}

void Setting::set_service(int n)			// Nhan vao gia tri service nguoi dung sau khi nhap
{
	if (n < 0)
	{
		cout << "Invalid distance !!!" << endl;
	}
	else
	{
		this->service = n;
	}
}

void Setting::nhapthongtin(Setting& s, Setting& t, Setting& g, Setting& d)
{
	// ------------------Nguoi dung nhap ten----------------------
	string s_ownername;
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
		getline(cin, s_ownername);
		if ((f.isNumber(s_ownername)) )			// Ho va ten khong duoc chua ky tu so
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
	s.set_ownername(s_ownername);
	t.set_ownername(s_ownername);
	d.set_ownername(s_ownername);
	g.set_ownername(s_ownername);
	//----------------------Nhap email chu xe-------------------
	string s_email;
	bool isvalid2 = true;
	do
	{
		if (isvalid2)
		{
			cout << "		Set email: ";
		}
		else
		{
			cout << "		Please re-enter your email: ";
		}
		getline(cin, s_email);
		if (!f.checkEmail(s_email))					// Kiem tra dinh dang email theo tieu chuan
		{
			isvalid2 = false;
			cout << "		Incorrect email format." << endl;
			continue;
		}
		else
		{
			isvalid2 = true;
			
		}
	} while (!isvalid2);
	s.set_email(s_email);
	t.set_email(s_email);
	g.set_email(s_email);
	d.set_email(s_email);

	//-----------------Nguoi dung nhap ODO number----------------------
	string s_odo;
	bool isvalid4 = true;
	do
	{
		if (isvalid4)
		{
			cout << "		Set ODO number: ";
		}
		else
		{
			cout << "		Please re-enter your ODO number: ";
		}
		getline(cin, s_odo);
		if ((s_odo.length()==0)|| (!f.isNumber(s_odo)) || (stoi(s_odo) < 0))			// ODO chi duoc nhap ky tu so tu 1->9
		{
			isvalid4 = false;
			cout << "		Incorrect ODO number format." << endl;
			continue;
		}
		else
		{
			isvalid4 = true;
			
		}
	} while (!isvalid4);
	int odo_a = stoi(s_odo);
	s.set_odo(odo_a);
	t.set_odo(odo_a);
	g.set_odo(odo_a);
	d.set_odo(odo_a);

	//-----------------------Nguoi dung nhap service distance------------------
	string s_service;
	bool isvalid5 = true;
	do
	{
		if (isvalid5)
		{
			cout << "		Set Service distance: ";
		}
		else
		{
			cout << "		Please re-enter your Service distance: ";
		}
		getline(cin, s_service);
		if ((s_odo.length() == 0)||(!f.isNumber(s_service)) || (stoi(s_service) < 0))			// Service distance chi duoc nhap ky tu so tu 1->9
		{
			isvalid5 = false;
			cout << "		Incorrect Service distance format." << endl;
			continue;
		}
		else
		{
			isvalid5 = true;
		}
	} while (!isvalid5);
	int service_a = stoi(s_service);
	s.set_service(service_a);
	t.set_service(service_a);
	g.set_service(service_a);
	d.set_service(service_a);
}

void Setting::xuatthongtin(Setting& s)
{
	cout << "		Owner name: " << s.get_ownername() << endl;
	cout << "		Email: " << s.get_email() << endl;
	cout << "		Key number: " << s.get_key() << endl;
	cout << "		ODO number: " << s.get_odo() << endl;
	cout << "		Remind service: " << s.get_sevice() << endl;
}




