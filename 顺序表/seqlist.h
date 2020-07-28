//#ifndef _seqlist_h_
//#define _seqlist_h_
//
//#include"common.h"
//#define SEQLIST_DEFAULT_SIZE 8
//
////定义顺序表的结构
//typedef struct SeqList
//{
//	ElemType *base;
//	size_t capacity;
//	size_t size;
//}SeqList;
//
//void SeqListInit(SeqList *plist);
//void SeqListPushBack(SeqList *plist, ElemType x);
//void SeqListPushFront(SeqList *plist, ElemType x);
//void SeqListShow(SeqList *plist);
//void SeqListPopBack(SeqList *plist);
//void SeqListPopFront(SeqList *plist);
//bool SeqListInsertPos(SeqList *plist, int pos, ElemType x);
//bool SeqListInsertVal(SeqList *plist, ElemType x);
//void SeqListSort(SeqList *plist);
//void SeqListErasePos(SeqList *plist, int pos);
//void SeqListEraseVal(SeqList *plist, ElemType x);
//int SeqListFind(SeqList *plist, ElemType x);
//int SeqListLength(SeqList *plist);
//int SeqListCapacity(SeqList *plist);
//void SeqListReverse(SeqList *plist);
//void SeqListClear(SeqList *plist);
//ElemType SeqListFront(SeqList *plist);
//ElemType SeqListBack(SeqList *plist);
//int SeqListBinary_find(SeqList *plist, ElemType x);
//void SeqListErase_all(SeqList *plist, ElemType x);
////////////////////////////////////////////////////
//bool _Inc(SeqList *plist, size_t new_capacity)
//{
//	assert(plist != NULL&&new_capacity > plist->capacity);
//	ElemType *new_base = (ElemType*)realloc(plist->base, sizeof(ElemType)*new_capacity);
//	if (new_base == NULL)
//	{
//		return false;
//	}
//	plist->base = new_base;
//	plist->capacity = new_capacity;
//	return true;
//}
//bool IsFull(SeqList *plist)
//{
//	assert(plist != NULL);
//	return plist->size >= plist->capacity;
//}
//bool IsEmpty(SeqList *plist)
//{
//	assert(plist != NULL);
//	return plist->size == 0;
//}
//void SeqListInit(SeqList *plist)
//{
//	assert(plist != NULL);
//	plist->capacity = SEQLIST_DEFAULT_SIZE;
//	plist->base = (ElemType*)malloc(sizeof(ElemType)*plist->capacity);
//	plist->size = 0;
//}
//
//void SeqListPushBack(SeqList *plist, ElemType x)
//{
//	assert(plist != NULL);
//	if (IsFull(plist) && !_Inc(plist, plist->capacity * 2))
//	{
//		printf("顺序表已满，%d不能插入\n", x);
//		return;
//	}
//	plist->base[plist->size++] = x;
//}
//void SeqListPushFront(SeqList *plist, ElemType x)
//{
//	assert(plist != NULL);
//	if (IsFull(plist) && !_Inc(plist, plist->capacity * 2))
//	{
//		printf("顺序表已满，%d不能插入\n", x);
//		return;
//	}
//	for (size_t i = plist->size; i > 0; i--)
//	{
//		plist->base[i] = plist->base[i - 1];
//	}
//	plist->base[0] = x;
//	plist->size++;
//}
//void SeqListShow(SeqList *plist)
//{
//	assert(plist != NULL);
//	for (size_t i = 0; i < plist->size; i++)
//	{
//		printf("%d ", plist->base[i]);
//	}
//	printf("\n");
//}
//
//void SeqListPopBack(SeqList *plist)
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))
//	{
//		printf("顺序表已空，不能尾部删除！\n");
//		return;
//	}
//	plist->size--;
//}
//void SeqListPopFront(SeqList *plist)
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))
//	{
//		printf("顺序表已空，不能头部删除！\n");
//		return;
//	}
//	for (size_t i = 0; i < plist->size; i++)
//	{
//		plist->base[i] = plist->base[i + 1];
//	}
//	plist->size--;
//}
//bool SeqListInsertPos(SeqList *plist, int pos, ElemType x)
//{
//	assert(plist != NULL);
//	if (IsFull(plist) && !_Inc(plist, plist->capacity * 2))
//	{
//		printf("顺序表已满，%d不能在%d位置插入！\n", x, pos);
//		return false;
//	}
//	if (pos<0 || pos>plist->size)
//	{
//		printf("位置%d非法，数据输入失败！\n", pos);
//		return false;
//	}
//	for (size_t i = plist->size; i > pos; i--)
//	{
//		plist->base[i] = plist->base[i - 1];
//	}
//	plist->base[pos] = x;
//	plist->size++;
//	return true;
//}
//bool SeqListInsertVal(SeqList *plist, ElemType x)
//{
//	assert(plist != NULL);
//	if (IsFull(plist) && !_Inc(plist, plist->capacity * 2))
//	{
//		printf("顺序表已满，%d插入失败！\n", x);
//		return false;
//	}
//	size_t i = plist->size - 1;
//	while (i >= 0 && x < plist->base[i])
//	{
//		plist->base[i + 1] = plist->base[i];
//		i--;
//	}
//	plist->base[i + 1] = x;
//	plist->size++;
//}
//void SeqListErasePos(SeqList *plist, int pos)
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))
//	{
//		printf("顺序表已空，删除数据失败！\n");
//	}
//	if (pos<0 && pos>plist->size)
//	{
//		printf("位置非法，删除数据失败！\n");
//	}
//	for (size_t i = pos; i <plist->size; i++)
//	{
//		plist->base[i] = plist->base[i + 1];
//	}
//	plist->size--;
//}
//void SeqListEraseVal(SeqList *plist, ElemType x)
//{
//	assert(plist != NULL);
//	int pos = SeqListFind(plist, x);
//	if (pos == -1)
//	{
//		return;
//	}
//	SeqListErasePos(plist, pos);
//}
//int SeqListFind(SeqList *plist, ElemType x)
//{
//	assert(plist != NULL);
//	int pos = 0;
//	while (pos < plist->size&&x != plist->base[pos])
//	{
//		pos++;
//	}
//	if (pos == plist->size)
//	{
//		pos = -1;
//	}
//	return pos;
//}
//int SeqListLength(SeqList *plist)
//{
//	assert(plist != NULL);
//	return plist->size;
//}
//int SeqListCapacity(SeqList *plist)
//{
//	assert(plist != NULL);
//	return plist->capacity;
//}
//void SeqListReverse(SeqList *plist)
//{
//	int start = 0;
//	int end = plist->size;
//	while (start < end)
//	{
//		Swap(&plist->base[start], &plist->base[end]);
//		start++;
//		end--;
//	}
//}
//void SeqListClear(SeqList *plist)
//{
//	assert(plist != NULL);
//	plist->size = 0;
//}
//void SeqListSort(SeqList *plist)
//{
//	assert(plist != NULL);
//	for (size_t i = 0; i < plist->size-1; i++)
//	{
//		for (size_t j = 0; j < plist->size - 1 - i; j++)
//		{
//			if (plist->base[j]>plist->base[j + i])
//			{
//				Swap(&plist->base[j], &plist->base[j + 1]);
//			}
//		}
//	}
//}
//ElemType SeqListFront(SeqList *plist)
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))
//	{
//		printf("顺序表已空，取表头元素失败！\n");
//		return;
//	}
//	return plist->base[0];
//}
//ElemType SeqListBack(SeqList *plist)
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))
//	{
//		printf("顺序表已空，取表尾元素失败！\n");
//		return;
//	}
//	return plist->base[plist->size-1];
//}
//int SeqListBinary_find(SeqList *plist,ElemType x)
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))
//		return -1;
//	int start = 0;
//	int end = plist->size - 1;
//	int mid;
//	while (start < end)
//	{
//		mid = (start + end) / 2;
//		if (x == plist->base[mid])
//			return mid;
//		else if (x < plist->base[mid])
//			end = mid - 1;
//		else
//			start = mid + 1;
//	}
//	return -1;
//}
//void SeqListErase_all(SeqList *plist, ElemType x)
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))
//	{
//		printf("顺序表已空，删除失败！\n");
//		return;
//	}
//	int count = 0;
//	size_t start = 0;
//	for (start = 0; start < plist->size; start++)
//	{
//		if (plist->base[start] != x)
//		{
//			plist->base[count] = plist->base[start];
//			count++;
//		}
//	}
//	plist->size = count;
//}
//#endif