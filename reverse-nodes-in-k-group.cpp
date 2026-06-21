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
   ListNode*reverseLL(ListNode*temp){
        if(temp==NULL && temp->next==NULL)return temp;
         ListNode*prevNode=nullptr;
         while(temp!=NULL){
            ListNode*nextNode=…e(temp,k); 
            // cout<<nodek->data;
            if(nodek==NULL){
               if(prevNode) prevNode->next=temp;
                break;
            }     
            nextNode=nodek->next;
            nodek->next=NULL;
            reverseLL(temp);
            if(temp==head){
                head=nodek;
            }
            else{
                prevNode->next=nodek;
            }
                prevNode=temp;
                temp=nextNode;
        }
        return head;
    }
};