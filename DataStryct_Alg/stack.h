#pragma once
#ifndef _STACK_H_
#define _STACK_H_

/*�궨��*/
#define STACK_NUM     10   //ջ���

/*�ṹ��*/
typedef struct
{
	int top; //ջ��
	int buff[STACK_NUM];
}StackTypdef;

/*�ⲿ����extren*/

/*API�ӿڶ���*/

int Stack_Empty(const StackTypdef *input);     //ջ�Ƿ�Ϊ��
void Stack_Push(StackTypdef *input, int value);//ѹջ

#endif

