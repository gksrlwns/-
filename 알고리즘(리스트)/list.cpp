#include <iostream>
//#include "listPractice.h"
#include "CircleLinkedList.h"

using namespace std;

int main()
{
	/*Singlist list;
	HeadNode* L;
	Node* p;
	L = list.createList();
	int data[3],searchData,deleteData;

	cout << "2. ���Ḯ��Ʈ�� �߰��� ����� ������ 3�� >>" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> data[i];
		list.insertNode(L, data[i]);
	}
	list.printList(L);

	cout << "3.Ž���� ����� �����͸� �����ּ��� >>" << endl;
	cin >> searchData;
	list.searchNode(L, searchData);
	while (1)
	{
		cout << "4. �����ϰ��� �ϴ� ��带 �˷��ּ��� >> " << endl;

		cin >> deleteData;
		p = list.searchNode(L, deleteData);
		list.deleteNode(L, p);
		if (p != NULL)
		{
			cout << deleteData << "�� �����߽��ϴ�." << endl;
			break;
		}
	}*/

	CircleList list;
	HeadNode* CL;
	
	CL = list.createList();
	list.insertFirstNode(CL,100);
	list.insertFirstNode(CL, 200);
	list.insertFirstNode(CL, 300);
	list.insertFirstNode(CL, 400);
	Node* p = list.searchNode(CL, 300);
	list.deleteNode(CL, p);
	list.examplePrint(CL);
	list.printList(CL);
}
