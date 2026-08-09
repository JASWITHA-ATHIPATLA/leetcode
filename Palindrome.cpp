//9. Palindrome Number
class Solution {
public:
    bool isPalindrome(int x) {
                long long int ans=0;
        int originalans=x;
        while(x>0){
            int rem=x%10;
            ans=(ans*10)+rem;
            x=x/10;
        }
        if(originalans!=ans)return false ;
        return true;
    }
};