#ifndef __NODE_H__
#define __NODE_H__
#include <iostream>
using namespace std;
class node
{
public:
	int value;
	node* pleft = NULL;
	node* pright = NULL;
	bool fLeftOf(const int value, const node* root);
	bool fRightOf(const int value, const node* root);
	node();
	node(const int& a);
	node* fInsert(node* root, const int value);
	void fPreOrder(node* root);
	void fInOrder(node* root);
	node* fDelete(node* root, int value);
	int fLeftMostValue(const node* root);
	~node();
};
#endif

