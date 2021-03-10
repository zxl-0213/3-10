#include"Queue.h"

void QueueInit(Queue* q)
{
	
	q->Front = q->Back = NULL;
}


void QueuePushBack(Queue* q, QDataType x)
{
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	newnode->data = x;
	newnode->next = NULL;
	if (q->Front == NULL)
	{
		q->Back = newnode;
		q->Front = newnode;

	}
	else
	{
		q->Back->next = newnode;
		q->Back = newnode;

	}
}


void QueuePopFront(Queue* q)
{
	QueueNode* cur = q->Front->next;
	free(q->Front);
	q->Front = cur;
}

QDataType QueueFront(Queue* q)
{
	return q->Front->data;
}

QDataType QueueBack(Queue* q)
{
	return q->Back->data;
}

int QueueSize(Queue* q)
{
	int count = 0;
	QueueNode* cur = q->Front;
	while (cur)
	{
		cur = cur->next;
		count++;
	}
	return count;
}

int QueueEmpty(Queue* q)
{
	return q->Front->next == NULL ? 1 : 0;
}

void QueueDestory(Queue* q)
{
	q->Front = q->Back = NULL;

	free(q->Front);
	free(q->Back);
}




