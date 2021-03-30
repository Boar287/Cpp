#pragma once
#include<iostream>
using namespace std;

class BinaryTree
{
public:
	class TNode
	{
	public:
		TNode(int Key,string Surname)
		{
			this->Key = Key;
			this->Surname = Surname;
			this->right = nullptr;//Данный нод является листом (нет потомков)
			this->left = nullptr;
		}
		TNode(TNode&other)
		{
			this->Key = other.Key;
			this->Surname = other.Surname;
			this->right = other.right;
			this->left = other.left;
		}
		int Key;
		string Surname;
		TNode* left;
		TNode* right;
	};
	~BinaryTree()
	{
		DestroyNode(Root);
	}
	BinaryTree()
	{
		Root = nullptr;
	}

	void DestroyNode(TNode* node);
	void AddItem(int x,string Surname);	
	void DeleteItem(int x);
	void PrintNLR();
	void PrintLNR();
	void PrintLRN();
	string SearchFor(int x);
private:
	void Insert(int x,string Surname,TNode*&node);
	void Delete(int x, TNode*& node);
	void NLR(TNode*& node);
	void LNR(TNode*& node);
	void LRN(TNode*& node);
	string Search(TNode* node,int x);
	bool ElementExist(TNode* node, int x);
	TNode* Root;
};

