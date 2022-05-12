#include <stdio.h>
#include <stdlib.h>
#include "link_list.h"
//*****************************Constant 常量************************************

//******************************Macros 宏定义************************************

//**************************Global variables 全局变量****************************

//*******Local Macros, Typedfes and variables  局部宏定义、数据类型、变量**********

//**********************Global Function Prototypes全局函数原型********************
LinkListTypeDef* Link_Init(LinkListTypeDef * head);
void Link_List_Display(LinkListTypeDef * head);
LinkListTypeDef * Link_List_Insert(LinkListTypeDef * head, int data, int add);
LinkListTypeDef * Link_List_Del(LinkListTypeDef * head, int data);
//********************Local Function Prototypes局部函数原型***********************


//********************Global Function Definition 全局函数实现*********************
//-------------------------------------------------------------------------------
//名称：链表初始化;
//功能描述：采用线性方法搜索，用于查找到关键值为k的元素，并返回该元素指针，链表下无此元素返回为NULL
//输入参数：无;
//返回值：无;
//-------------------------------------------------------------------------------
LinkListTypeDef* Link_Init(LinkListTypeDef * head) 
{
	//创建一个首元节点，链表的头指针为head
	head = (LinkListTypeDef*)malloc(sizeof(LinkListTypeDef));
	//对节点进行初始化
	head->prior = NULL;
	head->next = NULL;
	head->data = 1;
	//声明一个指向首元节点的指针，方便后期向链表中添加新创建的节点
	LinkListTypeDef * list = head;
	for (int i = 2; i <= 5; i++) {
		//创建新的节点并初始化
		LinkListTypeDef * body = (LinkListTypeDef*)malloc(sizeof(LinkListTypeDef));
		body->prior = NULL;
		body->next = NULL;
		body->data = i;
		//新节点与链表最后一个节点建立关系
		list->next = body;
		body->prior = list;
		//list永远指向链表中最后一个节点
		list = list->next;
	}
	//返回新创建的链表
	return head;
}
//-------------------------------------------------------------------------------
//名称：打印链表;
//功能描述：采用线性方法搜索，用于查找到关键值为k的元素，并返回该元素指针，链表下无此元素返回为NULL
//输入参数：无;
//返回值：无;
//-------------------------------------------------------------------------------
void Link_List_Display(LinkListTypeDef * head) 
{
	LinkListTypeDef * temp = head;
	while (temp) {
		//如果该节点无后继节点，说明此节点是链表的最后一个节点
		if (temp->next == NULL) {
			printf("%d\n", temp->data);
		}
		else {
			printf("%d <-> ", temp->data);
		}
		temp = temp->next;
	}
}
//-------------------------------------------------------------------------------
//名称：链表插入;
//功能描述：将x数据插到链表
//输入参数：无;
//返回值：无;
//-------------------------------------------------------------------------------
LinkListTypeDef * Link_List_Insert(LinkListTypeDef * head, int data, int add)
{
	//新建数据域为data的结点
	LinkListTypeDef * temp = (LinkListTypeDef*)malloc(sizeof(LinkListTypeDef));
	temp->data = data;
	temp->prior = NULL;
	temp->next = NULL;
	//插入到链表头，要特殊考虑
	if (add == 1) {
		temp->next = head;
		head->prior = temp;
		head = temp;
	}
	else {
		LinkListTypeDef * body = head;
		//找到要插入位置的前一个结点
		for (int i = 1; i < add - 1; i++) {
			body = body->next;
		}
		//判断条件为真，说明插入位置为链表尾
		if (body->next == NULL) {
			body->next = temp;
			temp->prior = body;
		}
		else {
			body->next->prior = temp;
			temp->next = body->next;
			body->next = temp;
			temp->prior = body;
		}
	}
	return head;
}
//-------------------------------------------------------------------------------
//名称：链表删除;
//功能描述：将x数据插到链表
//输入参数：无;
//返回值：无;
//-------------------------------------------------------------------------------
LinkListTypeDef * Link_List_Del(LinkListTypeDef * head, int data)
{
	LinkListTypeDef * temp = head;
	//遍历链表
	while (temp) {
		//判断当前结点中数据域和data是否相等，若相等，摘除该结点
		if (temp->data == data) {
			temp->prior->next = temp->next;
			temp->next->prior = temp->prior;
			free(temp);
			return head;
		}
		temp = temp->next;
	}
	printf("链表中无该数据元素");
	return head;
}
//********************Local Function Definition 局部函数实现**********************

