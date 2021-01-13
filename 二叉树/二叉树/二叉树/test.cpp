#include"bintree.h"

void main()
{
	BinTree bt;
	BinTreeInit(&bt);
	BinTreeCreate(&bt);
	//printf("size = %d\n", Size(bt));

	//�������
	printf("VLR:");
	BinTreeVLR(bt);
	printf("\n");
	//�������
	printf("LVR:");
	BinTreeLVR(bt);
	printf("\n");
	//�������
	printf("LRV:");
	BinTreeLRV(bt);
	printf("\n");
	//��α���
	printf("Level:");
	BinTreeLevel(bt);
	printf("\n");
	
}