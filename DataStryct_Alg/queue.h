#pragma once
#ifndef _QUEUE_H_
#define _QUEUE_H_

//******************************Macros 宏定义************************************
#define QUEUE_NUM     10   //队长

//*****************************Typedefs 结构体类型*******************************
typedef struct
{
	int head;               //队头
	int tail;               //队尾
	int buff[QUEUE_NUM];
	int length = sizeof(buff) / sizeof(int);
}QueueTypdef;

//****************************Extern Variables 外部变量**************************


//**************************Function Prototypes 函数原型*************************
void Enqueue(QueueTypdef *input, int value);//出队
int Dequeue(QueueTypdef *input);            //入队
#endif


