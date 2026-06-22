class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int arr[26]={0};
        for(int i=0;i<text.size();i++){
            arr[text[i]-'a']++;
        }
        return min({arr['b'-'a'],arr['a'-'a'],arr['l'-'a']/2,arr['o'-'a']/2,arr['n'-'a']});
    }

};