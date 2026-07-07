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
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        vector<int>v;
        ListNode * temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int i=0;
        int j=v.size()-1;
        while(i<j){
            int t=v[i];
            v[i]=v[j];
            v[j]=t;
            i++;
            j--;
        }
        i=0;
        ListNode * temp2=head;
        while(temp2!=NULL){
            temp2->val=v[i];
            i++;
            temp2=temp2->next;
        }
        return head;


        
    }
};
