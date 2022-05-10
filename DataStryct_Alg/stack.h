#pragma once
#ifndef _STACK_H_
#define _STACK_H_

//******************************Macros 宏定义************************************
#define STACK_NUM     10   //栈深度

//*****************************Typedefs 结构体类型*******************************
typedef struct
{
	int top; //栈顶
	int buff[STACK_NUM];
}StackTypdef;

//****************************Extern Variables 外部变量**************************


//**************************Function Prototypes 函数原型*************************


int Stack_Empty(StackTypdef *input);     //栈是否为空
int Stack_Push(StackTypdef *input, int value);//压栈
int Stack_Pop(StackTypdef *input);			   //出栈
#endif

