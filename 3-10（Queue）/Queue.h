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
//初始化
void QueueInit(Queue* q);

//队尾插元素
void QueuePushBack(Queue* q, QDataType x);

//队头出元素
void QueuePopFront(Queue* q);

//获取队头元素
QDataType QueueFront(Queue* q);

//获取队尾元素
QDataType QueueBack(Queue* q);


//获取队内元素个数
int QueueSize(Queue* q);

//检测是否为空
int QueueEmpty(Queue* q);

//销毁队列
void QueueDestory(Queue* q);