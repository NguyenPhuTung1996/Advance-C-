#ifndef DISPLAY_H
#define DISPLAY_H

#include<iostream>
#include<string>
#include<math.h>
#include<fstream>
#include<regex>
#include"Function.h"
#include "Setting.h"
#define COL 8
#define LENGTH 8
#define displayfile "displayfile.dat"
using namespace std;

class Display : public Setting
{
public:
	Display();
	Function f;
	int get_lightlevel();
	int get_screenlightlevel();
	int get_taplolightlevel();
	void set_lightlevel(int a);
	void set_screenlightlevel(int n);
	void set_taplolightlevel(int n);
	void nhapthongtinDisplay(Display& s);
	~Display();
private:
	int lightlevel;
	int screen_lightlevel;
	int taplo_lightlevel;

};


#endif
