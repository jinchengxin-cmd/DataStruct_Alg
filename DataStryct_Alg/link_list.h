#pragma once
#ifndef _LINK_LIST_H_
#define _LINK_LIST_H_

//******************************Macros 宏定义************************************


//*****************************Typedefs 结构体类型*******************************
typedef struct LinkListTypeDef 
{
	struct LinkListTypeDef * prior; //指向直接前趋
	int data;
	struct LinkListTypeDef * next; //指向直接后继
}LinkListTypeDef;

//****************************Extern Variables 外部变量**************************


//**************************Function Prototypes 函数原型*************************
LinkListTypeDef* Link_Init(LinkListTypeDef * head);
void Link_List_Display(LinkListTypeDef * head);
LinkListTypeDef * Link_List_Insert(LinkListTypeDef * head, int data, int add);
LinkListTypeDef * Link_List_Del(LinkListTypeDef * head, int data);

#endif


