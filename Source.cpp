#include <iostream>
#include "Queue_By_list.h"

using namespace std;

int main()
{
	Queue<int> queue;
	for (int i = 0; i < 10; i++)
		queue.enqueue(i);
	cout << "Front: " << queue.getFront() << endl;
	while (!queue.isEmpty())
	{
		cout << queue.getFront() << " ";
		queue.dequeue();
	}
	getchar();
	return 0;
}