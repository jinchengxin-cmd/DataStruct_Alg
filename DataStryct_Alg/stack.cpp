#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
//*****************************Constant ����************************************

//******************************Macros �궨��************************************

//**************************Global variables ȫ�ֱ���****************************

StackTypdef g_stack = { NULL,{1,2} };
//*******Local Macros, Typedfes and variables  �ֲ��궨�塢�������͡�����**********

//**********************Global Function Prototypesȫ�ֺ���ԭ��********************

int Stack_Empty(const StackTypdef *input);
//********************Local Function Prototypes�ֲ�����ԭ��***********************


//********************Global Function Definition ȫ�ֺ���ʵ��*********************

int main(int argc, char * *argv)
{
	int  serous = 0;
	serous = Stack_Empty(&g_stack);
	printf("%d /n", serous);
	return EXIT_SUCCESS;

}


int Stack_Empty(const StackTypdef *input)
{
	if (input->top == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}

}

//********************Local Function Definition �ֲ�����ʵ��**********************

