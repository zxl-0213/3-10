#include"Queue.h"

int main()
{
	Queue q;

	QueueInit(&q);

	QueuePushBack(&q, 1);
	QueuePushBack(&q, 2);
	QueuePushBack(&q, 3);
	QueuePushBack(&q, 4);

	int ret = QueueSize(&q);
	printf("%d\n",ret);
	
	while (ret>0)
	{
		printf("%d", QueueFront(&q));
		QueuePopFront(&q);
		ret--;
	}
	

	





	return 0;
 }