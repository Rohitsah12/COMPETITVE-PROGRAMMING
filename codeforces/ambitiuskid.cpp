#include<bits/stdc++.h>
using namespace std;
int main(){
          int n;
          cin>>n;
          int arr[n];
          for(int i=0;i<n;i++){
               cin>>arr[i];
          }
          int product=1;
          for(int i=0;i<n;i++){
               product*=arr[i];
               if(product==0) break;
          }
          int min=INT_MAX;
          for(int i=0;i<n;i++){
               if(arr[i]<0) arr[i]=abs(arr[i]);
               if(min>arr[i]){
                    min=arr[i];
               }
          }
          cout<<min;
}