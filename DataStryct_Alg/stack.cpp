#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
//*****************************Constant 常量************************************

//******************************Macros 宏定义************************************

//**************************Global variables 全局变量****************************

//*******Local Macros, Typedfes and variables  局部宏定义、数据类型、变量**********

//**********************Global Function Prototypes全局函数原型********************

int Stack_Empty(const StackTypdef *input);     //栈是否为空
void Stack_Push(StackTypdef *input, int value);//压栈
//********************Local Function Prototypes局部函数原型***********************


//********************Global Function Definition 全局函数实现*********************

//-------------------------------------------------------------------------------
//名称：检查栈是否为空;
//输入参数：无;
//返回值：1为空 0不为空;
//-------------------------------------------------------------------------------
int Stack_Empty(const StackTypdef *input)
{
	if (input->top == 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}
//-------------------------------------------------------------------------------
//名称：压栈;
//输入参数：无;
//返回值：无;
//-------------------------------------------------------------------------------
void Stack_Push(StackTypdef *input , int value)
{
	input->top = input->top + 1;     //压栈指针先增，在将数据存入
	input->buff[input->top] = value; //存入值
}

//********************Local Function Definition 局部函数实现**********************

