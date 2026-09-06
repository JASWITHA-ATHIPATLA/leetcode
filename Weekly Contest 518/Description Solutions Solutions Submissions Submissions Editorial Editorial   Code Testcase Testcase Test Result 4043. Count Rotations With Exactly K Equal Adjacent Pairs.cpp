#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countRotations(string s, int k) {
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int score=0;
            for(int j=1;j<n;j++){
                if(s[j-1]==s[j]){
                    score+=1;
                }
            }
            if(score==k){
                cnt++;
            }
             rotate(s.begin(), s.begin() + 1, s.end());
        }
        return cnt;
    }
};