#pragma once
#ifndef _STACK_H_
#define _STACK_H_

//******************************Macros �궨��************************************
#define STACK_NUM     10   //ջ���

//*****************************Typedefs �ṹ������*******************************
typedef struct
{
	int top; //ջ��
	int buff[STACK_NUM];
}StackTypdef;

//****************************Extern Variables �ⲿ����**************************


//**************************Function Prototypes ����ԭ��*************************


int Stack_Empty(StackTypdef *input);     //ջ�Ƿ�Ϊ��
int Stack_Push(StackTypdef *input, int value);//ѹջ
int Stack_Pop(StackTypdef *input);			   //��ջ
#endif

