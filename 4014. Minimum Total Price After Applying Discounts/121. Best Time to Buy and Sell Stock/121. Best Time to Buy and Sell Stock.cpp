#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int n=prices.size();
        int profit=0;
        for(int i=0;i<n;i++){
            int cost=prices[i]-mini;
            profit=max(cost,profit);
            if(prices[i]<mini)mini=prices[i];
        }
        return profit;
    }
};