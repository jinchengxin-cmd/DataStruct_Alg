#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
//*****************************Constant ����************************************

//******************************Macros �궨��************************************

//**************************Global variables ȫ�ֱ���****************************

StackTypdef g_stack = { 0,{0} };
//*******Local Macros, Typedfes and variables  �ֲ��궨�塢�������͡�����**********

//**********************Global Function Prototypesȫ�ֺ���ԭ��********************

//********************Local Function Prototypes�ֲ�����ԭ��***********************


//********************Global Function Definition ȫ�ֺ���ʵ��*********************

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

