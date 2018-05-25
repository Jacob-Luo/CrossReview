/** 
 * This coding of linked list not working for string nodes, not sure why yet.
 * */

#include <iostream>
#include <string.h>

using namespace std;

template<typename DataType>
class Node {
public:
	DataType data= NULL;
	Node<DataType>* pNextNode=NULL;
	Node(DataType d) {
		this->data = d;
	}
};

template<typename DataType>
class ClinkedList {
public:
	Node<DataType>* pRootNode=NULL;
	void addNode(DataType d) {
		if (this->pRootNode == NULL) {
			this->pRootNode = new Node<DataType>(d);
		}
		else {
			Node<DataType>* pNode = this->pRootNode->pNextNode;
			Node<DataType>* pPreNode = this->pRootNode;
			while (pNode != NULL) { 
				pPreNode = pNode;
				pNode = pNode->pNextNode; 
				}
			pPreNode->pNextNode = new Node<DataType>(d);
		}
	}
	void deleteNode(DataType d) {
		if (this->pRootNode->data == d) {
			Node<DataType>* pNode = this->pRootNode;
			this->pRootNode = this->pRootNode->pNextNode;
			delete pNode;
		}
		else {
			Node<DataType>* pNode = this->pRootNode->pNextNode;
			Node<DataType>* pPreNode = this->pRootNode;
			while ((pNode != NULL) && (pNode->data != d)) {
				pPreNode = pNode;
				pNode = pNode->pNextNode;
			}
			if (pNode == NULL) return;
			else { // pNode->data == d
				pPreNode->pNextNode = pNode->pNextNode;
				delete pNode;
			}
		}
	}
	bool findNode(DataType d) {
		if (this->pRootNode->data == d) return true;
		else {
			Node<DataType>* pNode = this->pRootNode;
			while ((pNode != NULL) && (pNode->data != d)) {
				pNode = pNode->pNextNode;
			}
			if (pNode == NULL) return false;
			else return true;
		}
	}
	void printData() {
		Node<DataType>* pNode = (this->pRootNode);
		while (pNode != NULL) {
			cout << (pNode->data) << "\t";
			pNode = pNode->pNextNode;
		}
	}
};

int main(int argc, char const *argv[])
{
	/* code */
	ClinkedList<const char*> ll;
	ll.addNode("aaa");
	ll.addNode("bbb");
	ll.addNode("ccc");
	ll.addNode("ddd");
	ll.addNode("eee");

	cout << "Print all the data in list:\n\t";
	ll.printData();

	cout << "\nDelete some data:\n\t";
	ll.deleteNode("bbb");
	ll.deleteNode("ddd");
	ll.deleteNode("aaa");
	ll.printData();

	cout << "\nFound ccc still in the list? " << (ll.findNode("ccc")?"True":"False") << endl;

	return 0;
}
