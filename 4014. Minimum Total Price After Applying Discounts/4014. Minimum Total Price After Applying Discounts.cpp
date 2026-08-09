// code:cpp
class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end(),greater<int>());
        sort(discounts.begin(),discounts.end(),greater<int>());
         int d = min(prices.size(), discounts.size());
        double discount=0.0;
        for(int i=0;i<d;i++){
            discount+=prices[i] * (100.0 - discounts[i]) / 100.0;
        }
        if(d<prices.size()){
        for(int i=d;i<prices.size();i++){
            discount+=prices[i];
        }
        }
        return discount;
    }
};