#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "queue.h"
#include "link_list.h"
//*****************************Constant ����************************************

//******************************Macros �궨��************************************

//**************************Global variables ȫ�ֱ���****************************

StackTypdef g_stack = { 0,{0} };
QueueTypdef g_queue;
//*******Local Macros, Typedfes and variables  �ֲ��궨�塢�������͡�����**********

//**********************Global Function Prototypesȫ�ֺ���ԭ��********************

//********************Local Function Prototypes�ֲ�����ԭ��***********************


//********************Global Function Definition ȫ�ֺ���ʵ��*********************

int main(int argc, char * *argv)
{
	//����һ��ͷָ��
	LinkListTypeDef * head = NULL;
	//��������������
	head = Link_Init(head);
	//��������õ�����
	Link_List_Display(head);
	//��ʾ˫������ŵ�
	printf("�����е� 4 ���ڵ��ֱ��ǰ���ǣ�%d", head->next->next->next->prior->data);
	
	//�ڱ��е� 3 ��λ�ò���Ԫ�� 7
	head = Link_List_Insert(head, 7, 3);

	printf("\n");
	//��������õ�����
	Link_List_Display(head);
	//����ɾ��Ԫ�� 2
	head = Link_List_Del(head, 2);
	//��������õ�����
	Link_List_Display(head);
	return 0;

	return EXIT_SUCCESS;
}

