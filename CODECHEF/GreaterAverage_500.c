#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	float arr[3];
	for (int i=1;i<=t;i++){
	    for(int j=0;j<3;j++){
	         scanf("%f",&arr[j]);
	    }
	     float x=(arr[0]+arr[1])/2;
	         if(x>arr[2]){
	             printf("YES\n");
	         }
	         if(x<=arr[2]){
	             printf("NO\n");
	  
	}
	
	}    	
return 0;
}


