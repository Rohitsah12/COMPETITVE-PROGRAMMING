#include <stdio.h>

int main(void) {
	int n,lucky=0,unlucky=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	    scanf("%d",&arr[i]);
        if(arr[i]%2==0){
	        lucky++;
        }
        else{
            unlucky++;
        }
	        
	    }
	    if(lucky>unlucky){
	        printf("READY FOR BATTLE");
	    }
	    else{
	        printf("NOT READY");
	    }
	

}

