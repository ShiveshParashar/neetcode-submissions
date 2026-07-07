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
    void insertAtTail(ListNode* &head, int val) {
    
    ListNode* newNode = new ListNode(val);

    if(head == NULL) {
        head = newNode;
        return;
    }

    ListNode* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int>v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<=v.size()-k;i=i+k){
            int j=i+k-1;
            int q=i;
            while(q<j){
                int value=v[q];
                v[q]=v[j];
                v[j]=value;
                q++;
                j--;
            }

        }
        ListNode* answer=NULL;
        for(auto x:v){
            insertAtTail(answer,x);
        }
       return answer; 
    }
};
