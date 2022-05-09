#pragma once
#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* link;
};

struct HeadNode {
	Node* head;
};

class Singlist {
public:
	HeadNode* createList()
	{
		HeadNode* L = new HeadNode;
		L->head = NULL;
		cout << "1. 빈 연결리스트를 생성했습니다." << endl;
		return L;
	}

	void insertNode(HeadNode* L, int x)
	{
		Node* NewNode = new Node;
		NewNode->link = NULL;
		NewNode->data = x;
		if (L->head == NULL)
		{
			L->head = NewNode;
			return;
		}
		Node* LastNode = new Node;
		LastNode->link = L->head;
		while (LastNode->link != NULL)
		{
			LastNode = LastNode->link;
		}
		LastNode->link = NewNode;
	}

	void printList(HeadNode* L)
	{
		Node* p = L->head;
		cout << "L = [";
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
	void deleteList(HeadNode* L)
	{
		Node* p;
		while (L->head != NULL)
		{
			p = L->head;
			L->head = L->head->link;
			delete p;
			p = NULL;
		}
	}
	Node* searchNode(HeadNode* L, int x)
	{
		Node* p = L->head;
		while (p != NULL)
		{
			if (p->data == x)
			{
				cout << x << "를 찾았습니다" << endl;
				return p;
			}
			else
			{
				p = p->link;
			}
		}
		if (p == NULL)
			cout << "찾는 정보가 없습니다." << endl;
		return p;
	}
	
	void deleteNode(HeadNode* L, Node* p)
	{
		Node* pre;
		if (L->head == NULL)
			return;
		if (L->head->link == NULL)
		{
			delete (L->head);
			L->head = NULL;
			return;
		}
		else if (p == NULL)
			return;
		else 
		{
			pre = L->head;
			while (pre->link != p)
			{
				pre = pre->link;
			}
			pre->link = p->link;
			delete p;
		}
			
	}

	
};