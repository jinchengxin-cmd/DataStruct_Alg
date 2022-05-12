#include <stdio.h>
#include <stdlib.h>
#include "link_list.h"
//*****************************Constant ����************************************

//******************************Macros �궨��************************************

//**************************Global variables ȫ�ֱ���****************************

//*******Local Macros, Typedfes and variables  �ֲ��궨�塢�������͡�����**********

//**********************Global Function Prototypesȫ�ֺ���ԭ��********************
LinkListTypeDef* Link_Init(LinkListTypeDef * head);
void Link_List_Display(LinkListTypeDef * head);
LinkListTypeDef * Link_List_Insert(LinkListTypeDef * head, int data, int add);
LinkListTypeDef * Link_List_Del(LinkListTypeDef * head, int data);
//********************Local Function Prototypes�ֲ�����ԭ��***********************


//********************Global Function Definition ȫ�ֺ���ʵ��*********************
//-------------------------------------------------------------------------------
//���ƣ������ʼ��;
//�����������������Է������������ڲ��ҵ��ؼ�ֵΪk��Ԫ�أ������ظ�Ԫ��ָ�룬�������޴�Ԫ�ط���ΪNULL
//�����������;
//����ֵ����;
//-------------------------------------------------------------------------------
LinkListTypeDef* Link_Init(LinkListTypeDef * head) 
{
	//����һ����Ԫ�ڵ㣬�����ͷָ��Ϊhead
	head = (LinkListTypeDef*)malloc(sizeof(LinkListTypeDef));
	//�Խڵ���г�ʼ��
	head->prior = NULL;
	head->next = NULL;
	head->data = 1;
	//����һ��ָ����Ԫ�ڵ��ָ�룬�������������������´����Ľڵ�
	LinkListTypeDef * list = head;
	for (int i = 2; i <= 5; i++) {
		//�����µĽڵ㲢��ʼ��
		LinkListTypeDef * body = (LinkListTypeDef*)malloc(sizeof(LinkListTypeDef));
		body->prior = NULL;
		body->next = NULL;
		body->data = i;
		//�½ڵ����������һ���ڵ㽨����ϵ
		list->next = body;
		body->prior = list;
		//list��Զָ�����������һ���ڵ�
		list = list->next;
	}
	//�����´���������
	return head;
}
//-------------------------------------------------------------------------------
//���ƣ���ӡ����;
//�����������������Է������������ڲ��ҵ��ؼ�ֵΪk��Ԫ�أ������ظ�Ԫ��ָ�룬�������޴�Ԫ�ط���ΪNULL
//�����������;
//����ֵ����;
//-------------------------------------------------------------------------------
void Link_List_Display(LinkListTypeDef * head) 
{
	LinkListTypeDef * temp = head;
	while (temp) {
		//����ýڵ��޺�̽ڵ㣬˵���˽ڵ�����������һ���ڵ�
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
//���ƣ��������;
//������������x���ݲ嵽����
//�����������;
//����ֵ����;
//-------------------------------------------------------------------------------
LinkListTypeDef * Link_List_Insert(LinkListTypeDef * head, int data, int add)
{
	//�½�������Ϊdata�Ľ��
	LinkListTypeDef * temp = (LinkListTypeDef*)malloc(sizeof(LinkListTypeDef));
	temp->data = data;
	temp->prior = NULL;
	temp->next = NULL;
	//���뵽����ͷ��Ҫ���⿼��
	if (add == 1) {
		temp->next = head;
		head->prior = temp;
		head = temp;
	}
	else {
		LinkListTypeDef * body = head;
		//�ҵ�Ҫ����λ�õ�ǰһ�����
		for (int i = 1; i < add - 1; i++) {
			body = body->next;
		}
		//�ж�����Ϊ�棬˵������λ��Ϊ����β
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
//���ƣ�����ɾ��;
//������������x���ݲ嵽����
//�����������;
//����ֵ����;
//-------------------------------------------------------------------------------
LinkListTypeDef * Link_List_Del(LinkListTypeDef * head, int data)
{
	LinkListTypeDef * temp = head;
	//��������
	while (temp) {
		//�жϵ�ǰ������������data�Ƿ���ȣ�����ȣ�ժ���ý��
		if (temp->data == data) {
			temp->prior->next = temp->next;
			temp->next->prior = temp->prior;
			free(temp);
			return head;
		}
		temp = temp->next;
	}
	printf("�������޸�����Ԫ��");
	return head;
}
//********************Local Function Definition �ֲ�����ʵ��**********************

