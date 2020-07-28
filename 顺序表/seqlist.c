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
//				SeqListPushBack(&list, item);
//			}
//			printf("β���������ݳɹ���\n");
//			break;
//		case 2:
//			printf("������Ҫ���������<��-1����>:");
//			while (scanf("%d", &item), item != -1)
//			{
//				SeqListPushFront(&list, item);
//			}
//			printf("ͷ���������ݳɹ���\n");
//			break;
//		case 3:
//			SeqListShow(&list);
//			break;
//		case 4:
//			SeqListPopBack(&list);
//			printf("β��ɾ�����ݳɹ���\n");
//			break;
//		case 5:
//			SeqListPopFront(&list);
//			printf("ͷ��ɾ�����ݳɹ���\n");
//			break;
//		case 6:
//			printf("������Ҫ�����λ��:");
//			scanf("%d", &pos);
//			printf("������Ҫ�����Ԫ�أ�");
//			scanf("%d", &item);
//			SeqListInsertPos(&list, pos, item);
//			flag = SeqListInsertPos(&list, pos, item);
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
//			SeqListSort(&list);
//			SeqListInsertVal(&list, item);
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
//			SeqListErasePos(&list, pos);
//			printf("ɾ��Ԫ�سɹ���\n");
//			break;
//		case 9:
//			printf("������Ҫɾ����Ԫ�أ�");
//			scanf("%d", &item);
//			SeqListEraseVal(&list, item);
//			printf("ɾ��Ԫ�سɹ���\n");
//			break;
//		case 10:
//			printf("������Ҫ���ҵ�Ԫ�أ�");
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
//			printf("˳�������ɹ���\n");
//			break;
//		case 14:
//			SeqListReverse(&list);
//			printf("˳���ת����ɣ�\n");
//			break;
//		case 15:
//			SeqListClear(&list);
//			break;
//		case 16:
//			printf("��ͷԪ��Ϊ%d\n", SeqListFront(&list));
//			break;
//		case 17:
//			printf("��βԪ��Ϊ%d\n", SeqListBack(&list));
//			break;
//		case 18:
//			printf("�ҵ��ˣ�%d\n", SeqListBinary_find(&list, item));
//			break;
//		case 19:
//			printf("������Ҫɾ����Ԫ�أ�");
//			scanf("%d", &item);
//			SeqListErase_all(&list, item);
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