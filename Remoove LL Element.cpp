/*
You are given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and Print the new Linked List.

Input Format
First line contains N and k, length of LL and val respectively.
Second line contains N nodes of the Linked List.

Constraints
The number of nodes in the list is in the range [0, 104].
1 <= Node.val <= 50
0 <= val <= 50

Output Format
Print the new Linked List.

Sample Input
5 6
1 6 4 6 7
Sample Output
1 4 7
Explanation
New Linked List after removing 6 is : 1->4->7
*/

#include <iostream>
using namespace std;

// Define the structure of a node in the linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeNodes(ListNode* head, int val) {
    // Check if the head node has the value to be removed
    while (head != NULL && head->val == val) {
        head = head->next;
    }

    // Remove nodes with the given value from the rest of the linked list
    ListNode* curr = head;
    while (curr != NULL && curr->next != NULL) {
        if (curr->next->val == val) {
            curr->next = curr->next->next;
        } else {
            curr = curr->next;
        }
    }

    return head;
}

int main() {
    int n, val;
    cin >> n >> val;

    ListNode* head = NULL;
    ListNode* tail = NULL;

    // Create the linked list
    for (int i = 0; i < n; i++) {
        int nodeVal;
        cin >> nodeVal;

        ListNode* node = new ListNode(nodeVal);

        if (head == NULL) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    // Remove nodes with the given value
    head = removeNodes(head, val);

    // Print the updated linked list
    ListNode* curr = head;
    while (curr != NULL) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;

    return 0;
}
