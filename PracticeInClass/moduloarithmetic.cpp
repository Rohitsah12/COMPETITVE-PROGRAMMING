#include<bits/stdc++.h>
using namespace std;
#define int long long
long long MOD=10000000007;//1e9+7
int binpow(int base,int expo){
    if(expo==0) return 1;
    if(expo%2==1){
        return base*binpow(base,expo-1)%MOD;
    }
    else{
        int temp=binpow(base,expo/2);
        return temp*temp%MOD;
    }
}
int inverse(int x){
    return binpow(x,(MOD-2));
}
signed main(){
//a+b-c*d+e^f/7
int a,b,c,d,e,f,g;
cin>>a>>b>>c>>d>>e>>f;
    int temp1=(a+b)%MOD;
    int temp2=(c*d)%MOD;
    int temp3=(temp1-temp2)%MOD;
    int temp4=binpow(e,f);
    int temp5=(temp4*inverse(g))%MOD;
    int temp6=(temp3+temp5)%MOD;
    int ans=(temp6%MOD+MOD)%MOD;
    cout<<ans<<endl;

}