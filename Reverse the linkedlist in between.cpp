/*
There is a family on the trip of N members and they have already decided that they will be maitaining their order in the manner just like the linked list and at certain point due to thunderstorm they got panic and also their order got disturbed . they know that their order is so disturbed that if the whole members list from left point to the right point is reversed then their order will be maintianed again.

Input Format
First line contains the number of member in the family--N Second line contains the N member of the family. Third line contains the value of the left pointer and the right pointer from where we have to reverse the list to get the same order back.

Constraints
1 <= n <= 500
-500 <= Node.val <= 500
1 <= left <= right <= n

Output Format
You have to print the order after reversing the linked list from the given points.

Sample Input
5
1 2 3 4 5
2 4
Sample Output
1 4 3 2 5 
Explanation
left pointer points to the node '4' and the right pointer points to the node '2'. After reversing this much part of the list the order will be maintained.
*/
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseBetween(ListNode* head, int left, int right) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* pre = dummy;
    for (int i = 0; i < left - 1; i++) {
        pre = pre->next;
    }
    ListNode* cur = pre->next;
    for (int i = left; i < right; i++) {
        ListNode* next = cur->next;
        cur->next = next->next;
        next->next = pre->next;
        pre->next = next;
    }
    return dummy->next;
}

int main() {
    int n, left, right;
    cin >> n;
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
    cin >> left >> right;
    head = reverseBetween(head, left, right);
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}
