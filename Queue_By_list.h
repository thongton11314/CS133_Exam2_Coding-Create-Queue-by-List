#ifndef _QUEUEBYLIST_
#define _QUEUEBYLIST_
#include <list>

template<typename T>
class Queue
{
private:
	std::list<T> queue;
public:
	Queue() {}

	void enqueue(T value)
	{
		queue.push_front(value);
	}

	void dequeue()
	{
		queue.pop_front();
	}

	T getFront()
	{
		return queue.front();
	}

	bool isEmpty()
	{
		return (queue.size() == 0);
	}
};
#endif