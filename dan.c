#include<stdio.h>
#include"LinkList.h"



// ��ʼ������ 
struct LinkNode *Init_LinkList()
{
	// ����ͷ��� 
	struct LinkNode *header = malloc(sizeof(struct LinkNode));
	header->date = -1;
	header->next = NULL;


	// β��ָ��
	struct LinkNode *pRear = header;


	int val = -1;
	while (true)
	{
		printf("������Ҫ�����ֵ��\n");
		scanf_s("%d", &val);
		if (val == -1)
		{
			break;
		};

		// �ȴ����½��
		struct LinkNode *newnode = malloc(sizeof(struct LinkNode));
		newnode->date = val;
		newnode->next = NULL;

		// �½�����������
		pRear->next = newnode;

		// ����β��ָ��ָ��
		pRear = newnode;

	};

	
	return header;
}
// ��ֵΪ oldval �����һ�� newval
void InsetByValue_LinkList(struct LinkNode *header, int oldval, int newval);
// ɾ��ֵΪ val �Ľ��
void RemoveByValue_LinkList(struct LinkNode *header, int delVal);
// ����
void ForEach_LinkList(struct LinkNode *header)
{
	if (NULL == header)
	{
		return header;
	};

	// ����ָ��
	struct LinkNode *pCurrent = header->next;

	while (pCurrent != NULL)
	{
		printf("%d", pCurrent->date);
		pCurrent = pCurrent->next;
	}


};





// ����
void Destory_LinkList(struct LinkNode *hearder);
// ���
void Clear_LinkLiist(struct LinkNode *hearder);