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

	//비교
	void printList(HeadNode* L) { 
		//노드 순서대로 리스트 출력
		Node* p;
		p = L->head;
		if (p == NULL) {
			cout << "연결 리스트가 비어있습니다." << endl;
			return;
		}
		cout << "CL = ( "; // 리스트가 안 빈 경우
		cout << p->data;
		p = p->link;

		while (p != L->head) // 헤드가 가리키는 걸 p가 가리키게 되면 출력을 멈춘다.
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
			cout << "연결 리스트가 비어있습니다." << endl;
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
