#pragma once
#include <iostream>
using namespace std;

//void insertElement(int L[], int n, int x)
//{
//	int i, k = 0, move = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (L[i] <= x && L[i + 1] >= x)
//		{
//			k = i + 1;
//			break;
//		}
//	}
//	if (i == n)
//	{
//		k = n;
//	}
//
//	for (i = n; i > k; i--)
//	{
//		L[i] = L[i-1];
//		
//	}
//	L[k] = x;
//}
//void deleteElement(int L[], int n, int x)
//{
//	int i, k;
//	for (i = 0; i < n; i++)
//	{
//		if (L[i] == x)
//		{
//			k = i;
//			break;
//		}
//	}
//	for (i = k; i < n; i++)
//	{
//		L[i] = L[i + 1];
//	}
//}
//
//int main()
//{
//	int list[10] = { 10, 20,40, 50, 60, 70 };
//	int i, move,in, size = 6;
//	
//	cout << "\n삽입 전 선형리스트 :";
//	for (i = 0; i < size; i++)
//	{
//			cout << list[i] << ", ";
//	}
//	insertElement(list, size, 30);
//	cout << "\n삽입 후 선형리스트 :";
//	for (i = 0; i <= size; i++)
//	{
//		cout << list[i] << ", ";
//	}
//	deleteElement(list, size, 30);
//	cout << "\n삭제 후 선형리스트 :";
//	for (i = 0; i < size; i++)
//	{
//		cout << list[i] << ", ";
//	}
//	
//}

struct Node {
	int data;
	struct Node* link;
};

struct HeadNode {
	Node* head;
};
class Singlist{
public:
	HeadNode* createLinkedList()
	{
		HeadNode* L = new HeadNode;
		L->head = NULL;
		return L;
	}

	void printList(HeadNode* L)
	{
		Node* p;
		cout << "L = [";
		p = L->head;
		while (p != NULL)
		{
			cout << p->data;
			p = p->link;
			if (p != NULL)
			{
				cout << ", ";
			}
		}
		cout << "]" << endl;
	}
	void insertFirstNode(HeadNode* L, int x)
	{
		Node* newNode = new Node;
		newNode->data = x;
		newNode->link = L->head;
		L->head = newNode;

	}
	void intsertMiddleNode(HeadNode* L,Node* pre, int x)
	{
		Node* newNode = new Node;
		newNode->data = x;
		if (L->head == NULL)
		{
			newNode->link = NULL;
			L->head = newNode;
		}
		else if (pre == NULL)
		{
			newNode->link = L->head;
			L->head = newNode;
		}
		else
		{
			newNode->link = pre->link;
			pre->link = newNode;
		}
			
	}
	void insertLastList(HeadNode* L, int x)
	{
		Node* newNode = new Node;
		newNode->data = x;
		newNode->link = NULL;
		if (L->head == NULL)
		{
			L->head = newNode;
		}
		
		Node* temp = L->head;
		while (temp->link != NULL) temp = temp->link;
		temp->link = newNode;
	}

};