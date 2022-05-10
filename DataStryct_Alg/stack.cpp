#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
//*****************************Constant ����************************************

//******************************Macros �궨��************************************

//**************************Global variables ȫ�ֱ���****************************

//*******Local Macros, Typedfes and variables  �ֲ��궨�塢�������͡�����**********

//**********************Global Function Prototypesȫ�ֺ���ԭ��********************

int Stack_Empty(StackTypdef *input);     //ջ�Ƿ�Ϊ��
int Stack_Push(StackTypdef *input, int value);//ѹջ
int Stack_Pop(StackTypdef *input);			   //��ջ
//********************Local Function Prototypes�ֲ�����ԭ��***********************


//********************Global Function Definition ȫ�ֺ���ʵ��*********************

//-------------------------------------------------------------------------------
//���ƣ����ջ�Ƿ�Ϊ��;
//�����������;
//����ֵ��-1Ϊ�� 1��Ϊ��;
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
//���ƣ�ѹջ;
//�����������;
//����ֵ����;
//-------------------------------------------------------------------------------
int Stack_Push(StackTypdef *input , int value)
{
	if (Stack_Empty(input) == 1)
	{
		input->buff[input->top] = value; //����ֵ
	}
	else
	{
		input->top = input->top + 1;     //ѹջָ���������ڽ����ݴ���
		input->buff[input->top] = value; //����ֵ
		return 1;
	}
	input->top = input->top + 1;
	return 1;
}
//-------------------------------------------------------------------------------
//���ƣ���ջ;
//�����������;
//����ֵ����;
//-------------------------------------------------------------------------------
int Stack_Pop(StackTypdef *input)
{
	if (input->top -  Stack_Empty(input) == -2)//-1Ϊջ��
	{
		return EXIT_FAILURE;
	}
	else if((input->top = input->top - 1) > -2)
	{
		return input->buff[input->top + 1];
	}
}
//********************Local Function Definition �ֲ�����ʵ��**********************

