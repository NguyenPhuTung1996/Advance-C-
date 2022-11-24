#ifndef GENERAL_H
#define GENERal_H

#include<iostream>
#include<string>
#include<math.h>
#include<fstream>
#include<regex>
#include"Function.h"
#include"Setting.h"
#include<vector>
#include"Information.h"
#define COL 8
#define LENGTH 8
#define timezonefile "timezone.txt"
#define languagefiel "language.txt"
using namespace std;

class General : public Setting, public CommonInfo
{
public:
	General();
	Function f;
	CommonInfo com[100];
	void selecttimezone(General& s);
	void selectlanguage(General& s);
	string get_timezone();
	string get_language();
	void set_timezone(string a);
	void set_language(string a);
	void downloadTimezone(General& s, int a);
	void downloadLanguage(General& s, int a);
	vector<string> nnnn;
	~General();
private:
	string timezone;
	string language;
};


#endif // !GENERAL_H


