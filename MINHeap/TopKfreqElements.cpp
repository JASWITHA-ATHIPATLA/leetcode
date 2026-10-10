#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
                int n=nums.size();
        map<int,int>mapp;
        for(int i=0;i<n;i++){
            mapp[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto it:mapp){
            pq.push({it.second,it.first});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>ans;
       for(int i=0;i<k;i++){
        auto it=pq.top();
        pq.pop();
        ans.push_back(it.second);
       }
        return ans;
    }
};