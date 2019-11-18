#include "BST.h"
#include "Source.h"

int main()
{
	BST* root = NULL;
	int lenh;
	int a[16] = { 10, 6, 15, 13, 14, 9, 7, 3, 17, 10, 9, 3, 1, 10, 7, 8 };
	for (int i = 0; i < 16; i++)
	{
		root = root->insertNode(root, a[i]);
	}
	do
	{
		system("cls");
		inMenu();
		cin >> lenh;
		fHandle(lenh, root);
	} while (lenh != 6);
}
