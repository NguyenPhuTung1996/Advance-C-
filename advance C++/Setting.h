#ifndef SETTING_H
#define SETTING_H

#include<iostream>
#include<string>
#include<fstream>
#include<math.h>
#include<fstream>
#include<regex>
#include "Function.h"

using namespace std;


class Setting
{
public:
	Setting();
	Function f;
	void nhapthongtin(Setting& s, Setting& t, Setting& g, Setting& d);
	void xuatthongtin(Setting& s);
	string get_ownername();
	string get_key();
	string get_email();
	int get_odo();
	int get_sevice();
	void set_ownername(string arr);
	void set_key(string arr);
	void set_odo(int n);
	void set_service(int n);
	void set_email(string arr);
	~Setting();
private:
	string ownername;
	string key;
	string email;
	int odo;
	int service;
};


#endif 