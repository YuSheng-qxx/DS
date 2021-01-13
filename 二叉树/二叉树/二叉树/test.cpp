#include"bintree.h"

void main()
{
	BinTree bt;
	BinTreeInit(&bt);
	BinTreeCreate(&bt);
	//printf("size = %d\n", Size(bt));

	//先序遍历
	printf("VLR:");
	BinTreeVLR(bt);
	printf("\n");
	//中序遍历
	printf("LVR:");
	BinTreeLVR(bt);
	printf("\n");
	//后序遍历
	printf("LRV:");
	BinTreeLRV(bt);
	printf("\n");
	//层次遍历
	printf("Level:");
	BinTreeLevel(bt);
	printf("\n");
	
}