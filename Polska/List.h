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

	//Вложенный класс отдельного элемента
	template<typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;
		Node(T data = T(), Node* pNext = nullptr)//Если в дату передать класс, то будет реализован конструктор по умолчанию, если же примитивный тип данных, то будет присвоено значение по умолчанию
		{
			this->data = data;
			this->pNext = pNext;
		}
		//~Node()
		//{

		//}	

	};

	//Методы Класса Лист
	int Size;//Чтобы знать сколько элементов в нашем списке
	Node<T>* head;//Определение головы нашего списка
};

