#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int QDataType;
typedef struct QueueNode
{
	QDataType data;
	struct QueueNode* next;
}QueueNode;
typedef struct Queue
{
	struct QueueNode* Front;
	struct QueueNode* Back;
}Queue;
//��ʼ��
void QueueInit(Queue* q);

//��β��Ԫ��
void QueuePushBack(Queue* q, QDataType x);

//��ͷ��Ԫ��
void QueuePopFront(Queue* q);

//��ȡ��ͷԪ��
QDataType QueueFront(Queue* q);

//��ȡ��βԪ��
QDataType QueueBack(Queue* q);


//��ȡ����Ԫ�ظ���
int QueueSize(Queue* q);

//����Ƿ�Ϊ��
int QueueEmpty(Queue* q);

//���ٶ���
void QueueDestory(Queue* q);