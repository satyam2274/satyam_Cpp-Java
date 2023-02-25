/*
Arrange elements in a Linked List such that all even numbers are placed after odd numbers.

Input Format
First line containt the N the number of nodes. Second line contains the N nodes.

Constraints
-100<value of node<100

Output Format
Print the linked list after making changes

Sample Input
5
1 2 2 2 1
Sample Output
1 1 2 2 2 
Explanation
Odd nodes list is 1->1. And even nodes list is 2->2->2.
*/
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void add_node(int data) {
        Node* new_node = new Node(data);
        if (head == nullptr) {
            head = new_node;
        }
        else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = new_node;
        }
    }

    void print_list() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
    }

    void arrange_list() {
        if (head == nullptr) {
            return;
        }

        // Separate odd and even nodes
        Node* odd_head = nullptr;
        Node* even_head = nullptr;
        Node* odd_tail = nullptr;
        Node* even_tail = nullptr;

        Node* current = head;
        while (current != nullptr) {
            if (current->data % 2 == 0) {  // even
                if (even_head == nullptr) {
                    even_head = current;
                    even_tail = current;
                }
                else {
                    even_tail->next = current;
                    even_tail = current;
                }
            }
            else {  // odd
                if (odd_head == nullptr) {
                    odd_head = current;
                    odd_tail = current;
                }
                else {
                    odd_tail->next = current;
                    odd_tail = current;
                }
            }
            current = current->next;
        }

        // Connect odd and even lists
        if (odd_head == nullptr) {
            head = even_head;
        }
        else {
            head = odd_head;
            odd_tail->next = even_head;
        }
        if (even_tail != nullptr) {
            even_tail->next = nullptr;
        }
    }
};

int main() {
    int n, data;
    cin >> n;
    LinkedList list;
    for (int i = 0; i < n; i++) {
        cin >> data;
        list.add_node(data);
    }
    list.arrange_list();
    list.print_list();
    return 0;
}
