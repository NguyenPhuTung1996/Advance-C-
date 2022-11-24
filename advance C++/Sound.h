#ifndef SOUND_H
#define SOUND_H

#include "Setting.h"
#include<iostream>
#include<string>
#include<math.h>
#include<fstream>
#include<regex>
#include"Function.h"
#define COL 8
#define LENGTH 8
using namespace std;

class Sound : public Setting
{
public:
	Sound();
	Function f;
	int get_media();
	int get_call();
	int get_navigation();
	int get_notification();
	void set_media(int n);
	void set_call(int n);
	void set_navigation(int n);
	void set_notification(int n);
	void nhapthongtinSound(Sound& s);
	~Sound();
private:
	int media_volumelevel;
	int call_volumelevel;
	int navigation_volumelevel;
	int notification_volumelevel;
};




#endif // !SOUND_H
