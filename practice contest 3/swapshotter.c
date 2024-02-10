// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++){
        int n;
        scanf("%d",&n);
        int arr[n],brr[n];
        for(int j = 0;j<n;j++){
            scanf("%d",&arr[j]);
        }
         for(int k = 0;k<n;k++){
            scanf("%d",&brr[k]);
        }
        for(int l = 0 ;l<n;l++){
            if(arr[l]<brr[l]){
                int temp=arr[l];
                arr[l]=brr[l];
                brr[l]=temp;
            }
        }
        int max1 = arr[0],max2 = brr[0];
        for(int m = 0 ; m<n-1 ; m++){
            if(max1<arr[m+1]){
                max1=arr[m+1];
            }
        }
                for(int o = 0 ; o<n-1; o++){
            if(max2<brr[o+1]){
                max2=brr[o+1];
            }
        }
        if(max1 == arr[n-1] && max2 == brr[n-1] ){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}