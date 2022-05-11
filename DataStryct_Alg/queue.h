#pragma once
#ifndef _QUEUE_H_
#define _QUEUE_H_

//******************************Macros �궨��************************************
#define QUEUE_NUM     10   //�ӳ�

//*****************************Typedefs �ṹ������*******************************
typedef struct
{
	int head;               //��ͷ
	int tail;               //��β
	int buff[QUEUE_NUM];
	int length = sizeof(buff) / sizeof(int);
}QueueTypdef;

//****************************Extern Variables �ⲿ����**************************


//**************************Function Prototypes ����ԭ��*************************
void Enqueue(QueueTypdef *input, int value);//����
int Dequeue(QueueTypdef *input);            //���
#endif


