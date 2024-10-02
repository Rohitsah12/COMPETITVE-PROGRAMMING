#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){//-----> log(max(a,b))
    if(a==0) return b;
    return gcd(b%a,a);
}
int main(){
    int n; cin>>n;
    //o(nlogn)
    // vector<int>div(n+1);
    // for(int i=1;i<=n;i++){
    //     for(int j=i;j<=n;j+=i){
    //         div[j]++;
    //     }
    // }
    // for(int i=1;i<=n;i++){
    //     cout<<div[i]<<"\n";
    // }

        //Sieve of ersthothenes
//o(nlog(log(n)))
    // vector<int>prime(n+1,1);
    // prime[1]=0;
    // for(int i=2;i<=n;i++){
    //     if(prime[i]){
    //         for(int j=i*i;j<=n;j+=i){
    //             prime[j]=0;
    //         }
    //     }
    // }



            //gcd

    //properties of gcd
    //gcd(a,b)=gcd(a,b-a) if(b>a)
    //gcd(a,b)=gcd(b%a,a)---> 0(log(max(a,b)))


    
}