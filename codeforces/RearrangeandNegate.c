#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int n;
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int arr[n];
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        for(int k=0;k<n;k++){
            if(arr[i]<0){
                arr[i]=(-1)*arr[i];
            }
            else{
                arr[i]=arr[i];
            }
        }
        int sum=0;
        for(int l=0;l<n;l++){
            sum+=arr[l];
        }
        printf("%d\n",sum);
    }
}