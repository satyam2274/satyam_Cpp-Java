/*
You are given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and Print the reversed list.

Input Format
First line contains N,Left and Right.
Second line contains nodes of the Linked List.

Constraints
The number of nodes in the list is N.
1 <= n <= 500
-500 <= Node.val <= 500
1 <= left <= right <= N

Output Format
Print the reversed Linked List.

Sample Input
5 2 4
1 2 3 4 5
Sample Output
1 4 3 2 5
Explanation
1->2->3->4->5
Left=2 : 2
Right=4 : 4
Reverse of 2->3->4 is 4->3->2
Reverse Linked List : 1->4->3->2->5
*/

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseBetween(ListNode* head, int left, int right) {
    ListNode* prev = NULL;
    ListNode* curr = head;
    for (int i = 1; i < left; i++) {
        prev = curr;
        curr = curr->next;
    }
    ListNode* leftNode = prev;
    ListNode* tail = curr;
    for (int i = left; i <= right; i++) {
        ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    if (leftNode) {
        leftNode->next = prev;
    }
    else {
        head = prev;
    }
    tail->next = curr;
    return head;
}

int main() {
    int n, left, right;
    cin >> n >> left >> right;
    ListNode* head = NULL;
    ListNode* tail = NULL;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        ListNode* node = new ListNode(val);
        if (!head) {
            head = node;
            tail = node;
        }
        else {
            tail->next = node;
            tail = node;
        }
    }
    head = reverseBetween(head, left, right);
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}


