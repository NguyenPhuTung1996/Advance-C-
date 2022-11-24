#ifndef FUNCTION_H
#define FUNCTION_H
#include<iostream>
#include<string>
#include<math.h>
#include<fstream>
#include<regex>
#include<stdio.h>
#define COL 8

using namespace std;

class Function
{
public:
	const vector<string> explode(const string& s, const char& c);
	bool isNumber(const string& str);
	void sort_up(int* arr, int n);
	void sort_down(int* arr, int n);
	int getstep_up();
	int getstep_down();
	bool checkfile(string file);
	bool checkEmail(string arr);
	bool is_emptyfile(ifstream& pfile);
	void swapstring(string a, string b);
	void swapint(int a, int b);
private:
	int step_up = 0;
	int step_down = 0;
};




#endif // !FUNCTION_H
