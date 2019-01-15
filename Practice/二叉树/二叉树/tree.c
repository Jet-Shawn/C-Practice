#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

struct TreeNode{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

void firstTree(struct TreeNode *T){
	if (T == NULL){
		return;
	}

	printf("%d", T->val);
	firstTree(T->left);
	firstTree(T->right);
}

void NodeTest(){
	struct TreeNode* T;
	firstTree(*T);
}