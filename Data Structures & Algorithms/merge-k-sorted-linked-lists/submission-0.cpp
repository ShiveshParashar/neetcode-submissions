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
    void insert_function(ListNode * &head,int val){
        if(!head){
            ListNode* n=new ListNode(val);
            head=n;
            return ;
        }
        ListNode* n=new ListNode(val);
        ListNode * temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
        return ;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v;
        for(auto l:lists){
            ListNode * temp=l;
            while(temp!=NULL){
                v.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(v.begin(),v.end());
        ListNode * result=NULL;
        for(auto x:v){
            insert_function(result,x);
        }
        return result;

        
    }
};
