#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;

	Node(int value) {
		data = value;
		next = nullptr;
	}
};

class LinkedList {
private:
	Node* head;

public:
	LinkedList() {
		head = nullptr;
	}

	void append(int value) {
		// 새로운 노드를 만들어둔다
		Node* newNode = new Node(value);
		// 현재 노드의 헤드가 빈 헤드면
		// 현재 노드의 헤드는 새 노드를 가르키도록 한다
		if (head == nullptr) {
			head = newNode;
			return;
		}
		//임시 노드를 만들어서 head를 복사한다
		Node* tmp = head;
		// 노드의 끝이 올 때까지 tmp를 옆으로 밀어버린다
		while (tmp->next != nullptr) {
			tmp = tmp->next;
		}
		//끝을 만나면 newNode를 넣는다
		tmp->next = newNode;
	}

	void print() {
		Node* tmp = head;
		while (tmp != nullptr) {
			cout << tmp->data << " -> ";
			tmp = tmp->next;
		}
		cout << "NULL" << "\n";
	}

	void prepend(int value) {
		Node* newNode = new Node(value);
		newNode->next = head;
		head = newNode;
	}

	void insertAt(int index, int value) {
		if (index == 0) {
			prepend(value);
			return;
		}
		Node* tmp = head;
		for (int i = 0; i < index - 1 && tmp != nullptr; i++) {
			tmp = tmp->next;
		}

		if (tmp == nullptr) {
			cout << "인덱스가 범위를 벗어남" << "\n";
			return;
		}
		Node* newNode = new Node(value);
		newNode->next = tmp->next;
		tmp->next = newNode;
	}

	void remove(int value) {
		if (head == nullptr) return;
		if (head->data == value) {
			Node* toDelete = head;
			head = head->next;
			delete toDelete;
			return;
		}

		Node* prev = head;
		Node* curr = head->next;

		while (curr != nullptr && curr->data != value) {
			prev = curr;
			curr = curr->next;
		}

		if (curr == nullptr) {
			cout << "값없음" << "\n";
			return;
		}

		prev->next = curr->next;
		delete curr;
	}

	~LinkedList() {
		Node* current = head;
		while (current != nullptr) {
			Node* nextNode = current->next;
			delete current;
			current = nextNode;
		}
	}
};


int main()
{
	LinkedList list;

	list.append(10);
	list.append(11);
	list.append(12);
	list.insertAt(2, 5);
	list.append(13);
	list.append(14);
	list.remove(13);
	list.print();

}

