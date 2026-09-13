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
        int count=0;
       
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        if(n==count){
            head=head->next;
            return head;
        }
        temp=head;
        int res=count-n;
        int i=0;
        while(temp!=nullptr){
            i++;
            if(i==res){
                temp->next=temp->next->next;
                break;
            }
            temp=temp->next;
        }
        return head;
        
    }
};