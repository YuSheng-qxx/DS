//#include"dclist.h"
//
//int main()
//{
//	DCList list;
//	DCListInit(&list);
//	DCListNode *p = NULL;
//	ElemType item;
//	int pos;
//	bool flag;
//	int select = 1;
//	while (select)
//	{
//		printf("***************************************\n");
//		printf("* [1] push_back       [2] push_front  *\n");
//		printf("* [3] show_list       [0] quit_system *\n");
//		printf("* [4] pop_back        [5] pop_front   *\n");
//		printf("* [6] insert_val      [7] erase_val   *\n");
//		printf("* [8] find            [9] length      *\n");
//		printf("* [10] sort           [11] reverse    *\n");
//		printf("* [12] clear          [13] front      *\n");
//		printf("* [14] back           [15] destroy    *\n");
//		printf("***************************************\n");
//		printf("请选择:>");
//		scanf("%d", &select);
//		if (select == 0)
//		{
//			break;
//		}
//		switch (select)
//		{
//		case 1:
//			printf("请输入要插入的数据<以-1结束>:");
//			while (scanf("%d", &item), item != -1)
//			{
//				DCListPushBack(&list, item);
//			}
//			printf("尾部插入数据成功！\n");
//			break;
//		case 2:
//			printf("请输入要插入的数据<以-1结束>:");
//			while (scanf("%d", &item), item != -1)
//			{
//				DCListPushFront(&list, item);
//			}
//			printf("头部插入数据成功！\n");
//			break;
//		case 3:
//			DCListShow(list);
//			break;
//		case 4:
//			DCListPopBack(&list);
//			printf("尾部删除数据成功！\n");
//			break;
//		case 5:
//			DCListPopFront(&list);
//			printf("头部删除数据成功！\n");
//			break;
//		case 6:
//			printf("请输入要插入的元素：");
//			scanf("%d", &item);
//			DCListSort(&list);
//			DCListInsertVal(list, item);
//			flag = DCListInsertVal(&list, item);
//			if (flag)
//			{
//				printf("插入数据成功！\n");
//			}
//			else
//			{
//				printf("插入数据失败！\n");
//			}
//			break;
//		case 7:
//			printf("请输入要删除的元素：");
//			scanf("%d", &item);
//			DCListEraseVal(list, item);
//			printf("删除元素成功！\n");
//			break;
//		case 8:
//			printf("请输入要查找的元素：");
//			scanf("%d", &item);
//			DCListFind(list, item);
//			break;
//		case 9:
//			printf("SeqList length=%d\n", DCListLength(list));
//			break;
//		case 10:
//			DCListSort(list);
//			printf("顺序表排序成功！\n");
//			break;
//		case 11:
//			DCListReverse(list);
//			printf("顺序表转置完成！\n");
//			break;
//		case 12:
//			DCListClear(&list);
//			break;
//		case 13:
//			printf("表头元素为%d\n", DCListFront(list));
//			break;
//		case 14:
//			printf("表尾元素为%d\n", DCListBack(list));
//			break;
//		case 15:
//			DCListDestroy(&list);
//			printf("摧毁成功！\n");
//			break;
//		default:
//			printf("输入错误，请重新选择.......\n");
//			break;
//		}
//		system("pause");
//		system("cls");
//	}
//	return 0;
//}