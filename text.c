#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"LinkList.h"


void test()
{
	// 初始化链表
	struct LinkNode *header = Init_LinkList();
	// 打印链表
	ForEach_LinkList(header);
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}