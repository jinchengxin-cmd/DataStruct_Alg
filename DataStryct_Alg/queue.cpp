#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
//*****************************Constant ����************************************

//******************************Macros �궨��************************************

//**************************Global variables ȫ�ֱ���****************************

//*******Local Macros, Typedfes and variables  �ֲ��궨�塢�������͡�����**********

//**********************Global Function Prototypesȫ�ֺ���ԭ��********************
void Enqueue(QueueTypdef *input, int value);//����
int Dequeue(QueueTypdef *input);            //���
//********************Local Function Prototypes�ֲ�����ԭ��***********************


//********************Global Function Definition ȫ�ֺ���ʵ��*********************

//-------------------------------------------------------------------------------
//���ƣ����;
//�����������;
//����ֵ����;
//-------------------------------------------------------------------------------
void Enqueue(QueueTypdef *input , int value)
{
	input->buff[input->tail] = value;
	if (input->tail == input->length)//������
	{
		input->tail = 0;
	}
	else
	{
		input->tail = input->tail + 1;
	}
}
//-------------------------------------------------------------------------------
//���ƣ�����;
//�����������;
//����ֵ������Ԫ��;
//-------------------------------------------------------------------------------
int Dequeue(QueueTypdef *input)
{
	int value = 0;
	value = input->buff[input->head];
	if (input->head == input->length)//���п�
	{
		input->head = 0;//����վ��
	}
	else
	{
		input->head = input->head + 1;
	}
	return value;
}
//********************Local Function Definition �ֲ�����ʵ��**********************

