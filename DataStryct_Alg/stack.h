#pragma once
#ifndef _STACK_H_
#define _STACK_H_

/*宏定义*/
#define STACK_NUM     10   //栈深度

/*结构体*/
typedef struct
{
	int top; //栈顶
	int buff[STACK_NUM];
}StackTypdef;

/*外部变量extren*/

/*API接口定义*/

int Stack_Empty(const StackTypdef *input);     //栈是否为空
void Stack_Push(StackTypdef *input, int value);//压栈

#endif

