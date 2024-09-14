#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include "itrTreeTrvs.h"


void LinkInOrder(TreeNode* root) {
	LinkedStackType s;
	TreeNode* nptr = root;

	init(&s);

    printf("중위 순회 출력 예\n");

	while (nptr != NULL || !is_empty(&s)) {
		while (nptr != NULL) {
			push(&s, nptr);
            printf("push(%2d)", nptr->data);
			nptr = nptr->left;
		}
		nptr = pop(&s);
		printf("pop(%2d)", nptr->data);
        printf("visit(%2d)\n", nptr->data);

		nptr = nptr->right;
	}
    printf("\n");
}

void LinkPreOrder(TreeNode* root) {
    LinkedStackType s;
    TreeNode* nptr = root;

    init(&s);

    printf("전위 순회 출력 예\n");

    while (nptr != NULL || !is_empty(&s)) {
        while (nptr != NULL) {
            if (nptr->right != NULL) {
                push(&s, nptr->right);          
                printf("push(%2d)", nptr->right->data);
            }
            nptr = nptr->left;                    
        }

        if (!is_empty(&s)) {
            nptr = pop(&s);                       
            printf("pop(%2d)\n", nptr->data);
            printf("visit(%2d)\n", nptr->data);
        }
    }
    printf("\n");
}


void LinkPostOrder(TreeNode* root) {
    LinkedStackType s1, s2;
    TreeNode* nptr = root;

    init(&s1);
    init(&s2);

    printf("후위 순회 출력 예\n");

    if (nptr == NULL) return;

    push(&s1, nptr);
    printf("push(s1, %2d)", nptr->data);

    while (!is_empty(&s1)) {
        nptr = pop(&s1);
        printf("pop(s1, %2d)", nptr->data);

        push(&s2, nptr);
        printf("push(s2, %2d)", nptr->data);

        if (nptr->left != NULL) {
            push(&s1, nptr->left);
            printf("push(s1, %2d)", nptr->left->data);
        }
        if (nptr->right != NULL) {
            push(&s1, nptr->right);
            printf("push(s1, %2d)", nptr->right->data);
        }
    }

    while (!is_empty(&s2)) {
        nptr = pop(&s2);
        printf("pop(s2, %2d)", nptr->data);
        printf("visit(%2d)\n", nptr->data);
    }
    printf("\n");
}

