#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
//*****************************Constant ����************************************

//******************************Macros �궨��************************************

//**************************Global variables ȫ�ֱ���****************************

StackTypdef g_stack = { 0,{1,2} };
//*******Local Macros, Typedfes and variables  �ֲ��궨�塢�������͡�����**********

//**********************Global Function Prototypesȫ�ֺ���ԭ��********************

void Stack_Empty(const StackTypdef *input)
//********************Local Function Prototypes�ֲ�����ԭ��***********************


//********************Global Function Definition ȫ�ֺ���ʵ��*********************

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

//********************Local Function Definition �ֲ�����ʵ��**********************

