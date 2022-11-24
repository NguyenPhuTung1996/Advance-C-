#ifndef BINARYTREE_H
#define BINARYTREE_H

#include<iostream>
#include<string>
#include<fstream>
#include<math.h>
#include<fstream>
#include<regex>
#include<stack>
#include<iomanip>
#include<sstream>
#include<stdexcept>
#include "Function.h"
#include<vector>

using namespace std;

template<class T>
class BinaryTree					// class cay nhi phan
{
public:
	BinaryTree();
	~BinaryTree();
	struct node
	{
		T info;
		node* left, * right;
	};
	node* root;
	void set_stt(int a);
	int get_stt();
	void insertKey(T data);
	void insertName(T data);
	void printDisplay();
	void printSound();
	void printGeneral();
	void searchCarByName(string name);
	node* searchNodeInKey(string key);			
	bool Check();
	void add_Key_list();
	void add_KeybyName(string name);
	vector<string> keynumber;
	vector<string> keynumber_byname;
private:
	void seacrhCarByNamePrivate(string name, node* ptr);
	void seacrhCarByKey(string name, node* ptr);
	void InorderTravDisplay(node* ptr);
	void InorderTravSound(node* ptr);
	void InorderTravGeneral(node* ptr);
	void MakeTree_key(T data, node* ptr);
	void MakeTree_name(T data, node* ptr);
	node* searchNodeInKeyPrivate(string key, node* ptr);
	void add_Key_listPrivate(node* ptr);
	void add_KeybyNamePrivate(string name, node* ptr);
	int stt;
	bool Checkname = true;
	int count;
};

#endif 