//---------------------------------------------------------------------------

#pragma hdrstop

#include "TwoList.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
template<typename T>
TwoList<T>::TwoList()
{
	Size = 0;
	head = nullptr;
	tail = nullptr;
}

template<typename T>
TwoList<T>::~TwoList()
{
	this->clear();
}

template<typename T>
void TwoList<T>::push_back(T data)//Добавление элемента в конец списка
{
	if (tail == nullptr)
	{
		tail = new Node<T>(data);
		head = tail;
	}
	else
	{
		Node<T>* temp = tail;
		tail = new Node<T>(data, head, tail);
		head->pPrevious = tail;
		temp->pNext = tail;
	}
	Size++;
}

template<typename T>
void TwoList<T>::pop_front()//Удаление первого элемента
{
	Node<T>* temp = head;
	head = head->pNext;
	head->pPrevious = tail;
	tail->pNext = head;
	delete temp;
	Size--;
}

template<typename T>
void TwoList<T>::push_front(T data)//Добавление элемента в начало списка
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
		tail = head;
	}
	else
	{
		Node<T>* temp = head;
		head = new Node<T>(data, head, tail);
		tail->pNext = head;
		temp->pPrevious = head;
	}
	Size++;
}

template<typename T>
void TwoList<T>::insert(T data, int index)
{
	if (index == 0)
		push_front(data);
	else if (index == Size)
		push_back(data);
	else
	{
		if (index <= this->Size / 2)//Идём через начало
		{
			Node<T>* previous = this->head;
			for (int i = 0; i < index - 1; i++)
			{
				previous = previous->pNext;
			}
			Node<T>* temp = previous->pNext;
			Node<T>* Insert = new Node<T>(data,previous->pNext,previous);
			previous->pNext = Insert;
			temp->pPrevious = Insert;

		}
		else
		{
			Node<T>* previous = this->tail;
			for (int i = 0; i < Size-index - 1; i++)
			{
				previous = previous->pPrevious;
			}
			Node<T>* temp = previous->pPrevious;
			Node<T>* Insert = new Node<T>(data, previous, temp);
			previous->pPrevious = Insert;
			temp->pNext = Insert;
		}
		Size++;
	}

}

template<typename T>
void TwoList<T>::removeAt(int index)
{
	if (index == 0)
		pop_front();
	else if (index == Size - 1)
		pop_back();
	else
	{
		if (index <= this->Size / 2)//Идём через начало
		{
			Node<T>* previous = this->head;
			for (int i = 0; i < index - 1; i++)
			{
				previous = previous->pNext;
			}
			Node<T>* ToDelete = previous->pNext;
			Node<T>* temp = ToDelete->pNext;
			previous->pNext = ToDelete->pNext;
			temp->pPrevious = previous;
			delete ToDelete;

		}
		else
		{
			Node<T>* previous = this->tail;
			for (int i = 0; i < Size - index - 2; i++)
			{
				previous = previous->pPrevious;
			}
			Node<T>* ToDelete = previous->pPrevious;
			Node<T>* temp = ToDelete->pPrevious;
			previous->pPrevious = ToDelete->pPrevious;
			temp->pNext = previous;
		}
		Size--;
	}
}

template<typename T>
void TwoList<T>::pop_back()//Удаление с конца
{
	Node<T>* temp = tail;
	tail = tail->pPrevious;
	tail->pNext = head;
	head->pPrevious = tail;
	delete temp;
	Size--;
}

template<typename T>
T& TwoList<T>::operator[](const int index)
{
	int counter = 0;
	Node<T>* current = this->head;
	while (current != nullptr)
	{
		if (counter == index)
			return current->data;

		current = current->pNext;
		counter++;
	}
}

template<typename T>
int TwoList<T>::GetSize()
{
	return Size;
}

template<typename T>
void TwoList<T>::clear()
{
	while (Size)
	{
		this->pop_front();
	}
}
