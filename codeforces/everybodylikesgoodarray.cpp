#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int count=0;
        for(int i=0;i<v.size()-1;i++){
            if((v[i]%2!=0 && v[i+1]%2!=0)||(v[i]%2==0 && v[i+1]%2==0) ){
                v[i+1]*=v[i];
                v.erase(v.begin() + i);
                i--;
                count++;
            }
        }
        cout<<count<<endl;
        
    }
}