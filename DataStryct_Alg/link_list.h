#pragma once
#ifndef _LINK_LIST_H_
#define _LINK_LIST_H_

//******************************Macros �궨��************************************


//*****************************Typedefs �ṹ������*******************************
typedef struct LinkListTypeDef 
{
	struct LinkListTypeDef * prior; //ָ��ֱ��ǰ��
	int data;
	struct LinkListTypeDef * next; //ָ��ֱ�Ӻ��
}LinkListTypeDef;

//****************************Extern Variables �ⲿ����**************************


//**************************Function Prototypes ����ԭ��*************************
LinkListTypeDef* Link_Init(LinkListTypeDef * head);
void Link_List_Display(LinkListTypeDef * head);
LinkListTypeDef * Link_List_Insert(LinkListTypeDef * head, int data, int add);
LinkListTypeDef * Link_List_Del(LinkListTypeDef * head, int data);

#endif


