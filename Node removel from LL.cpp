/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.

Input Format
Int n number of nodes in a linked list and int x pos from the end
n numbers which are the values of n nodes

Constraints
The number of nodes in the list is sz.
1 <= sz <= 30000
0 <= Node.val <= 100000
1 <= x <= sz
If there is no node in the linked list then just print -1

Output Format
Print the updated list or just return the updated head

Sample Input
6 2 
1 2 3 4 5 6 
Sample Output
1 2 3 4 6 
*/

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* slow = dummy;
    ListNode* fast = dummy;
    for (int i = 0; i < n; i++) {
        fast = fast->next;
    }
    while (fast->next) {
        slow = slow->next;
        fast = fast->next;
    }
    ListNode* temp = slow->next;
    slow->next = slow->next->next;
    delete temp;
    return dummy->next;
}

int main() {
    int n, x;
    cin >> n >> x;
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
    head = removeNthFromEnd(head, x);
    if (!head) {
        cout << -1;
    }
    else {
        while (head) {
            cout << head->val << " ";
            head = head->next;
        }
    }
    return 0;
}
