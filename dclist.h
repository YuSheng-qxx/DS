#ifndef _dclist_h_
#define _dclist_h_

#include"common.h"
typedef struct DCListNode
{
	ElemType data;
	struct DCListNode *next;
	struct DCListNode *prev;
}DCListNode;
typedef DCListNode *DCList;

void DCListInit(DCList *phead);
void DCListPushBack(DCList *phead, ElemType x);
void DCListPushFront(DCList *phead, ElemType x);
void DCListShow(DCList phead);
void DCListPopBack(DCList *phead);
void DCListPopFront(DCList *phead);
bool DCListInsertPos(DCList *phead, DCListNode *pos, ElemType x);
bool DCListInsertVal(DCList phead, ElemType x);
void DCListErasePos(DCList *phead, DCListNode *pos);
void DCListEraseVal(DCList phead, ElemType x);
DCListNode* DCListFind(DCList phead, ElemType x);
size_t DCListLength(DCList phead);
void DCListSort(DCList phead);
void DCListReverse(DCList phead);
void DCListClear(DCList *phead);
ElemType DCListFront(DCList phead);
ElemType DCListBack(DCList phead);
void DCListDestroy(DCList *phead);
/////////////////////////////////////////////////////////////////
DCListNode* _Buynode()
{
	DCListNode *_S = (DCListNode*)malloc(sizeof(DCListNode));
	assert(_S != NULL);
	_S->next = _S->prev = _S;
	return _S;
}
void DCListInit(DCList *phead)
{
	assert(phead != NULL);
	*phead = _Buynode();
}
void DCListPushBack(DCList *phead, ElemType x)
{
	assert(phead != NULL);
	DCListNode *s = (DCListNode *)malloc(sizeof(DCListNode));
	DCListNode *p = *phead;
	assert(s != NULL);
	s->data = x;
	s->prev = p->prev;
	s->next = p;
	p->prev->next = s;
	p->prev = s;
}
void DCListPushFront(DCList *phead, ElemType x)
{
	assert(phead != NULL);
	DCListNode *s = (DCListNode *)malloc(sizeof(DCListNode));
	DCListNode *p = *phead;
	assert(s != NULL);
	s->data = x;
	s->prev = p;
	s->next = p->next;
	s->prev->next = s;
	s->prev->next = s;
}
void DCListShow(DCList phead)
{
	assert(phead != NULL);
	DCListNode *p = phead->next;
	while (p != phead)
	{
		printf("%d->", p->data);
		p = p->next;
	}
	printf("Over.\n");
}
void DCListPopBack(DCList *phead)
{
	assert(phead != NULL);
	DCListNode *p = *phead;
	if (p->next == p)
	{
		printf("Á´±íÒÑ¿Õ£¬É¾³ýÊ§°Ü£¡\n");
		return;
	}
	DCListNode *s = p->prev;
	s->prev->next = p;
	p->prev = s->prev;
	free(s);
}
void DCListPopFront(DCList *phead)
{
	assert(phead != NULL);
	DCListNode *p = *phead;
	if (p->next == p)
	{
		printf("Á´±íÒÑ¿Õ£¬É¾³ýÊ§°Ü£¡\n");
		return;
	}
	DCListNode *s = p->next;
	s->next->prev = p;
	s->prev->next = s->next;
	free(s);
}
bool DCListInsertVal(DCList phead, ElemType x)
{
	assert(phead != NULL);
	DCListNode *p = phead->next;
	while (p != phead && x > p->data)
		p = p->next;
	DCListNode* s = (DCListNode*)malloc(sizeof(DCListNode));
	assert(s != NULL);
	s->data = x;
	s->prev = p->prev;
	s->next = p;
	s->prev->next = s;
	s->next->prev = s;
}
void DCListEraseVal(DCList phead, ElemType x)
{
	assert(phead != NULL);
	DCListNode *p = DCListFind(phead, x);
	if (p == NULL)
		return;
	p->prev->prev = p->next;
	p->next->prev = p->prev;
	free(p);
}
DCListNode* DCListFind(DCList phead, ElemType x)
{
	assert(phead != NULL);
	DCListNode *p = phead->next;
	while (p != phead && p->data != x)
		p = p->next;
	if (p == phead)
		return;
	return p;
}
size_t DCListLength(DCList phead)
{
	assert(phead != NULL);
	DCListNode *p = phead->next;
	size_t len = 0;
	while (p != phead)
	{
		len++;
		p = p->next;
	}
	return len;
}
void DCListSort(DCList phead)
{
	assert(phead != NULL);
	if (DCListLength(phead) == 1)
	{
		return;
	}
	DCListNode *p = phead->next;
	DCListNode *q = p->next;
	p->next = phead;
	phead->prev = p;
	while (q != phead)
	{
		p = q;
		q = q->next;
		DCListNode *tmp = phead->next;
		while (tmp != phead && p->data > tmp->data)
			tmp = tmp->next;
		p->next = tmp;
		p->prev = tmp->prev;
		p->next->prev = p;
		p->prev->next = p;
	}
}
void DCListReverse(DCList phead)
{
	assert(phead != NULL);
	if (DCListLength(phead) == 1)
	{
		return;
	}
	DCListNode *p = phead->next;
	DCListNode *q = p->next;
	p->next = phead;
	phead->prev = p;
	while (q != phead)
	{
		p = q;
		q = q->next;
		p->next = phead->next;
		p->prev = phead;
		p->next->prev = p;
		p->prev->next = p;
	}
}
void DCListClear(DCList *phead)
{
	assert(phead != NULL);
	DCListNode *p = (*phead)->next;
	while (p != *phead)
	{
		p->prev->next = p->next;
		p->next->prev = p->prev;
		free(p);
		p = (*phead)->next;
	}
}
ElemType DCListFront(DCList phead)
{
	assert(phead != NULL);
	assert(phead->next != phead);
	return phead->next->data;
}
ElemType DCListBack(DCList phead)
{
	assert(phead != NULL);
	assert(phead->next != phead);
	return phead->prev->data;
}
void DCListDestroy(DCList *phead)
{
	assert(phead != NULL);
	DCListClear(phead);
	free(*phead);
	*phead = NULL;
}
#endif