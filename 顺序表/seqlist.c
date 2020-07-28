//#include"seqlist.h"
//
//int main()
//{
//	SeqList list;
//	SeqListInit(&list);
//
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
//		printf("* [12] capacity       [13] sort       *\n");
//		printf("* [14] reverse        [15] clear      *\n");
//		printf("* [16] front          [17] back       *\n");
//		printf("* [18] binary_find    [19] erase_all  *\n");
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
//				SeqListPushBack(&list, item);
//			}
//			printf("尾部插入数据成功！\n");
//			break;
//		case 2:
//			printf("请输入要插入的数据<以-1结束>:");
//			while (scanf("%d", &item), item != -1)
//			{
//				SeqListPushFront(&list, item);
//			}
//			printf("头部插入数据成功！\n");
//			break;
//		case 3:
//			SeqListShow(&list);
//			break;
//		case 4:
//			SeqListPopBack(&list);
//			printf("尾部删除数据成功！\n");
//			break;
//		case 5:
//			SeqListPopFront(&list);
//			printf("头部删除数据成功！\n");
//			break;
//		case 6:
//			printf("请输入要插入的位置:");
//			scanf("%d", &pos);
//			printf("请输入要插入的元素：");
//			scanf("%d", &item);
//			SeqListInsertPos(&list, pos, item);
//			flag = SeqListInsertPos(&list, pos, item);
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
//			SeqListSort(&list);
//			SeqListInsertVal(&list, item);
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
//			SeqListErasePos(&list, pos);
//			printf("删除元素成功！\n");
//			break;
//		case 9:
//			printf("请输入要删除的元素：");
//			scanf("%d", &item);
//			SeqListEraseVal(&list, item);
//			printf("删除元素成功！\n");
//			break;
//		case 10:
//			printf("请输入要查找的元素：");
//			scanf("%d", &item);
//			SeqListFind(&list, item);
//			break;
//		case 11:
//			printf("SeqList length=%d\n", SeqListLength(&list));
//			break;
//		case 12:
//			printf("SeqList capacity=%d\n", SeqListCapacity(&list));
//			break;
//		case 13:
//			SeqListSort(&list);
//			printf("顺序表排序成功！\n");
//			break;
//		case 14:
//			SeqListReverse(&list);
//			printf("顺序表转置完成！\n");
//			break;
//		case 15:
//			SeqListClear(&list);
//			break;
//		case 16:
//			printf("表头元素为%d\n", SeqListFront(&list));
//			break;
//		case 17:
//			printf("表尾元素为%d\n", SeqListBack(&list));
//			break;
//		case 18:
//			printf("找到了！%d\n", SeqListBinary_find(&list, item));
//			break;
//		case 19:
//			printf("请输入要删除的元素：");
//			scanf("%d", &item);
//			SeqListErase_all(&list, item);
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