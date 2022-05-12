#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "queue.h"
#include "link_list.h"
//*****************************Constant 常量************************************

//******************************Macros 宏定义************************************

//**************************Global variables 全局变量****************************

StackTypdef g_stack = { 0,{0} };
QueueTypdef g_queue;
//*******Local Macros, Typedfes and variables  局部宏定义、数据类型、变量**********

//**********************Global Function Prototypes全局函数原型********************

//********************Local Function Prototypes局部函数原型***********************


//********************Global Function Definition 全局函数实现*********************

int main(int argc, char * *argv)
{
	//创建一个头指针
	LinkListTypeDef * head = NULL;
	//调用链表创建函数
	head = Link_Init(head);
	//输出创建好的链表
	Link_List_Display(head);
	//显示双链表的优点
	printf("链表中第 4 个节点的直接前驱是：%d", head->next->next->next->prior->data);
	
	//在表中第 3 的位置插入元素 7
	head = Link_List_Insert(head, 7, 3);

	printf("\n");
	//输出创建好的链表
	Link_List_Display(head);
	//表中删除元素 2
	head = Link_List_Del(head, 2);
	//输出创建好的链表
	Link_List_Display(head);
	return 0;

	return EXIT_SUCCESS;
}

