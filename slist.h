#ifndef _slist_h_
#define _slist_h_

#include"common.h"
typedef struct SListNode
{
	ElemType data;
	struct SListNode *next;
}SListNode;
//不带头结点的单链表
typedef SListNode* SList;

void SListInit(SList *phead);
void SListPushBack(SList *phead, ElemType x);
void SListPushFront(SList *phead, ElemType x);
void SListShow(SList *phead);
void SListPopBack(SList *phead);
void SListPopFront(SList *phead);
bool SListInsertPos(SList *phead, SListNode* pos, ElemType x);
bool SListInsertVal(SList *phead, ElemType x);
void SListErasePos(SList *phead, SListNode* pos);
void SListEraseVal(SList *phead, ElemType x);
SListNode* SListFind(SList *phead, ElemType x);
size_t SListLength(SList *phead);
void SListSort(SList *phead);
void SListReverse(SList *phead);
void SListClear(SList *phead);
ElemType SListFront(SList phead);
ElemType SListBack(SList phead);
void SListErase_all(SList *phead, ElemType x);
//////////////////////////////////////////////////////
void SListInit(SList *phead)
{
	assert(phead != NULL);
	*phead = NULL;
}
void SListPushBack(SList *phead, ElemType x)
{
	assert(phead != NULL);
	SListNode* s = (SListNode*)malloc(sizeof(SListNode));
	assert(s != NULL);
	s->data = x;
	s->next = NULL;
	SListNode* p = *phead;
	if (p == NULL)
		*phead = s;
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = s;
	}
}
void SListPushFront(SList *phead, ElemType x)
{
	assert(phead != NULL);
	SListNode* s = (SListNode*)malloc(sizeof(SListNode));
	assert(s != NULL);
	s->data = x;
	s->next = *phead;
	*phead = s;
}
void SListShow(SList *phead)
{
	assert(phead != NULL);
	SListNode* p = *phead;
	while (p != NULL)
	{
		printf("%d->", p->data);
		p = p->next;
	}
	printf("Over!\n");
}
void SListPopBack(SList *phead)
{
	assert(phead != NULL);
	SListNode* p = *phead;
	SListNode* prev = NULL;
	if (p != NULL)
	{
		while (p->next != NULL)
		{
			prev = p;
			p = p->next;
		}
		if (prev == NULL)
			*phead = NULL;
		else
			prev->next = NULL;
		free(p);
	}
}
void SListPopFront(SList *phead)
{
	assert(phead != NULL);
	SListNode* p = *phead;
	if (p != NULL)
	{
		*phead = p->next;
		free(p);
	}
}
bool SListInsertPos(SList *phead, SListNode* pos, ElemType x)
{
	assert(phead != NULL);
	assert(pos);
	SListNode* next = pos->next;
	SListNode* s = (SListNode*)malloc(sizeof(SListNode));
	assert(s != NULL);
	s->data = x;
	s->next = NULL;
	pos->next = s;
	s->next = next;
}
bool SListInsertVal(SList *phead, ElemType x)
{
	assert(phead != NULL);
	SListNode* p = *phead;
	SListNode* prev = NULL;
	while (p != NULL && x > p->data)
	{
		prev = p;
		p = p->next;
	}
	SListNode* s = (SListNode*)malloc(sizeof(SListNode));
	assert(s != NULL);
	s->data = x;
	s->next = NULL;
	if (prev = NULL)
	{
		s->next = *phead;
		*phead = s;
	}
	else
	{
		s->next = prev->next;
		prev->next = s;
	}
}
void SListErasePos(SList *phead, SListNode* pos)
{
	assert(phead != NULL);
	assert(pos);
	SListNode* next = pos->next;
	if (next != NULL)
	{
		pos->next = next->next;
		free(next);
	}
}
void SListEraseVal(SList *phead, ElemType x)
{
	assert(phead != NULL);
	SListNode* p = SListFind(*phead, x);
	SListNode* prev = *phead;
	if (p == NULL)
		return;
	while (prev != NULL && prev->next != p)
		prev = prev->next;
	if (prev == p)
		*phead = p->next;
	else
		prev->next = p->next;
	free(p);
}
SListNode* SListFind(SList *phead, ElemType x)
{
	assert(phead != NULL);
	SListNode* p = *phead;
	while (p != NULL && p->data != x)
		p = p->next;
	return p;
}
size_t SListLength(SList *phead)
{
	assert(phead != NULL);
	size_t size = 0;
	SListNode* p = *phead;
	while (p != NULL)
	{
		size++;
		p = p->next;
	}
	return size;
}
void SListSort(SList *phead)
{
	assert(phead != NULL);
	if (SListLength(*phead) <= 1)
	{
		return;
	}
	SListNode *p = *phead;
	SListNode *q = p->next;
	SListNode *prev = NULL;
	SListNode *tmp = *phead;
	p->next = NULL;
	while (q != NULL)
	{
		p = q;
		q = q->next;
		while (tmp != NULL && p->data > tmp->data)
		{
			prev = tmp;
			tmp = tmp->next;
		}
		if (prev == NULL)
		{
			p->next = *phead;
			*phead = p;
		}
		else
		{
			p->next = prev->next;
			prev->next = p;
		}
		tmp = *phead;
		prev = NULL;
	}
}
void SListReverse(SList *phead)
{
	assert(phead != NULL);
	SListNode* p = *phead;
	SListNode* q = p->next;
	p->next = NULL;
	while (q != NULL)
	{
		p = q;
		q = q->next;
		p->next = *phead;
		*phead = p;
	}
}
void SListClear(SList *phead)
{
	assert(phead != NULL);
	SListNode* p = NULL;
	while (*phead != NULL)
	{
		p = *phead;
		*phead = p->next;
		free(p);
	}
}
ElemType SListFront(SList phead)
{
	assert(phead != NULL);
	return phead->data;
}
ElemType SListBack(SList phead)
{
	assert(phead != NULL);
	SListNode* p = phead;
	while (p->next != NULL)
		p = p->next;
	return p->data;
}
void SListErase_all(SList *phead, ElemType x)
{
	assert(phead != NULL);
	SListNode* p = *phead;
	SListNode* q = p->next;
	while (p != NULL && p->data == x)
	{
		p = p->next;
	}
	while (p != NULL)
	{
		if (p->next != NULL&&p->next->data == x)
			p->next = p->next->next;
		else
			p = p->next;
	}
	return phead;
}
#endif /*_SLIST_H_*/