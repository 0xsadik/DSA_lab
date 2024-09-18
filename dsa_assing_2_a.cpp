#include<bits/stdc++.h>
using namespace std;
#define doura ios::sync_with_stdio(0);cin.tie(0)
#define ll long long
#define sesh '\n';

struct Node {
  char data;
  Node* next;
};

// func to create a new node 

Node* newNode(char data) {
  Node* new_node = new Node;
  new_node-> data = data;
  new_node-> next = NULL;
  return new_node;
}

// func to print the linked list 
void printList(Node* head) {
  Node* current = head;
  while(current != NULL) {
    cout << current-> data << " -> ";
    current = current-> next;
  }
  cout << '\n';
}

int main() {
  #ifndef TORI
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
  #endif

  // let's create the linked list
  Node* head = newNode('A');
  head -> next = newNode('B');
  head -> next -> next = newNode('C');
  head -> next -> next -> next = newNode('D');

  cout << "Linked list: \n";
  printList(head);
  
  return 0;
}
