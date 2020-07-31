//#include"stack.h"
//void main()
//{
//	LinkStack st;
//	LinkStackInit(&st);
//	LinkStackPush(&st, 1);
//	LinkStackPush(&st, 2);
//	LinkStackPush(&st, 3);
//	LinkStackPush(&st, 4);
//	LinkStackPush(&st, 5);
//	LinkStackShow(&st);
//	LinkStackPop(&st);
//	LinkStackPop(&st);
//	LinkStackShow(&st);
//	printf("top = %d\n", LinkStackTop(&st));
//	printf("size = %d\n", LinkStackSize(&st));
//	LinkStackDestroy(&st);
//	system("pause");
//	return 0;
//}
//void main()
//{
//	SeqStack st;
//	SeqStackInit(&st);
//	SeqStackPush(&st, 1);
//	SeqStackPush(&st, 2);
//	SeqStackPush(&st, 3);
//	SeqStackPush(&st, 4);
//	SeqStackPush(&st, 5);
//	SeqStackShow(&st);
//	int top_val;
//	while (!SeqStackIsEmpty(&st))
//	{
//		top_val = SeqStackTop(&st);
//		SeqStackPop(&st);
//		printf("%d ³öÕ».\n", top_val);
//	}
//	SeqStackDestroy(&st);
//	system("pause");
//}