#include "BinaryTree.h"

void BinaryTree::DestroyNode(TNode*node)
{
	if (node!=nullptr)//Проверка на существование нода
	{
		DestroyNode(node->left);
		DestroyNode(node->right);
		delete node;
	}
}

void BinaryTree::AddItem(int x,string Surname)
{
	Insert(x,Surname, Root);
}

void BinaryTree::DeleteItem(int x)
{
	Delete(x,Root);
}


void BinaryTree::Insert(int x,string Surname,TNode*&node)
{
	if (!ElementExist(Root, x))
	{
		if (node == nullptr)
			node = new TNode(x, Surname);
		else
		{
			if (x < node->Key)
				Insert(x, Surname, node->left);

			if (x > node->Key)
				Insert(x, Surname, node->right);

		}
	}
	else
		cout << "The key "<<x<<" is already exist\n";
}

void BinaryTree::Delete(int x, TNode*& node)
{
	if (ElementExist(Root, x))
	{
		if (x == node->Key)
		{
			if (node->right == nullptr)
			{
				TNode* temp = node;
				node = node->left;
				delete temp;
				return;
			}
			else
			{
				TNode* temp = node->right;
				if (temp->left == nullptr)
				{
					temp->left = node->left;
					node = new TNode(*temp);
					delete temp;
					return;
				}
				else
				{
					TNode* ptr = temp->left;
					while (ptr->left != nullptr)
					{
						temp = ptr;
						ptr = ptr->left;
					}
					temp->left = ptr->right;
					ptr->left = node->left;
					ptr->right = node->right;
					temp = ptr;
					node = new TNode(*temp);
					delete temp;
					return;
				}
			}
		}
		else if (x < node->Key)
			Delete(x, node->left);
		else
			Delete(x, node->right);
	}
	else
		cout << "There is no element with such index" << endl;
}

void BinaryTree::NLR(TNode*& node)
{
	if (node != nullptr)
	{
		cout << node->Key << " ";
		NLR(node->left);
		NLR(node->right);
	}
}

void BinaryTree::LNR(TNode*&node)
{
	if (node != nullptr)
	{
		LNR(node->left);
		cout << node->Key << " ";
		LNR(node->right);
	}
}

void BinaryTree::LRN(TNode*& node)
{
	if (node != nullptr)
	{
		LRN(node->left);		
		LRN(node->right);
		cout << node->Key << " ";
	}
}

string BinaryTree::Search(TNode* node,int x)
{
	if (ElementExist(Root, x))
	{
		if (node->Key == x)
			return node->Surname;
		if (x < node->Key)
			return Search(node->left, x);
		else
			return Search(node->right, x);
	}
	else
		return "No element with such key";
	
}

bool BinaryTree::ElementExist(TNode* node, int x)
{
	if (node == nullptr)
		return false;
	else if (node->Key == x)
		return true;

	if (x < node->Key)
		return ElementExist(node->left, x);
	else
		return ElementExist(node->right, x);
}


void BinaryTree::PrintNLR()
{
	NLR(Root);
}

void BinaryTree::PrintLNR()
{
	LNR(Root);
}

void BinaryTree::PrintLRN()
{
	LRN(Root);
}

string BinaryTree::SearchFor(int x)
{
	return Search(Root, x);
}


