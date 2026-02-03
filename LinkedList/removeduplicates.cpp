/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* i=head;
        if(i==NULL) return head; //empty list
        ListNode* j=i->next;
        while(j!=NULL){
            //unique node found
            if(i->val!=j->val){
                i->next=j;
                i=j;//update i
            }
            j=j->next;//update j
        }
        i->next=NULL;
        return head;
    }
};