#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
//*****************************Constant 常量************************************

//******************************Macros 宏定义************************************

//**************************Global variables 全局变量****************************

//*******Local Macros, Typedfes and variables  局部宏定义、数据类型、变量**********

//**********************Global Function Prototypes全局函数原型********************
void Enqueue(QueueTypdef *input, int value);//出队
int Dequeue(QueueTypdef *input);            //入队
//********************Local Function Prototypes局部函数原型***********************


//********************Global Function Definition 全局函数实现*********************

//-------------------------------------------------------------------------------
//名称：入队;
//输入参数：无;
//返回值：无;
//-------------------------------------------------------------------------------
void Enqueue(QueueTypdef *input , int value)
{
	input->buff[input->tail] = value;
	if (input->tail == input->length)//队列满
	{
		input->tail = 0;
	}
	else
	{
		input->tail = input->tail + 1;
	}
}
//-------------------------------------------------------------------------------
//名称：出队;
//输入参数：无;
//返回值：出队元素;
//-------------------------------------------------------------------------------
int Dequeue(QueueTypdef *input)
{
	int value = 0;
	value = input->buff[input->head];
	if (input->head == input->length)//队列空
	{
		input->head = 0;//重新站队
	}
	else
	{
		input->head = input->head + 1;
	}
	return value;
}
//********************Local Function Definition 局部函数实现**********************

