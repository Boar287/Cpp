#include "List.h"



template<typename T>//Шаблонные функции должны выглядеть таким образом
List<T>::List()
{
	Size = 0;
	head = nullptr;
}

template<typename T>
List<T>::~List()
{
	clear();
}



template<typename T>
void List<T>::push_back(T data)//Добавление элемента в конец списка
{
	if (head == nullptr)
	{
		head = new Node<T>(data);


	}
	else
	{
		Node<T>* current = this->head;
		while (current->pNext != nullptr)//Проверка следующего элемента на налптр
		{
			current = current->pNext;
		}

		current->pNext = new Node<T>(data);//Указатель на новый последний элемент
	}
	Size++;
}

template<typename T>
int List<T>::GetSize()
{
	return Size;
}

template<typename T>
void List<T>::pop_front()//Удаление первого элемента
{
	Node<T>* temp = head;
	head = head->pNext;
	delete temp;
	Size--;
}

template<typename T>
void List<T>::clear()
{
	while (Size)//Очищение всего списка с помощью приминения  pop_front()
	{
		this->pop_front();
	}
}

template<typename T>
void List<T>::push_front(T data)//Добавление элемента в начало списка
{
	head = new Node<T>(data,/*Ещеё сатрый head*/head);//Сначала создаётся новый объект, потом в head присваивается данный объект
	Size++;
}

template<typename T>
void List<T>::insert(T data, int index)
{

	if (index == 0)
		push_front(data);
	else
	{
		Node<T>* previous = this->head;
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}
		Node<T>* newNode = new Node<T>(data, previous->pNext);//В данном случае поле  previous->pNext еще хранит в себе указатель на следующий объект после того, который мы планируем добавить
		previous->pNext = newNode;//В значение поля предыдущего объекта добавляем newNode


	}
	Size++;
}

template<typename T>
void List<T>::removeAt(int index)
{
	if (index == 0)
		pop_front();
	else
	{
		Node<T>* previous = this->head;
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}
		Node<T>* toDelete = previous->pNext;//Удаляемый элемент
		previous->pNext = toDelete->pNext;
		delete toDelete;


	}
	Size--;
}

template<typename T>
void List<T>::pop_back()//Удаление последнего элемента
{
	removeAt(Size - 1);
}



template<typename T>
T& List<T>::operator[](const int index)
{
	int counter = 0;
	Node<T>* current = this->head;//Отвечает за то, в каком конкретно элементе мы находимся, чтобы проверить адрес следующего элемента
	while (current != nullptr)//Проверка текущего элемента на налптр
	{
		if (counter == index)
			return current->data;

		current = current->pNext;
		counter++;
	}
}
