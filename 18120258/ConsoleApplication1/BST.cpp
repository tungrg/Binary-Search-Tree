#include "BST.h"

BST* BST::searchNode(BST* T, int x)
{
	if (T)
	{
		if (T->value >= x)
		{
			if (T->value == x)
			{
				cout << T->value << endl;
				cout << T << endl;
			}
			return searchNode(T->pleft, x);
		}
		else
			return searchNode(T->pright, x);
	}
	return NULL;
}
BST* BST::insertNode(BST* node, int x)
{
		/* If the tree is empty, return a new node */
		if (node == NULL) return newNode(x);

		/* Otherwise, recur down the tree */
		if (x <= node->value)
			node->pleft = insertNode(node->pleft, x);
		else if (x > node->value)
			node->pright = insertNode(node->pright, x);

		/* return the (unchanged) node pointer */
		return node;
}

BST* BST::minValueNode(BST* node)
{
	BST* current = node;
	while (current && current->pleft != NULL)
		current = current->pleft;

	return current;
}

BST* BST::deleteNode(BST* root, int key)
{
	// base case 
	if (root == NULL) return root;

	// If the key to be deleted is smaller than the root's key, 
	// then it lies in left subtree 
	if (key < root->value)
		root->pleft = deleteNode(root->pleft, key);

	// If the key to be deleted is greater than the root's key, 
	// then it lies in right subtree 
	else if (key > root->value)
		root->pright = deleteNode(root->pright, key);

	// if key is same as root's key, then This is the node 
	// to be deleted 
	else
	{
		// node with only one child or no child 
		if (root->pleft == NULL)
		{
			BST* temp = root->pright;
			free(root);
			return temp;
		}
		else if (root->pright == NULL)
		{
			BST* temp = root->pleft;
			free(root);
			return temp;
		}

		// node with two children: Get the inorder successor (smallest 
		// in the right subtree) 
		BST* temp = minValueNode(root->pright);

		// Copy the inorder successor's content to this node 
		root->value = temp->value;

		// Delete the inorder successor 
		root->pright = deleteNode(root->pright, temp->value);
	}
	return root;
}


void BST::LNR(BST* Root)
{
	if (Root != NULL)
	{
		LNR(Root->pleft);
		cout << Root->value << " ";
		LNR(Root->pright);
	}
}


BST* BST::newNode(int x)
{
	BST* temp = ( BST*)malloc(sizeof(BST));
	temp->value = x;
	temp->pleft = temp->pright = NULL;
	return temp;
}

BST* BST::searchNode1(BST* T, int x)
{
	if (T)
	{
		if (T->value == x)
		{
			cout << T->value << endl;
			cout << T << endl;
		}

		else if (T->value > x)
			{
			return searchNode(T->pleft, x);
			}
			
		else
			return searchNode(T->pright, x);
	}
	return NULL;
}
