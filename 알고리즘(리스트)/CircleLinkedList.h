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

class CircleList {
public:
	HeadNode* createList()
	{
		HeadNode* CL = new HeadNode;
		CL->head = NULL;
		return CL;
	}
	//ó���� �߰�
	void insertFirstNode(HeadNode* CL, int x)
	{
		Node* NewNode = new Node;
		Node* temp;
		NewNode->data = x;

		if (CL->head == NULL)
		{
			CL->head = NewNode;
			NewNode->link = NewNode;
		}
		else
		{
			temp = CL->head;
			while (temp->link != CL->head)
				temp = temp->link;
			NewNode->link = temp->link;
			temp->link = NewNode;
			CL->head = NewNode;
		}
	}

	//Ư�� ��� �ڿ� �߰�
	void insertMiddleNode(HeadNode* L, Node* p, int x)
	{
		Node* NewNode = new Node;
		NewNode->data = x;
		if (L->head == NULL)
		{
			L->head = NewNode;
			NewNode->link = NewNode;
		}
		else
		{
			NewNode->link = p->link;
			p->link = NewNode;
		}

	}

	Node* searchNode(HeadNode* L, int x)
	{
		Node* p = L->head;
		while (p != NULL)
		{
			if (p->data == x)
			{
				cout << x << "�� ã�ҽ��ϴ�" << endl;
				return p;
			}
			else
			{
				p = p->link;
			}
		}
		if (p == NULL)
			cout << "ã�� ������ �����ϴ�." << endl;
		return p;
	}
	//Ư�� ��� ����
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
			if (p == L->head) L->head = p->link;
			delete p;
		}

	}
	//�־��� �����͸� ���� ��� ����
	void deleteDataNode(HeadNode* L, int x)
	{
		Node* preNode, * delNode;
		preNode = L->head;
		while (preNode->link->data != x)preNode = preNode->link;
		if (L->head == NULL) return;
		else
		{
			delNode = preNode->link;
			if (delNode == preNode) L->head = NULL;
			else
			{
				preNode->link = delNode->link;
				if (delNode == L->head) L->head = delNode->link;
			}
			delete delNode;
		}
		cout << x << "�� �����Ͱ��� ���� ��尡 �����Ǿ����ϴ�." << endl;
		return;
	}

	//��
	void printList(HeadNode* L) { 
		//��� ������� ����Ʈ ���
		Node* p;
		p = L->head;
		if (p == NULL) {
			cout << "���� ����Ʈ�� ����ֽ��ϴ�." << endl;
			return;
		}
		cout << "CL = ( "; // ����Ʈ�� �� �� ���
		cout << p->data;
		p = p->link;

		while (p != L->head) // ��尡 ����Ű�� �� p�� ����Ű�� �Ǹ� ����� �����.
		{  
				cout << ", ";
				cout << p->data;
				p = p->link;
		}
		cout << " )" << endl << endl;
	}
	void examplePrint(HeadNode *L)
	{
		Node* p = L->head;
		if (p == NULL) {
			cout << "���� ����Ʈ�� ����ֽ��ϴ�." << endl;
			return;
		}
		cout << "example CL = (";
		do {
			cout << p->data;
			p = p->link;
			if (p != L->head) cout << ", ";
			
		} while (p != L->head);
		cout << ")" << endl;
	}
};
