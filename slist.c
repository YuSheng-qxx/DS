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
//				SListPushBack(&list, item);
//			}
//			printf("β���������ݳɹ���\n");
//			break;
//		case 2:
//			printf("������Ҫ���������<��-1����>:");
//			while (scanf("%d", &item), item != -1)
//			{
//				SListPushFront(&list, item);
//			}
//			printf("ͷ���������ݳɹ���\n");
//			break;
//		case 3:
//			SListShow(&list);
//			break;
//		case 4:
//			SListPopBack(&list);
//			printf("β��ɾ�����ݳɹ���\n");
//			break;
//		case 5:
//			SListPopFront(&list);
//			printf("ͷ��ɾ�����ݳɹ���\n");
//			break;
//		case 6:
//			printf("������Ҫ�����λ��:");
//			scanf("%d", &pos);
//			printf("������Ҫ�����Ԫ�أ�");
//			scanf("%d", &item);
//			SListInsertPos(&list, pos, item);
//			flag = SListInsertPos(&list, pos, item);
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
//			printf("������Ҫ�����Ԫ�أ�");
//			scanf("%d", &item);
//			SListSort(&list);
//			SListInsertVal(&list, item);
//			flag = SListInsertVal(&list, item);
//			if (flag)
//			{
//				printf("�������ݳɹ���\n");
//			}
//			else
//			{
//				printf("��������ʧ�ܣ�\n");
//			}
//			break;
//		case 8:
//			printf("������Ҫɾ����λ�ã�");
//			scanf("%d", &pos);
//			SListErasePos(&list, pos);
//			printf("ɾ��Ԫ�سɹ���\n");
//			break;
//		case 9:
//			printf("������Ҫɾ����Ԫ�أ�");
//			scanf("%d", &item);
//			SListEraseVal(&list, item);
//			printf("ɾ��Ԫ�سɹ���\n");
//			break;
//		case 10:
//			printf("������Ҫ���ҵ�Ԫ�أ�");
//			scanf("%d", &item);
//			SListFind(&list, item);
//			break;
//		case 11:
//			printf("SeqList length=%d\n", SListLength(&list));
//			break;
//		case 12:
//			SListSort(&list);
//			printf("˳�������ɹ���\n");
//			break;
//		case 13:
//			SListReverse(&list);
//			printf("˳���ת����ɣ�\n");
//			break;
//		case 14:
//			SListClear(&list);
//			break;
//		case 15:
//			printf("��ͷԪ��Ϊ%d\n", SListFront(list));
//			break;
//		case 16:
//			printf("��βԪ��Ϊ%d\n", SListBack(list));
//			break;
//		case 17:
//			printf("������Ҫɾ����Ԫ�أ�");
//			scanf("%d", &item);
//			SListErase_all(&list, item);
//			printf("ɾ���ɹ���\n");
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