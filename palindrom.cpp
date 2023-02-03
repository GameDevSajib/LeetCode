class Solution {
public:
    bool isPalindrome(int x) {
        bool result = true;

        string s=to_string(x);
        int n = s.size();

        for(int i = 0; i < n/2; i++) {
            if(s[i] != s[n-1-i]) {
                result = false;
                break;
            }
        } 
        
        // Memory = O(1)
        // time = O(n)
        
        return result;
    }
};
