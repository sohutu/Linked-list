#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"LinkList.h"


void test()
{
	// ��ʼ������
	struct LinkNode *header = Init_LinkList();
	// ��ӡ����
	ForEach_LinkList(header);
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}