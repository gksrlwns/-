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
	void printList(HeadNode* L)
	{
		Node* p;
		cout << "CL =[";
		p = L->head;
		if (p == NULL)
		{
			cout << "]";
			return;
		}
		do
		{
			cout << p->data;
			p = p->link;
			if (p != L->head) cout << ", ";
		} while (p != L->head);
		{
			cout << "]";
		}
		
	}
	void printList(HeadNode* L) {
		//��� ������� ����Ʈ ���
		Node* p;
		Node* tmp;

		p = L->head;

		/*if (p == NULL) {
			cout << "���� ����Ʈ�� ����ֽ��ϴ�." << endl;
			return;
		}*/
			cout << "CL = ( "; // ����Ʈ�� �� �� ���
			tmp = L->head;
			cout << p->data;
			p = p->link;

			while (p != L->head) {  // ��尡 ����Ű�� �� p�� ����Ű�� �Ǹ� ����� �����.
				cout << ", ";
				cout << p->data;
				p = p->link;
			}
		cout << " )" << endl << endl;
	}
	/*void printList(HeadNode* CL)
	{
		Node* p;
		p = CL->head;
		cout << "CL =[";
		while (p != CL->head)
		{
			cout << p->data;
			p = p->link;
			if (p != CL->head)
			{
				cout << ", ";
			}

		}
		cout << "]";
	}*/
};
