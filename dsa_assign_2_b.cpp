#include<bits/stdc++.h>
using namespace std;
#define doura ios::sync_with_stdio(0);cin.tie(0)
#define ll long long
#define sesh '\n';


// Node structure
struct Node {
    char data;
    Node* next;
};

// Function to create a new node
Node* newNode(char data) {
    Node* new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl; 

}

// Function to search for a character and count its occurrences
int countOccurrences(Node* head, char search) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        if (current->data == search) {
            count++;
        }
        current = current->next;
    }
    return count;
}


int main() {
    #ifndef TORI
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    Node* head = newNode('A');
    head->next = newNode('B');
    head->next->next = newNode('C');
    head->next->next->next = newNode('A'); // Added another 'A' for testing

    // Print the linked list
    cout << "Linked list: ";
    printList(head);

    // Search for a character and count its occurrences
    char searchChar = 'A';
    int occurrences = countOccurrences(head, searchChar);
    cout << "Occurrences of '" << searchChar << "': " << occurrences << endl;
    
    
    return 0;
}
