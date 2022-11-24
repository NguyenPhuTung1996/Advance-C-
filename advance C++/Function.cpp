#include"Function.h"



bool Function::isNumber(const string& str)					//	ham kiem tra chuoi nhap vao la so hay ky tu
{
	for (char const& c : str) {
		if (std::isdigit(c) == 0) return false;
	}
	return true;
}

void Function::sort_up(int* arr, int n)					//	ham sap xep mang theo thu tu tang dan
{
	int temp = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				step_up++;
			}
		}
	}
}

void Function::sort_down(int* arr, int n)				//	ham sap xep mang theo thu tu giam dan
{
	int temp = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				step_down++;
			}
		}
	}
}

int Function::getstep_up()								// Tinh so buoc thuc hien thuat toan
{
	return this->step_up;
}

int Function::getstep_down()							// Tnig so buoc thuc hien thuat toan
{
	return this->step_down;
}

bool Function::checkEmail(string arr)					// Kiem tra dinh dang email
{
	const regex re_mail("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
	return regex_match(arr, re_mail);
}

bool Function::checkfile(string file)					// Kiem tra file da duoc mo hay chua
{
	ifstream file_to_check(file.c_str());
	if (file_to_check.is_open())
		return true;
	return false;
	file_to_check.close();
}
const vector<string> Function:: explode(const string& s, const char& c)				// tach chuoi theo ky tu
{
	string buff{ "" };
	vector<string> v;

	for (auto n : s)
	{
		if (n != c)
			buff += n;
		else if (n == c && buff != "")
		{
			v.push_back(buff);
			buff = "";
		}
	}
	if (buff != "")
		v.push_back(buff);

	return v;
}

bool Function::is_emptyfile(ifstream& pfile)					// kiem tra file da co du lieu hay chua
{
	return pfile.peek() == ifstream::traits_type::eof(); 
};

void Function::swapstring(string a, string b)
{
	string temp;
	temp =a;
	a =b;
	b = temp;
}

void Function::swapint(int a, int b)
{
	int c=0;
	c = a;
	a = b;
	b = c;
}

