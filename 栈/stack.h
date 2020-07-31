#ifndef _stack_h_
#define _stack_h_

#include"common.h"
//Á´Õ»
typedef struct LinkStackNode
{
	ElemType data;
	struct LinkStackNode *link;
}LinkStackNode;
typedef LinkStackNode* LinkStack;
void LinkStackInit(LinkStack *pst);
void LinkStackPush(LinkStack *pst, ElemType x);
void LinkStackShow(LinkStack *pst);
void LinkStackPop(LinkStack *pst);
ElemType LinkStackTop(LinkStack *pst);
int LinkStackSize(LinkStack *pst);
void LinkStackDestroy(LinkStack *pst);
//////////////////////////////////////////////////////
void LinkStackInit(LinkStack *pst)
{
	assert(pst != NULL);
	*pst = NULL;
}
void LinkStackPush(LinkStack *pst, ElemType x)
{
	assert(pst != NULL);
	LinkStackNode* node = (LinkStackNode*)malloc(sizeof(LinkStackNode));
	assert(node != NULL);
	node->data = x;
	node->link = *pst;
	*pst = node;
}
void LinkStackShow(LinkStack *pst)
{
	assert(pst != NULL);
	LinkStackNode* p = *pst;
	while (p != NULL)
	{
		printf("|%d|\n", p->data);
		p = p->link;
	}
	printf("--\n");
}
void LinkStackPop(LinkStack *pst)
{
	assert(pst != NULL);
	if (*pst != NULL)
	{
		LinkStackNode* p = *pst;
		*pst = p->link;
		free(p);
	}
}
ElemType LinkStackTop(LinkStack *pst)
{
	assert(pst != NULL && *pst != NULL);
	return (*pst)->data;
}
int LinkStackSize(LinkStack *pst)
{
	assert(pst != NULL);
	int size = 0;
	LinkStackNode* p = *pst;
	while (p != NULL)
	{

		size++;
		p = p->link;
	}
	return size;
}
void LinkStackDestroy(LinkStack *pst)
{
	assert(pst != NULL);
	LinkStackNode* p = *pst;
	while (p != NULL)
	{
		*pst = p->link;
		free(p);
		p = *pst;
	}
}
//Ë³ÐòÕ»
//#define STACK_DEFAULT_SIZE 8
//typedef struct SeqStack
//{
//	ElemType *base;//Õ»¿Õ¼ä
//	size_t capacity;
//	int top;//Õ»¶¥Ö¸Õë
//}SeqStack;
//
//void SeqStackInit(SeqStack *pst);
//void SeqStackPush(SeqStack *pst, ElemType x);
//void SeqStackPop(SeqStack *pst);
//ElemType SeqStackTop(SeqStack *pst);
//void SeqStackShow(SeqStack *pst);
//void SeqStackDestroy(SeqStack *pst);
//////////////////////////////////////////////////////////
//bool SeqStackIsFull(SeqStack *pst)
//{
//	assert(pst != NULL);
//	return pst->top >= pst->capacity;
//}
//bool SeqStackIsEmpty(SeqStack *pst)
//{
//	assert(pst != NULL);
//	return pst->top == 0;
//}
//void SeqStackInit(SeqStack *pst)
//{
//	assert(pst != NULL);
//	pst->capacity = STACK_DEFAULT_SIZE;
//	pst->base = (ElemType*)malloc(sizeof(ElemType)* pst->capacity);
//	pst->top = 0;
//}
//void SeqStackPush(SeqStack *pst, ElemType x)
//{
//	assert(pst != NULL);
//	if (SeqStackIsFull(pst))
//	{
//		printf("Õ»ÒÑÂú£¬%d²»ÄÜ²åÈë\n");
//		return;
//	}
//	pst->base[pst->top++] = x;
//}
//void SeqStackPop(SeqStack *pst)
//{
//	assert(pst != NULL);
//	if (SeqStackIsEmpty(pst))
//	{
//		printf("Õ»ÒÑ¿Õ£¬²»ÄÜ³öÕ»\n");
//		return;
//	}
//	pst->top--;
//}
//ElemType SeqStackTop(SeqStack *pst)
//{
//	assert(pst != NULL);
//	assert(!SeqStackIsEmpty(pst));
//	return pst->base[pst->top - 1];
//}
//void SeqStackShow(SeqStack *pst)
//{
//	assert(pst != NULL);
//	for (int i = pst->top - 1; i >= 0; i--)
//	{
//		printf("|%d|\n", pst->base[i]);
//	}
//	printf("--\n");
//}
//void SeqStackDestroy(SeqStack *pst)
//{
//	assert(pst != NULL);
//	free(pst->base);
//	pst->base = NULL;
//	pst->capacity = pst->top = 0;
//}
#endif