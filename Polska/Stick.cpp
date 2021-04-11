#include "Stick.h"
template<typename T>
inline Stick<T>::Stick()
{
	Size = 0;
	top = nullptr;
}

template<typename T>
Stick<T>::~Stick()
{
	while (Size)
	{
		deleteTopElem();
	}
}

template<typename T>
void Stick<T>::push(T data)
{
	top = new Node<T>(data, top);
	Size++;
}

template<typename T>
T Stick<T>::TopElem()
{
	return top->data;
}

template<typename T>
void Stick<T>::deleteTopElem()
{
	Node<T>* temp = top;
	top = top->pNext;
	delete temp;
	Size--;
}

template<typename T>
T Stick<T>::predTopElem()
{
	Node<T>* temp = top->pNext;
	if (temp == nullptr)
		return -1;
	return temp->data;
}

template<typename T>
void Stick<T>::deletePredTopElem()
{
	Node<T>* toDelete = top->pNext;
	top->pNext = toDelete->pNext;
	delete toDelete;
	Size--;
}

template<typename T>
T& Stick<T>::operator[](const int index)
{
	int counter = 0;
	Node<T>* temp =this->top;
	while (temp != nullptr)
	{
		if (counter == index)
			return temp->data;

		counter++;
		temp = temp->pNext;
	}
}

template<typename T>
int Stick<T>::GetSize()
{
	return Size;
}
