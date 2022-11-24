#include"BinaryTree.h"

template<class T>
BinaryTree<T>::BinaryTree()
{
	this->count = 0;
	keynumber.clear();
	keynumber_byname.clear();
	this->Checkname = true;
}

template<class T>
BinaryTree<T>::~BinaryTree()
{
	
}

template<class T>
void BinaryTree<T>::insertKey(T data)
{
	if (root != NULL) 
	{ // neu cay da co root
		MakeTree_key(data, root);
	}
	else 
	{
		root = new node(); // neu cay chua co root
		root->info = data;
		root->left = NULL;
		root->right = NULL;
	}
}

template<class T>
void BinaryTree<T>::insertName(T data)
{
	if (root != NULL)
	{ // neu cay da co root
		MakeTree_name(data, root);
	}
	else
	{
		root = new node(); // neu cay chua co root
		root->info = data;
		root->left = NULL;
		root->right = NULL;
	}
}

template<class T>
void BinaryTree<T>::MakeTree_key(T data, node* ptr)				// tao cay nhi phan theo key number
{
	if (data.get_key() < ptr->info.get_key()) 
	{
		if (ptr->left != NULL) 
		{
			MakeTree_key(data, ptr->left);
		}
		else 
		{
			ptr->left = new node();
			ptr->left->info = data;
			ptr->left->left = NULL;
			ptr->left->right = NULL;
		}
	}
	else if (data.get_key() > ptr->info.get_key()) 
	{
		if (ptr->right != NULL) 
		{
			MakeTree_key(data, ptr->right);
		}
		else
		{
			ptr->right = new node();
			ptr->right->info = data;
			ptr->right->right = NULL;
			ptr->right->left = NULL;
		}
	}
	else 
	{
		ptr->info = data;
	}
}

template<class T>
void BinaryTree<T>::MakeTree_name(T data, node* ptr)			//tao cay nhi phan theo ten chu xe
{
	
	if (data.get_ownername() <= ptr->info.get_ownername())
	{
		if (data.get_key() == ptr->info.get_key())
		{
			ptr->info = data;
		}
		else
		{
			if (ptr->left != NULL)
			{
				MakeTree_name(data, ptr->left);
			}
			else
			{
				ptr->left = new node();
				ptr->left->info = data;
				ptr->left->left = NULL;
				ptr->left->right = NULL;
			}
		}
	}
	else if (data.get_ownername() > ptr->info.get_ownername())
	{
		if (ptr->right != NULL)
		{
			MakeTree_name(data, ptr->right);
		}
		else
		{
			ptr->right = new node();
			ptr->right->info = data;
			ptr->right->right = NULL;
			ptr->right->left = NULL;
		}
	}
}

template<class T>
void BinaryTree<T>::InorderTravDisplay(node* ptr)				//duyet inoder cay nhi phan va in thong tin display 
{
		if (ptr != NULL) 
		{
			InorderTravDisplay(ptr->left);
			cout << setw(30) << left << ptr->info.get_ownername() << setw(30) << left << ptr->info.get_email() << setw(15) << left << ptr->info.get_key() << setw(10) << left << ptr->info.get_odo() << setw(20) << left << ptr->info.get_sevice() << setw(20) << left << ptr->info.get_lightlevel() << setw(20) << left << ptr->info.get_screenlightlevel() << setw(20) << left << ptr->info.get_taplolightlevel() << endl;
			InorderTravDisplay(ptr->right);
		}
}

template<class T>
void BinaryTree<T>::InorderTravSound(node* ptr)				//duyet inoder cay nhi phan va in thong tin sound
{
	if (ptr != NULL)
	{
		InorderTravSound(ptr->left);
		cout << setw(30) << left << ptr->info.get_ownername() << setw(30) << left << ptr->info.get_email() << setw(15) << left << ptr->info.get_key() << setw(10) << left << ptr->info.get_odo() << setw(20) << left << ptr->info.get_sevice() << setw(20) << left << ptr->info.get_media() << setw(20) << left << ptr->info.get_call() << setw(25) << left << ptr->info.get_navigation() << setw(25) << left << ptr->info.get_notification() << endl;
		InorderTravSound(ptr->right);
	}
}

template<class T>
void BinaryTree<T>::InorderTravGeneral(node* ptr)			//duyet inoder cay nhi phan va in thong tin general
{
	if (ptr != NULL)
	{
		InorderTravGeneral(ptr->left);
		cout << setw(30) << left << ptr->info.get_ownername() << setw(30) << left << ptr->info.get_email() << setw(15) << left << ptr->info.get_key() << setw(10) << left << ptr->info.get_odo() << setw(20) << left << ptr->info.get_sevice() << setw(20) << left << ptr->info.get_timezone() << setw(25) << left << ptr->info.get_language() << endl;
		InorderTravGeneral(ptr->right);
	}
}

template<class T>
void BinaryTree<T>::seacrhCarByNamePrivate(string name, node* ptr)			// tim kiem xe theo key number
{
	if (ptr != NULL)
	{
		seacrhCarByNamePrivate(name,ptr->left);
		if (name == ptr->info.get_ownername())
		{
			Checkname= false;
		}
		seacrhCarByNamePrivate(name,ptr->right);
	}
}

template<class T>
void BinaryTree<T>::searchCarByName(string name)
{
	seacrhCarByNamePrivate(name, root);
}


template<class T>
typename BinaryTree<T>::node* BinaryTree<T>::searchNodeInKeyPrivate(string key, node* ptr)
{
	if (ptr != NULL)
	{
		if (ptr->info.get_key() == key)
		{
			return ptr;
		}
		else
		{
			if (key < ptr->info.get_key())
			{
				return searchNodeInKeyPrivate(key, ptr->left);
			}
			else
			{
				return searchNodeInKeyPrivate(key, ptr->right);
			}
		}
	}
	else
	{
		return NULL;
	}
}

template<class T>
typename BinaryTree<T>::node* BinaryTree<T>::searchNodeInKey(string key)
{
	return searchNodeInKeyPrivate(key, root);
}

template<class T>
void BinaryTree<T>::set_stt(int a)
{
	this->stt = a;
}

template<class T>
int BinaryTree<T>::get_stt()
{
	return this->stt;
}

template<class T>
void BinaryTree<T>::printDisplay()
{
	InorderTravDisplay(root);
}
template<class T>
void BinaryTree<T>::printSound()
{
	InorderTravSound(root);
}
template<class T>
void BinaryTree<T>::printGeneral()
{
	InorderTravGeneral(root);
}


template<class T>
bool BinaryTree<T>::Check()
{
	return this->Checkname;
}

template<class T>
void BinaryTree<T>::add_Key_listPrivate(node* ptr)
{
	if (ptr != NULL)
	{
		add_Key_listPrivate(ptr->left);
		string a;
		a = ptr->info.get_key();
		keynumber.push_back(a);
		add_Key_listPrivate(ptr->right);
	}
	else
	{
		return;
	}
}

template<class T>
void BinaryTree<T>::add_Key_list()
{
	add_Key_listPrivate(root);
}

template<class T>
void BinaryTree<T>::add_KeybyNamePrivate(string name, node* ptr)
{
	if (ptr != NULL)
	{
		add_KeybyNamePrivate(name, ptr->left);
		
		if (name == ptr->info.get_ownername())
		{
			string a;
			a = ptr->info.get_key();
			keynumber_byname.push_back(a);
		}
		add_KeybyNamePrivate(name, ptr->right);
	}
}

template<class T>
void BinaryTree<T>::add_KeybyName(string name)
{
	add_KeybyNamePrivate(name, root);
}
