class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int size_s1 = s1.size();
        int n = s2.size();
        string sorted_s1 = s1;
        sort(sorted_s1.begin(), sorted_s1.end()); 
        
        for (int i = 0; i <= n - size_s1; i++) {
            string neww = s2.substr(i, size_s1); 
            string sorted_neww = neww;
            sort(sorted_neww.begin(), sorted_neww.end()); 
            
            if (sorted_s1 == sorted_neww) {
                return true; 
            }
        }
        
        return false; 
    }
};
