#include <iostream>>
using namespace std;

struct Node {
  int data;
  Node *next;
};

class LinkedList {
  Node *head;

public:
  void insert(int data) {
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
  }

  void insertAtN(int data, int position) {
    Node *newNode = new Node;
    newNode->data = data;
    Node *temp = head;

    if (position == 1) {
      newNode->next = head;
      head = newNode;
    } else {
      for (int i = 1; i < position - 1; i++) {
        temp = temp->next;
        if (temp == NULL) {
          break;
        }
      }
      newNode->next = temp->next;
      temp->next = newNode;
    }
  }

  void deleteAtN(int position) {
    Node *temp = head;
    if (position == 1) {
      head = head->next;
      delete temp;
    } else {
      for (int i = 1 ;i < position - 1; i++) {
        temp = temp->next;
        if (temp == NULL) {
          break;
        }
      }
      Node *temp2 = temp->next;
      temp->next = temp2->next;
      delete temp2;
    }
  }

void reverse() {
  Node *temp = head;
  
}

  void display() {
    Node *current = head;
    while (current != NULL) {
      cout << current->data << " ";
      current = current->next;
    }
    cout << endl;
  }
};

int main() {

  LinkedList list1;
  list1.insert(1);
  list1.insert(2);
  list1.insert(3);
  list1.insert(4);
  list1.display();
  list1.insertAtN(5, 1);
  list1.display();
  list1.deleteAtN(2);
  list1.display();
}