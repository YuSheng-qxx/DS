#include"queue.h"
void main()
{
	CycleSeqQueue Q;
	CycleSeqQueueInit(&Q);
	CycleSeqQueueEn(&Q, 1);
	CycleSeqQueueEn(&Q, 2);
	CycleSeqQueueEn(&Q, 3);
	CycleSeqQueueEn(&Q, 4);
	CycleSeqQueueEn(&Q, 5);
	CycleSeqQueueEn(&Q, 6);
	CycleSeqQueueEn(&Q, 7);
	CycleSeqQueueEn(&Q, 8);

	CycleSeqQueueEn(&Q, 9);
	CycleSeqQueueShow(&Q);

	CycleSeqQueueDe(&Q);
	CycleSeqQueueShow(&Q);
	CycleSeqQueueEn(&Q, 9);
	CycleSeqQueueShow(&Q);
	system("pause");
}
//void main()
//{
//	LinkQueue Q;
//	LinkQueueInit(&Q);
//	LinkQueueEn(&Q, 1);
//	LinkQueueEn(&Q, 2);
//	LinkQueueEn(&Q, 3);
//	LinkQueueEn(&Q, 4);
//	LinkQueueEn(&Q, 5);
//	LinkQueueShow(&Q);
//
//	int front_val;
//	while (!LinkQueueEmpty(&Q))
//	{
//		front_val = LinkQueueFront(&Q);
//		LinkQueueDe(&Q);
//		printf("%d ³ö¶Ó.\n", front_val);
//	}
//	LinkQueueDestroy(&Q);
//	system("pause");
//	return 0;
//}
//void main()
//{
//	SeqQueue Q;
//	SeqQueueInit(&Q);
//	SeqQueueEn(&Q, 1);
//	SeqQueueEn(&Q, 2);
//	SeqQueueEn(&Q, 3);
//	SeqQueueEn(&Q, 4);
//	SeqQueueEn(&Q, 5);
//	SeqQueueEn(&Q, 6);
//	SeqQueueEn(&Q, 7);
//	SeqQueueEn(&Q, 8);
//	SeqQueueEn(&Q, 9);
//	SeqQueueShow(&Q);
//	SeqQueueDe(&Q);
//	SeqQueueShow(&Q);
//	printf("front = %d\n", SeqQueueFront(&Q));
//	//SeqQueueEn(&Q, 9);
//	system("pause");
//	return 0;
//}
