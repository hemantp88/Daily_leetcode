
// You are given the head of a linked list, and an integer k.

// Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).
#include<bits/stdc++.h>
using namespace std;

//  * Definition for singly-linked list.
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* last=head,*first=head;
        for(int i=1;i<k;i++)
        {
            // first=first->next;
            last=last->next;

        }
        ListNode* temp=last;
        first=head;
        while(last->next!=NULL)
        {
            first=first->next;
            last=last->next;
        }
        swap(temp->val,first->val);
        return head;
    }
};
int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    return 0;
}