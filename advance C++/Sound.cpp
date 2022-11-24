#include"Sound.h"

Sound::Sound()
{
	this->media_volumelevel = 20;
	this->call_volumelevel = 20;
	this->navigation_volumelevel = 20;
	this->notification_volumelevel = 20;
}

Sound::~Sound()
{

}

int Sound::get_media()								// ham truy cap vao bien mediavolume
{
	return this->media_volumelevel;
}

void Sound::set_media(int n)						// gan gia tri moi cho bien mediavolume				
{
	this->media_volumelevel = n;
}

int Sound::get_call()								// ham truy cap vao bien callvolume
{
	return this->call_volumelevel;
}

void Sound::set_call(int n)							// gan gia tri moi cho bien callvolume				
{
	this->call_volumelevel = n;
}

int Sound::get_navigation()							// ham truy cap vao bien navigationvolume
{
	return this->navigation_volumelevel;
}

void Sound::set_navigation(int n)
{
	this->navigation_volumelevel = n;				// gan gia tri moi cho biennavigationvolume				
}

int Sound::get_notification()						// ham truy cap vao bien notificationvolume
{
	return this->notification_volumelevel;
}

void Sound::set_notification(int n)					// gan gia tri moi cho bien notificationvolume				
{
	this->notification_volumelevel = n;
}

void Sound::nhapthongtinSound(Sound& s)				// ham nhap thong tin sound setting
{
	//-------------------------Nguoi dung nhap Media volume level-------------------
	string s_media;
	bool isvalid1 = true;
	do
	{
		if (isvalid1)
		{
			cout << "		Set media volume level: ";
		}
		else
		{
			cout << "		Please re-enter media volume level: ";
		}
		cin >> s_media;
		if ((s_media.length() > 3) || (!f.isNumber(s_media)) || (stoi(s_media) <= 0) || (stoi(s_media) > 100))
		{
			isvalid1 = false;
			cout << "		Media volume level must be an integer between 1 and 100." << endl;
			continue;
		}
		else
		{
			isvalid1 = true;
		}
	} while (!isvalid1);
	int media = stoi(s_media);
	s.set_media(media);


	//--------------------Nguoi dung nhap Call volume level---------------------
	string s_call;
	bool isvalid2 = true;
	do
	{
		if (isvalid2)
		{
			cout << "		Set call volume level: ";
		}
		else
		{
			cout << "		Please re-enter call volume level: ";
		}
		cin >> s_call;
		if ((s_call.length() > 3) || (!f.isNumber(s_call)) || (stoi(s_call) <= 0) || (stoi(s_call) > 100))
		{
			isvalid2 = false;
			cout << "		Call volume level must be an integer between 1 and 100." << endl;
			continue;
		}
		else
		{
			isvalid2 = true;
		}
	} while (!isvalid2);
	int call = stoi(s_call);
	s.set_call(call);

	//--------------------Nguoi dung nhap Navigation volume level---------------------
	string s_navigation;
	bool isvalid3 = true;
	do
	{
		if (isvalid3)
		{
			cout << "		Set navigation volume level: ";
		}
		else
		{
			cout << "		Please re-enter navigation volume level: ";
		}
		cin >> s_navigation;
		if ((s_navigation.length() > 3) || (!f.isNumber(s_navigation)) || (stoi(s_navigation) <= 0) || (stoi(s_navigation) > 100))
		{
			isvalid3 = false;
			cout << "		Navigation volume level must be an integer between 1 and 100." << endl;
			continue;
		}
		else
		{
			isvalid3 = true;
		}
	} while (!isvalid3);
	int navigation = stoi(s_navigation);
	s.set_navigation(navigation);

	//--------------------Nguoi dung nhap Notification volume level---------------------
	string s_notification;
	bool isvalid4 = true;
	do
	{
		if (isvalid4)
		{
			cout << "		Set notification volume level: ";
		}
		else
		{
			cout << "		Please re-enter notification volume level: ";
		}
		cin >> s_notification;
		if ((s_notification.length() > 3) || (!f.isNumber(s_notification)) || (stoi(s_notification) <= 0) || (stoi(s_notification) > 100))
		{
			isvalid4 = false;
			cout << "		Notification volume level must be an integer between 1 and 100." << endl;
			continue;
		}
		else
		{
			isvalid4 = true;
		}
	} while (!isvalid4);
	int notification = stoi(s_notification);
	s.set_notification(notification);

}
