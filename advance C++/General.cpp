#include"General.h"

General::General()
{
	this->timezone = "(GMT-00:00)";
	this->language = "English";
}

General::~General()
{

}

string General::get_timezone()				// ham truy cap gia tri cua bien timezone
{
	return this->timezone;
}

void General::set_timezone(string a)		// gan gia tri moi cho bien timezone 
{
	this->timezone = a;
}

string General::get_language()				// ham truy cap gia tri cua bien language
{
	return this->language;
}

void General::set_language(string a)		// gan gia tri moi cho bien language
{
	this->language = a;
}

void General::selecttimezone(General& s)				// menu chon timezone
{
	cout << "-----------------------Select Timezone Data---------------------" << endl;
	cout << endl;
	string timezone;
	int count3 = 0;
	ifstream file2("timezones.txt");
	vector<string> b;
	if (file2.is_open())
	{
		while (getline(file2, timezone))
		{
			cout << count3 + 1 << ". " << timezone << endl;
			count3++;
		}
		file2.close();
	}
	else
	{
		cout << " Couldn't open timezones.txt for reading." << endl;
	}
	string s_timezone;
	bool isvalid1 = true;
	do
	{
		if (isvalid1)
		{
			cout << "	-> Your selection: ";
		}
		else
		{
			cout << "	Please re-enter your selection: ";
		}
		getline(cin, s_timezone);
		if ((s_timezone.length() > 3) || (!f.isNumber(s_timezone)) || (stoi(s_timezone) <= 0) || (stoi(s_timezone) > 32))			// du lieu nhap vao phai la so nguyen tu 1 den 32
		{
			isvalid1 = false;
			cout << "	Your selection must be an integer between 1 and 32." << endl;
			continue;
		}
		else
		{
			isvalid1 = true;
		}
	} while (!isvalid1);
	switch (stoi(s_timezone))
	{
	case 1:
	{
		cout << "You have chosen (GMT-12:00) /  International Date Line West " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 2:
	{
		cout << "You have chosen (GMT-11:00) /  Midway Island, Samoa  " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 3:
	{
		cout << "You have chosen (GMT-10:00) /  Hawaii " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 4:
	{
		cout << "You have chosen (GMT-09:00) /  Alaska " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 5:
	{
		cout << "You have chosen (GMT-08:00) /  Tijuana, Baja California " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 6:
	{
		cout << "You have chosen (GMT-07:00) /  Chihuahua, La Paz, Mazatlan - New " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 7:
	{
		cout << "You have chosen (GMT-06:00) /  Guadalajara, Mexico City, Monterrey - New " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 8:
	{
		cout << "You have chosen (GMT-05:00) /  Eastern Time (US and Canada) " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 9:
	{
		cout << "You have chosen (GMT-04:00) /  Atlantic Time (Canada) " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 10:
	{
		cout << "You have chosen (GMT-03:30) /  Newfoundland " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 11:
	{
		cout << "You have chosen (GMT-02:00) /  Mid-Atlantic " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 12:
	{
		cout << "You have chosen (GMT-01:00) /  Azores " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 13:
	{
		cout << "You have chosen (GMT-00:00) /  Monrovia, Reykjavik " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 14:
	{
		cout << "You have chosen (GMT+01:00) /  Belgrade, Bratislava, Budapest, Ljubljana, Prague " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 15:
	{
		cout << "You have chosen (GMT+02:00) /  Minsk " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 16:
	{
		cout << "You have chosen (GMT+03:00) /  Moscow, St. Petersburg, Volgograd " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 17:
	{
		cout << "You have chosen (GMT+04:00) /  Abu Dhabi, Muscat " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 18:
	{
		cout << "You have chosen (GMT+04:30) /  Kabul " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 19:
	{
		cout << "You have chosen (GMT+05:00) /  Tashkent " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 20:
	{
		cout << "You have chosen (GMT+05:30) /  Chennai, Kolkata, Mumbai, New Delhi " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 21:
	{
		cout << "You have chosen (GMT+05:45) /  Kathmandu " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 22:
	{
		cout << "You have chosen (GMT+06:00) /  Astana, Dhaka " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 23:
	{
		cout << "You have chosen (GMT+06:30) /  Yangon (Rangoon) " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 24:
	{
		cout << "You have chosen (GMT+07:00) /  Bangkok, Hanoi, Jakarta " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 25:
	{
		cout << "You have chosen (GMT+08:00) /  Beijing, Chongqing, Hong Kong, Urumqi " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 26:
	{
		cout << "You have chosen (GMT+08:30) /  Irkutsk, Ulaanbaatar " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 27:
	{
		cout << "You have chosen (GMT+09:00) /  Seoul  " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 28:
	{
		cout << "You have chosen (GMT+09:30) /  Adelaide " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 29:
	{
		cout << "You have chosen (GMT+10:00) /  Canberra, Melbourne, Sydney " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 30:
	{
		cout << "You have chosen (GMT+11:00) /  Magadan, Solomon Islands, New Caledonia " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 31:
	{
		cout << "You have chosen (GMT+12:00) /  Fiji, Kamchatka, Marshall Is. " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	case 32:
	{
		cout << "You have chosen (GMT+13:00) /  Nuku'alofa " << endl;
		int a;
		a = stoi(s_timezone);
		s.downloadTimezone(s, a);
		break;
	}
	}
}

void General::selectlanguage(General& s)		// menu chon language
{
	
	cout << "----------------------Select language------------------" << endl;
	cout << endl;
	ifstream file("languages.txt");
	string language;
	int count1 = 0;
	vector<string> ssss;
	
	if (file.is_open())
	{
		while (getline(file, language))
		{
			nnnn.resize(1000);
			ssss = f.explode(language, ',');
			nnnn[count1] = ssss[1];
			count1++;
		}
		file.close();
	}
	sort(nnnn.begin(), nnnn.end(), greater<string>());
	for (int i = count1 - 1; i >= 0; i--)
	{
		cout << 30 - i << ", " << nnnn[i] << endl;
	}
	fstream delete_file;
	delete_file.open("languages.txt", ofstream::out);
	delete_file.close();
	fstream file1("languages.txt", ios::app);
	for (int i = count1-1; i >=0 ; i--)
	{
		file1 << 30 - i << "," << nnnn[i] << endl;
	}
	file1.close();
	string s_language;
	bool isvalid1 = true;
	do
	{
		if (isvalid1)
		{
			cout << "	-> Your selection: ";
		}
		else
		{
			cout << "	Please re-enter your selection: ";
		}
		getline(cin, s_language);
		if ((s_language.length() > 3) || (!f.isNumber(s_language)) || (stoi(s_language) <= 0) || (stoi(s_language) > 30)) //du lieu nhap vao phai la so nguyen tu 1 den 30
		{
			isvalid1 = false;
			cout << "	Your selection must be an integer between 1 and 30." << endl;
			continue;
		}
		else
		{
			isvalid1 = true;
		}
	} while (!isvalid1);
	
	switch (stoi(s_language))
	{
	case 1:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 2:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);	
		break;
	}
	case 3:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);	
		break;
	}
	case 4:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);	
		break;
	}
	case 5:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);		
		break;
	}
	case 6:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);	
		break;
	}
	case 7:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);	
		break;
	}
	case 8:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);	
		break;
	}
	case 9:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);	
		break;
	}
	case 10:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 11:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 12:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 13:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 14:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 15:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 16:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 17:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 18:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 19:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 20:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 21:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 22:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 23:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 24:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 25:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 26:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 27:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 28:
	{

		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 29:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	case 30:
	{
		int a;
		a = stoi(s_language);
		s.downloadLanguage(s, a);
		break;
	}
	}
}


void General::downloadLanguage(General& s, int a)
{
	string language;
	int count1 = 0;
	vector<string> name;

	ifstream file1("languages.txt");
	if (file1.is_open())
	{
		while (getline(file1, language))
		{
			if (count1 == a)
			{
				break;
			}
			name = f.explode(language, ' ,');
			com[count1].setName(name[1]);
			s.set_language(name[1]);
			count1++;
		}
		file1.close();
	}
	
	else
	{
		cout << " Couldn't open languages.txt for reading." << endl;
	}
	cout << "You have choosen " << nnnn[count1] << endl;
}

void General::downloadTimezone(General& s, int a)	
{
	string timezone;
	int count2 = 0;
	ifstream file2("timezones.txt");
	vector<string> b;
	if (file2.is_open())
	{
		while (getline(file2, timezone))
		{
			if (count2 == a)
			{
				break;
			}
			b = f.explode(timezone, '/');
			com[count2].setNumber(b[0]);
			s.set_timezone(b[0]);
			count2++;
		}
		file2.close();
	}
	else
	{
		cout << " Couldn't open timezones.txt for reading." << endl;
	}
}

