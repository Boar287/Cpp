#pragma once
#include<iostream>
using namespace std;
template<typename T>
class List
{
public:
	List();
	~List();
	void push_back(T data);
	int GetSize();
	void pop_front();
	void clear();
	void push_front(T data);
	void insert(T data, int index);
	void removeAt(int index);
	void pop_back();
	T& operator[](const int index);
private:

	//��������� ����� ���������� ��������
	template<typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;
		Node(T data = T(), Node* pNext = nullptr)//���� � ���� �������� �����, �� ����� ���������� ����������� �� ���������, ���� �� ����������� ��� ������, �� ����� ��������� �������� �� ���������
		{
			this->data = data;
			this->pNext = pNext;
		}
		//~Node()
		//{

		//}	

	};

	//������ ������ ����
	int Size;//����� ����� ������� ��������� � ����� ������
	Node<T>* head;//����������� ������ ������ ������
};

