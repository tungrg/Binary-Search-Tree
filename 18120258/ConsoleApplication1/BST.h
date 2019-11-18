#ifndef __BTS_H__
#define __BTS_H__
#include <iostream>
using namespace std;

class BST
{
public:
	int value;
	BST* pleft;
	BST* pright;
	BST* searchNode(BST* Tree, int x);
	BST* insertNode(BST* Tree, int x);
	BST* minValueNode(BST* node);
	BST* deleteNode(BST* root, int key);
	void LNR(BST* Root);
	BST* newNode(int);
	BST* searchNode1(BST* Tree, int x);

};
#endif
