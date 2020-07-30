//#include"slist.h"
//
//int main()
//{
//	SList list;
//	SListInit(&list);
//	SListNode *p = NULL;
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
//		printf("* [6] insert_pos      [7] insert_val  *\n");
//		printf("* [8] erase_pos       [9] erase_val   *\n");
//		printf("* [10] find           [11] length     *\n");
//		printf("* [12] sort           [13] reverse    *\n");
//		printf("* [14] clear          [15] front      *\n");
//		printf("* [16] back           [17] erase_all  *\n");
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
//				SListPushBack(&list, item);
//			}
//			printf("尾部插入数据成功！\n");
//			break;
//		case 2:
//			printf("请输入要插入的数据<以-1结束>:");
//			while (scanf("%d", &item), item != -1)
//			{
//				SListPushFront(&list, item);
//			}
//			printf("头部插入数据成功！\n");
//			break;
//		case 3:
//			SListShow(&list);
//			break;
//		case 4:
//			SListPopBack(&list);
//			printf("尾部删除数据成功！\n");
//			break;
//		case 5:
//			SListPopFront(&list);
//			printf("头部删除数据成功！\n");
//			break;
//		case 6:
//			printf("请输入要插入的位置:");
//			scanf("%d", &pos);
//			printf("请输入要插入的元素：");
//			scanf("%d", &item);
//			SListInsertPos(&list, pos, item);
//			flag = SListInsertPos(&list, pos, item);
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
//			printf("请输入要插入的元素：");
//			scanf("%d", &item);
//			SListSort(&list);
//			SListInsertVal(&list, item);
//			flag = SListInsertVal(&list, item);
//			if (flag)
//			{
//				printf("插入数据成功！\n");
//			}
//			else
//			{
//				printf("插入数据失败！\n");
//			}
//			break;
//		case 8:
//			printf("请输入要删除的位置：");
//			scanf("%d", &pos);
//			SListErasePos(&list, pos);
//			printf("删除元素成功！\n");
//			break;
//		case 9:
//			printf("请输入要删除的元素：");
//			scanf("%d", &item);
//			SListEraseVal(&list, item);
//			printf("删除元素成功！\n");
//			break;
//		case 10:
//			printf("请输入要查找的元素：");
//			scanf("%d", &item);
//			SListFind(&list, item);
//			break;
//		case 11:
//			printf("SeqList length=%d\n", SListLength(&list));
//			break;
//		case 12:
//			SListSort(&list);
//			printf("顺序表排序成功！\n");
//			break;
//		case 13:
//			SListReverse(&list);
//			printf("顺序表转置完成！\n");
//			break;
//		case 14:
//			SListClear(&list);
//			break;
//		case 15:
//			printf("表头元素为%d\n", SListFront(list));
//			break;
//		case 16:
//			printf("表尾元素为%d\n", SListBack(list));
//			break;
//		case 17:
//			printf("请输入要删除的元素：");
//			scanf("%d", &item);
//			SListErase_all(&list, item);
//			printf("删除成功！\n");
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