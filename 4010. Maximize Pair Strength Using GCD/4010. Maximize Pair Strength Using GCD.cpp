class Solution {
public:

    long long maxPairStrength(vector<int>& nums) {
        long long maxi = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            long long sum = 0;
            for (int j = i+1; j < n; j++) {
                
                long long g = gcd(nums[i], nums[j]);
                long long strength = 1ll*nums[i] * nums[j] / (g * g);
                sum = max(sum, strength);
            }
            maxi = max(sum, maxi);
        }
        return maxi;
    }
};