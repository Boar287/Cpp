//---------------------------------------------------------------------------

#ifndef QueueH
#define QueueH

template<typename T>
class Node
{
public:
	Node* pNext;
	Node* pPrevious;
	T data;
	Node(T data = T(), Node* pNext = nullptr, Node* pPrevious = nullptr)
	{
	this->data = data;
	this->pNext = pNext;
	this->pPrevious = pPrevious;
	}
};

template<typename T>
class Queue
{
public:
	Queue();
	~Queue();
	void push(T data);
	T front();
	T back();
	virtual void pop_back();
	virtual void pop_front();
	bool empty();
	int GetSize();
	void clear();
	T& operator[](const int index);
protected:

	int Size;
	Node<T>* head;
	Node<T>* tail;
};
//---------------------------------------------------------------------------
#endif
