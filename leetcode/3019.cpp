class Solution {
public:
    int countKeyChanges(string s) {
        int n=s.size();
        for (int i = 0; i < n; ++i) {
            s[i] = tolower(s[i]);
        }
        int count_change=0;
        for(int i=0;i<n-1;i++ ){
            if(s[i]!=s[i+1]) count_change++;
        }
        return count_change;
    }
};