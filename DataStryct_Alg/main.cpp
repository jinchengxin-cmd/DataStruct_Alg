#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
//*****************************Constant 常量************************************

//******************************Macros 宏定义************************************

//**************************Global variables 全局变量****************************

StackTypdef g_stack = { 0,{0} };
//*******Local Macros, Typedfes and variables  局部宏定义、数据类型、变量**********

//**********************Global Function Prototypes全局函数原型********************

//********************Local Function Prototypes局部函数原型***********************


//********************Global Function Definition 全局函数实现*********************

int main(int argc, char * *argv)
{
	int  serous = 0;
	int i = 0;
	serous = Stack_Empty(&g_stack);
	printf("%d \n", serous);
	Stack_Push(&g_stack, 1);
	serous = Stack_Empty(&g_stack);
	Stack_Push(&g_stack, 2);
	printf("%d \n", serous);
	printf("********1********\n");
	for (i = 0; i < g_stack.top; i++)
	{
		printf("%d ", g_stack.buff[i]);
	}
	Stack_Pop(&g_stack);
	Stack_Pop(&g_stack);
	Stack_Pop(&g_stack);
	Stack_Push(&g_stack, 1);
	printf("\n");
	printf("********2********\n");
	for (i = 0; i < g_stack.top; i++)
	{
		printf("%d ", g_stack.buff[i]);
	}
	return EXIT_SUCCESS;

}

