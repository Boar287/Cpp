//--------------------------------------------------------------------------
#include "Queue.h"
#ifndef TwoListH
#define TwoListH

template<typename T>
class TwoList:public Queue<T>
{
public:
	TwoList();
	~TwoList();
	void push_back(T data);
	void pop_front() override;
	void push_front(T data);
	void insert(T data, int index);
	void removeAt(int index);
	void pop_back() override;
	T& operator[](const int index);
	int GetSize();
	void clear();
private:

	int Size;
	Node<T>* head;
	Node<T>* tail;
};
//---------------------------------------------------------------------------
#endif
