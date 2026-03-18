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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp=head;
        int ctn=0;
        while(temp!=NULL){
            temp=temp->next;
            ctn++;
        }
        if(ctn==n){
           return head->next;     
        }
        temp=head;
        for(int i=1; i<ctn-n; i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;   
    }
};