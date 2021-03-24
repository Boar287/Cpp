//---------------------------------------------------------------------------

#pragma hdrstop

#include "Queue.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
template<typename T>
Queue<T>::Queue()
{
	Size = 0;
	head = nullptr;
	tail = nullptr;
}

template<typename T>
Queue<T>::~Queue()
{
	clear();
}

template<typename T>
inline void Queue<T>::push(T data)
{
	if (tail == nullptr)
	{
		tail = new Node<T>(data);
		head = tail;
	}
	else
	{
		Node<T>* temp = tail;
		tail = new Node<T>(data, nullptr, tail);
		temp->pNext = tail;
	}
	Size++;
}

template<typename T>
T Queue<T>::front()
{
	return head->data;
}

template<typename T>
T Queue<T>::back()
{
	return tail->data;
}

template<typename T>
void Queue<T>::pop_back()
{
	Node<T>* temp = tail;
	tail = tail->pPrevious;
	delete temp;
	Size--;
}

template<typename T>
void Queue<T>::pop_front()
{
	Node<T>* temp = head;
	head = head->pNext;
	delete temp;
	Size--;
}

template<typename T>
bool Queue<T>::empty()
{
	if(Size==0)
		return true;
	return false;
}

template<typename T>
int Queue<T>::GetSize()
{
	return Size;
}

template<typename T>
void Queue<T>::clear()
{
	while (Size)
	{
		this->pop_front();
	}
}

template<typename T>
T& Queue<T>::operator[](const int index)
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
