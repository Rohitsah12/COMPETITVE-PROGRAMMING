#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int countHappiness = 0;
        int countSadness = 0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=l && arr[i]<=r){
                ans++;
                countHappiness=max(ans,countHappiness);
            }
            else{
                ans--;
                countSadness=min(ans,countSadness);
            }
        }
        cout << countHappiness<< " " << countSadness<< endl;
        
    }
    return 0;
}
