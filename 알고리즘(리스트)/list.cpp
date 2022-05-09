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

	cout << "2. 연결리스트에 추가할 노드의 데이터 3개 >>" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> data[i];
		list.insertNode(L, data[i]);
	}
	list.printList(L);

	cout << "3.탐색할 노드의 데이터를 정해주세요 >>" << endl;
	cin >> searchData;
	list.searchNode(L, searchData);
	while (1)
	{
		cout << "4. 삭제하고자 하는 노드를 알려주세요 >> " << endl;

		cin >> deleteData;
		p = list.searchNode(L, deleteData);
		list.deleteNode(L, p);
		if (p != NULL)
		{
			cout << deleteData << "를 삭제했습니다." << endl;
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
