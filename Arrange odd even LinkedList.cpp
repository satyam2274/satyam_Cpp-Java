/*

We are Given a singly linked list, group all odd nodes together followed by the even nodes. Here we are talking about the node number and not the value in the nodes.
Note: i) You should try to do it in place. The program should run in O(1) space complexity and O(nodes) time complexity.
ii) The relative order inside both the even and odd groups should remain as it was in the input.
iii) The first node is considered odd, the second node even and so on

Input Format
First line contains the number of nodes n. Next line contains the n node numbers.

Constraints
1<=Length of linked list<=10^4

Output Format
Print the original list and the modified list after Grouping all odd nodes together followed by the even nodes.

Sample Input
10
1 2 3 4 5 6 7 8 9 10
Sample Output
Original List: 1 2 3 4 5 6 7 8 9 10 
Modified List: 1 3 5 7 9 2 4 6 8 10 
*/
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insertAtEnd(Node* head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* groupOddEven(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    Node* oddHead = head;
    Node* evenHead = head->next;
    Node* oddTail = oddHead;
    Node* evenTail = evenHead;
    while (evenTail != NULL && evenTail->next != NULL) {
        oddTail->next = evenTail->next;
        oddTail = oddTail->next;
        evenTail->next = oddTail->next;
        evenTail = evenTail->next;
    }
    oddTail->next = evenHead;
    return oddHead;
}

int main() {
    int n, data;
    cin >> n;
    Node* head = NULL;
    for (int i = 0; i < n; i++) {
        cin >> data;
        head = insertAtEnd(head, data);
    }
    cout << "Original List: ";
    printList(head);
    cout << endl;
    head = groupOddEven(head);
    cout << "Modified List: ";
    printList(head);
    return 0;
}
