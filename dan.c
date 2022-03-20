#include<stdio.h>
#include"LinkList.h"



// 初始化链表 
struct LinkNode *Init_LinkList()
{
	// 创建头结点 
	struct LinkNode *header = malloc(sizeof(struct LinkNode));
	header->date = -1;
	header->next = NULL;


	// 尾部指针
	struct LinkNode *pRear = header;


	int val = -1;
	while (true)
	{
		printf("请输入要插入的值：\n");
		scanf_s("%d", &val);
		if (val == -1)
		{
			break;
		};

		// 先创建新结点
		struct LinkNode *newnode = malloc(sizeof(struct LinkNode));
		newnode->date = val;
		newnode->next = NULL;

		// 新结点插入链表中
		pRear->next = newnode;

		// 更新尾部指针指向
		pRear = newnode;

	};

	
	return header;
}
// 在值为 oldval 后插入一个 newval
void InsetByValue_LinkList(struct LinkNode *header, int oldval, int newval);
// 删除值为 val 的结点
void RemoveByValue_LinkList(struct LinkNode *header, int delVal);
// 遍历
void ForEach_LinkList(struct LinkNode *header)
{
	if (NULL == header)
	{
		return header;
	};

	// 辅助指针
	struct LinkNode *pCurrent = header->next;

	while (pCurrent != NULL)
	{
		printf("%d", pCurrent->date);
		pCurrent = pCurrent->next;
	}


};





// 销毁
void Destory_LinkList(struct LinkNode *hearder);
// 清空
void Clear_LinkLiist(struct LinkNode *hearder);