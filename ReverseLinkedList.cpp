/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev= NULL;
        ListNode* temp;
        
        while(head != NULL)
        {
            temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        return prev;
    }

};


/*
1)         ___     ___    ___
  NULL -> |_a_|-> |_b_|-> |_c_|-> NULL
   ^prev   ^head   ^temp

2)         ___   ___     ___
  NULL <- |_a_| |_b_|-> |_c_|-> NULL
            ^prev   ^head   ^temp
            
 3)        ___     ___   ___
  NULL <- |_a_|<- |_b_| |_c_|-> NULL
                    ^prev   ^head   ^temp
 
 4)        ___     ___     ___                   
  NULL <- |_a_|<- |_b_|<- |_c_| NULL
                            ^prev   ^head   ^temp
*/
