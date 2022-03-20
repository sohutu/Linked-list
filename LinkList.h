#pragma once

#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>

#ifdef __cplusplus
extern "C" {
#endif



	// 定义结点类型
	struct LinkNode
	{
		int date;
		struct LinkNode* next;
	};


	// 初始化链表 
	struct LinkNode* Init_LinkList();
	// 在值为 oldval 后插入一个 newval
	void InsetByValue_LinkList(struct LinkNode* header, int oldval, int newval);
	// 删除值为 val 的结点
	void RemoveByValue_LinkList(struct LinkNode* hearder, int delVal);
	// 遍历
	void ForEach_LinkList(struct LinkNode* hearder);
	// 销毁
	void Destory_LinkList(struct LinkNode* hearder);
	// 清空
	void Clear_LinkLiist(struct LinkNode* hearder);


#ifdef __cplusplus
}
#endif#pragma once
