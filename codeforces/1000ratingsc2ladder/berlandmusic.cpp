#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define Rohit ios_base::sync_with_stdio(false);
#define Kumar cin.tie(NULL);
#define Sah cout.tie(NULL);
using namespace std;


void solve() {
    int n;
        cin>>n;
        int a[n];
        int b[n];
        map<int,int> map;
        vector<int> ones;
        vector<int> zeroes;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
            map[a[i]]=i;
        }
        string s;
        cin>>s;
 
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                zeroes.push_back(a[i]);
            else
                ones.push_back(a[i]);
        }
        sort(zeroes.begin(),zeroes.end());
        sort(ones.begin(),ones.end());
        sort(a,a+n);
 
 
        reverse(zeroes.begin(),zeroes.end());
        reverse(ones.begin(),ones.end());
        reverse(a,a+n);
    //  for(int i=0;i<ones.size();i++)
    //         cout<<ones[i]<<" ";
 
    //     cout<<endl;
    //     for(int i=0;i<zeroes.size();i++)
    //         cout<<zeroes[i]<<" ";
    //         cout<<endl;
int i;
            for(i=0;i<ones.size();i++)
            {
                b[map[ones[i]]]=a[i];
            }
            for(int j=0;j<zeroes.size();j++)
            {
                b[map[zeroes[j]]]=a[i];
                i++;
            }
 
        for(int i=0;i<n;i++)
            cout<<b[i]<<" ";
            cout<<endl;
    
    
    
    

}

int main() {
   Rohit Kumar Sah
    
    // ll t = 1;
    ll t;
    cin>>t;
    while (t--) {
        solve();
    }
    
    return 0;
}
