#include<bits/stdc++.h>
using namespace std;

  
  struct ListNode {
      int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
      if(head == NULL) return NULL;
        else if(head->next == NULL) return head;
      
        ListNode *second = head->next;
        ListNode *third = second->next;
        
        
        second->next = head;
        head->next = swapPairs(third);

        return second; 
    }
};

int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    return 0;
}