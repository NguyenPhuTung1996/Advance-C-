#include"Display.h"


Display::Display()
{
	this->lightlevel = 10;
	this->screen_lightlevel = 10;
	this->taplo_lightlevel = 10;
}

Display::~Display()
{

}

int Display::get_lightlevel()				// Tra ve gia tri lightlevel
{
	return this->lightlevel;
}

void Display::set_lightlevel(int a)			// Nhan vao gia tri lightlevel sau khi nhap
{
	this->lightlevel = a;
}

int Display::get_screenlightlevel()			// Tra ve gia tri screen lightlevel
{
	return this->screen_lightlevel;
}

void Display::set_screenlightlevel(int n)	// Nhan vao gia tri screen lightlevel sau khi nhap
{
	this->screen_lightlevel = n;
}

int Display::get_taplolightlevel()			// Tra ve gia tri taplo lightlevel
{
	return this->taplo_lightlevel;
}

void Display::set_taplolightlevel(int n)	// Nhan vao gia tri taplo lightlevel sau khi nhap
{
	this->taplo_lightlevel = n;
}

void Display::nhapthongtinDisplay(Display& s)      // Menu nguoi dung nhap thong tin display
{
	//--------------------Nguoi dung nhap Light level---------------------
	string s_light;
	bool isvalid1 = true;
	do
	{
		if (isvalid1)
		{
			cout << "		Set light level: ";
		}
		else
		{
			cout << "		Please re-enter light level: ";
		}
		getline(cin, s_light);
		if ((s_light.length() > 3) || (!f.isNumber(s_light)) || (stoi(s_light) <= 0) || (stoi(s_light) > 100))
		{
			isvalid1 = false;
			cout << "		Light level must be an integer between 1 and 100." << endl;
			continue;
		}
		else
		{
			isvalid1 = true;
		}
	} while (!isvalid1);
	int *light= new int;
	int light1 = stoi(s_light);
	*light = light1;
	s.set_lightlevel(light1);

	//--------------------Nguoi dung nhap Screen-light level---------------------
	string s_screen;
	bool isvalid2 = true;
	do
	{
		if (isvalid2)
		{
			cout << "		Set screen-light level: ";
		}
		else
		{
			cout << "		Please re-enter screen-light level: ";
		}
		getline(cin, s_screen);
		if ((s_screen.length() > 3) || (!f.isNumber(s_screen)) || (stoi(s_screen) <= 0) || (stoi(s_screen) > 100))
		{
			isvalid2 = false;
			cout << "		Screen-light level must be an integer between 1 and 100." << endl;
			continue;
		}
		else
		{
			isvalid2 = true;
		}
	} while (!isvalid2);
	int scrlight= stoi(s_screen);
	s.set_screenlightlevel(scrlight);


	//--------------------Nguoi dung nhap Taplo-light level---------------------
	string s_taplo;
	bool isvalid3 = true;
	do
	{
		if (isvalid3)
		{
			cout << "		Set Taplo-light level: ";
		}
		else
		{
			cout << "		Please re-enter Taplo-light level: ";
		}
		getline(cin, s_taplo);
		if ((s_taplo.length() > 3) || (!f.isNumber(s_taplo)) || (stoi(s_taplo) <= 0) || (stoi(s_taplo) > 100))
		{
			isvalid3 = false;
			cout << "		Taplo-light level must be an integer between 1 and 100." << endl;
			continue;
		}
		else
		{
			isvalid3 = true;
		}
	} while (!isvalid3);
	int taplolight = stoi(s_taplo);
	s.set_taplolightlevel(taplolight);
}


