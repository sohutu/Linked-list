#pragma once

#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>

#ifdef __cplusplus
extern "C" {
#endif



	// ����������
	struct LinkNode
	{
		int date;
		struct LinkNode* next;
	};


	// ��ʼ������ 
	struct LinkNode* Init_LinkList();
	// ��ֵΪ oldval �����һ�� newval
	void InsetByValue_LinkList(struct LinkNode* header, int oldval, int newval);
	// ɾ��ֵΪ val �Ľ��
	void RemoveByValue_LinkList(struct LinkNode* hearder, int delVal);
	// ����
	void ForEach_LinkList(struct LinkNode* hearder);
	// ����
	void Destory_LinkList(struct LinkNode* hearder);
	// ���
	void Clear_LinkLiist(struct LinkNode* hearder);


#ifdef __cplusplus
}
#endif#pragma once
