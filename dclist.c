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
//		printf("��ѡ��:>");
//		scanf("%d", &select);
//		if (select == 0)
//		{
//			break;
//		}
//		switch (select)
//		{
//		case 1:
//			printf("������Ҫ���������<��-1����>:");
//			while (scanf("%d", &item), item != -1)
//			{
//				DCListPushBack(&list, item);
//			}
//			printf("β���������ݳɹ���\n");
//			break;
//		case 2:
//			printf("������Ҫ���������<��-1����>:");
//			while (scanf("%d", &item), item != -1)
//			{
//				DCListPushFront(&list, item);
//			}
//			printf("ͷ���������ݳɹ���\n");
//			break;
//		case 3:
//			DCListShow(list);
//			break;
//		case 4:
//			DCListPopBack(&list);
//			printf("β��ɾ�����ݳɹ���\n");
//			break;
//		case 5:
//			DCListPopFront(&list);
//			printf("ͷ��ɾ�����ݳɹ���\n");
//			break;
//		case 6:
//			printf("������Ҫ�����Ԫ�أ�");
//			scanf("%d", &item);
//			DCListSort(&list);
//			DCListInsertVal(list, item);
//			flag = DCListInsertVal(&list, item);
//			if (flag)
//			{
//				printf("�������ݳɹ���\n");
//			}
//			else
//			{
//				printf("��������ʧ�ܣ�\n");
//			}
//			break;
//		case 7:
//			printf("������Ҫɾ����Ԫ�أ�");
//			scanf("%d", &item);
//			DCListEraseVal(list, item);
//			printf("ɾ��Ԫ�سɹ���\n");
//			break;
//		case 8:
//			printf("������Ҫ���ҵ�Ԫ�أ�");
//			scanf("%d", &item);
//			DCListFind(list, item);
//			break;
//		case 9:
//			printf("SeqList length=%d\n", DCListLength(list));
//			break;
//		case 10:
//			DCListSort(list);
//			printf("˳�������ɹ���\n");
//			break;
//		case 11:
//			DCListReverse(list);
//			printf("˳���ת����ɣ�\n");
//			break;
//		case 12:
//			DCListClear(&list);
//			break;
//		case 13:
//			printf("��ͷԪ��Ϊ%d\n", DCListFront(list));
//			break;
//		case 14:
//			printf("��βԪ��Ϊ%d\n", DCListBack(list));
//			break;
//		case 15:
//			DCListDestroy(&list);
//			printf("�ݻٳɹ���\n");
//			break;
//		default:
//			printf("�������������ѡ��.......\n");
//			break;
//		}
//		system("pause");
//		system("cls");
//	}
//	return 0;
//}