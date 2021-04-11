#pragma once
template <typename T>
class Stick
{
public:
	Stick();
	~Stick();
	void push(T data);
	T TopElem();
	void deleteTopElem();
	T predTopElem();
	void deletePredTopElem();
	T& operator[](const int index);
	int GetSize();
private:
	template<typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;
		Node(T data = T(), Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};

	int Size;
	Node<T>* top;
};

