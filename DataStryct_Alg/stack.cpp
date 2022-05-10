#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
//*****************************Constant 常量************************************

//******************************Macros 宏定义************************************

//**************************Global variables 全局变量****************************

StackTypdef g_stack = { 0,{1,2} };
//*******Local Macros, Typedfes and variables  局部宏定义、数据类型、变量**********

//**********************Global Function Prototypes全局函数原型********************

void Stack_Empty(const StackTypdef *input)
//********************Local Function Prototypes局部函数原型***********************


//********************Global Function Definition 全局函数实现*********************

int main(int argc, char * *argv)
{

	//Stack_Empty(&g_stack);
	printf("***********1***********")
	return EXIT_SUCCESS;
}


void Stack_Empty(const StackTypdef *input)
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

//********************Local Function Definition 局部函数实现**********************

