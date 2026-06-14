// leet code prob:1Two Sum-asked by google meta..
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<long long,int>mapp;
        vector<int>ans;long long sum=0;
        for(int i=0;i<n;i++){
           long long more=target-nums[i];
           if(mapp.find(more)!=mapp.end()){
                ans.push_back(mapp[more]);
                ans.push_back(i);
                return ans;
           }
           mapp[nums[i]]=i;
        }
        return ans;
    }
};

/**
 * 2. Add Two Numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
                 int carry=0;
         ListNode* LL1=l1;
         ListNode* LL2=l2;
         ListNode* dmynode=new ListNode(0);
         ListNode*temp=dmynode;
         while(LL1!=NULL || LL2!=NULL ||carry!=0){
            int sum=0;
            if(LL1!=NULL){
                  sum+=LL1->val;
                  LL1=LL1->next;
            }
            if(LL2!=NULL){
                sum+=LL2->val;
                LL2=LL2->next;
            }
           sum+=carry;
           carry=sum/10;
           ListNode*newNode=new ListNode(sum%10);
           temp->next=newNode;
           temp=temp->next;

         }
         if(carry){
            ListNode*newNode=new ListNode(carry);
            newNode->next=dmynode;
            return newNode;
         }                    
         return dmynode->next;
    }
};