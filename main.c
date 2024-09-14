#include <stdio.h>
#include <stdlib.h>
#include "itrTreeTrvs.h"

void PlaceNode(TreeNode* parent, int direction, int data) {
	TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;

	if (direction == 0) {
		if (parent->left == NULL) {
			parent->left = newNode;
		}
		else {
			printf("Error: 왼쪽 자식이 이미 존재합니다.\n");
		}
	}
	else if (direction == 1) {
		if (parent->right == NULL) {
			parent->right = newNode;
		}
		else {
			printf("Error: 오른쪽 자식이 이미 존재합니다.\n");
		}
	}
	else {
		printf("Error: 잘못된 방향입니다. 0은 왼쪽, 1은 오른쪽입니다.\n");
	}
}

void GenerateLinkTree(TreeNode** root) {

	TreeNode* n1 = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode* n2 = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode* n3 = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode* n4 = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode* n5 = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode* n6 = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode* n7 = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode* n8 = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode* n9 = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode* n10 = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode* n11 = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode* n12 = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode* n13 = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode* n14 = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode* n15 = (TreeNode*)malloc(sizeof(TreeNode));


	n1->data = 1;  n1->left = n2;    n1->right = n3;
	n2->data = 2;  n2->left = n4;    n2->right = n5;
	n3->data = 9;  n3->left = n6;    n3->right = n7;
	n4->data = 3;  n4->left = n8;    n4->right = n9;
	n5->data = 5;  n5->left = n10;   n5->right = n11;
	n6->data = 10; n6->left = n12;   n6->right = n13;
	n7->data = 13; n7->left = n14;   n7->right = n15;
	n8->data = 4;  n8->left = NULL;  n8->right = NULL;
	n9->data = 6;  n9->left = NULL;  n9->right = NULL;
	n10->data = 7; n10->left = NULL; n10->right = NULL;
	n11->data = 8; n11->left = NULL; n11->right = NULL;
	n12->data = 11; n12->left = NULL; n12->right = NULL;
	n13->data = 12; n13->left = NULL; n13->right = NULL;
	n14->data = 14; n14->left = NULL; n14->right = NULL;
	n15->data = 15; n15->left = NULL; n15->right = NULL;


	*root = n1;


}

void LinkOrders(TreeNode* root) {
	LinkPreOrder(root);
	LinkInOrder(root);
	LinkPostOrder(root);
}
int main() {
	TreeNode* root = NULL;
	//root->data = 1;
	
	GenerateLinkTree(&root);

	LinkOrders(root);

}