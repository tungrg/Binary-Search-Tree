#include "Source.h"
void inMenu()
{
	cout << "1. Nhap du lieu vao cay nhi phan" << endl;
	cout << "2. In cay nhi phan" << endl;
	cout << "3. Xoa 1 node" << endl;
	cout << "4.Tim 1 node " << endl;
	cout << "5. Tim tat ca ca node" << endl;
	cout << "6.Thoat" << endl;
	cout << "Nhap lenh can thuc hien: ";
}
int inMenu1()
{
	cout << "Nhap gia tri can them: ";
	int n;
	cin >> n;
	return n;
}
int inMenu3()
{
	cout << "Nhap gia tri node can xoa: ";
	int n;
	cin >> n;
	return n;
}
int inMenu4()
{
	cout << "Nhap gia tri node can tim: ";
	int n;
	cin >> n;
	return n;
}
void fHandle(int lenh, BST* root)
{
	if (lenh == 1)
	{
		int temp1 = inMenu1();
		root = root->insertNode(root, temp1);
	}
	else if (lenh == 2)
	{
		root->LNR(root);
		system("pause");
	}
	else if (lenh == 3)
	{
		int temp3 = inMenu3();
		root->deleteNode(root, temp3);
	}
	else if (lenh == 4)
	{
		int temp4 = inMenu4();
		root->searchNode1(root, temp4);
	}
	else if (lenh == 5)
	{
		int temp5 = inMenu4();
		root->searchNode(root, temp5);
	}
}