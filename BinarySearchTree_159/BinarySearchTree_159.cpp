#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	//constructor for the node class
	Node(string i, Node* l, Node* r);
	{
		info = i;
		leftchild = l;
		rightchild = r;
	}
};

class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree()
	{
		ROOT = NULL;	//initializing ROOT to null
	}

	void insert(string element)	//Insert a node in the binary search tree
	{
		Node* newNode = new Node(element, NULL, NULL);
		newNode->info = element;	//Assign value to the data fiald of the new node
		newNode->leftchild = NULL;	//Make the left child of the new node point to NULL
		newNode->rightchild = NULL;	//Make the right child of the new node point to NULL

		Node* parent = NULL;
		Node* currentNode = NULL;
		search(element, parent, currentNode);	//Locate the node which will bi the parent of the node to be in serted

		if (parent == NULL)	//If the parent is NULL (tree is emoty)
		{
			ROOT = newNode;	//Mark the new node as ROOT
			return;	//Exit
		}
	}
};