#include<bits/stdc++.h>
using namespace std;
bool powerof2(int x){
    return x && !(x&(x-1));
}
int main(){
    int n;
    cin>>n;
    cout<<powerof2(n);
}