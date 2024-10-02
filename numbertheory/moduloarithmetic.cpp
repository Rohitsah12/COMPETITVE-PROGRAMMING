#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;

//(a+b)%m=((a%m)+(b%m))%m
//(a*b)%m=((a%m)*(b%m))%m
//(a-b)%m=((a%m)-(b%m)+m)%m
//a^b
//a^b=1-------> if(b=0)
//a^b=(a^b/2)^2----->if(b=even) 
//a^b=a*(a^b-1/2)^2----->if(b=odd) 

int pow(int a,int b){
    if(b==0) return a%MOD;
    if(b%2==0){
        int t=pow(a,b/2);
        return (1LL*t*t%MOD);
    }
    else{
        int t=pow(a,(b-1)/2);
        t=(1LL*t*t)%MOD;
        return 1LL*a*t %MOD;

    }
}

//division under modulo

signed main(){
    int a,b;
    cin>>a>>b;
    cout<<pow(a,b);
}

