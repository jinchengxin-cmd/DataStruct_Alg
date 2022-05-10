#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
//*****************************Constant 常量************************************

//******************************Macros 宏定义************************************

//**************************Global variables 全局变量****************************

//*******Local Macros, Typedfes and variables  局部宏定义、数据类型、变量**********

//**********************Global Function Prototypes全局函数原型********************

int Stack_Empty(StackTypdef *input);     //栈是否为空
int Stack_Push(StackTypdef *input, int value);//压栈
int Stack_Pop(StackTypdef *input);			   //出栈
//********************Local Function Prototypes局部函数原型***********************


//********************Global Function Definition 全局函数实现*********************

//-------------------------------------------------------------------------------
//名称：检查栈是否为空;
//输入参数：无;
//返回值：-1为空 1不为空;
//-------------------------------------------------------------------------------
int Stack_Empty(StackTypdef *input)
{
	if (input->top <= 0)
	{
		input->top = 0;
		return 1;
	}
	else
	{
		return 0;
	}

}
//-------------------------------------------------------------------------------
//名称：压栈;
//输入参数：无;
//返回值：无;
//-------------------------------------------------------------------------------
int Stack_Push(StackTypdef *input , int value)
{
	if (Stack_Empty(input) == 1)
	{
		input->buff[input->top] = value; //存入值
	}
	else
	{
		input->top = input->top + 1;     //压栈指针先增，在将数据存入
		input->buff[input->top] = value; //存入值
		return 1;
	}
	input->top = input->top + 1;
	return 1;
}
//-------------------------------------------------------------------------------
//名称：出栈;
//输入参数：无;
//返回值：无;
//-------------------------------------------------------------------------------
int Stack_Pop(StackTypdef *input)
{
	if (input->top -  Stack_Empty(input) == -2)//-1为栈底
	{
		return EXIT_FAILURE;
	}
	else if((input->top = input->top - 1) > -2)
	{
		return input->buff[input->top + 1];
	}
}
//********************Local Function Definition 局部函数实现**********************

