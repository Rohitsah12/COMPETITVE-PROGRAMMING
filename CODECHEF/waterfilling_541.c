#include <stdio.h>

int main(void) {
	int t,b1,b2,b3;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
	    scanf("%d %d %d",&b1,&b2,&b3);
	    if(b1==0&&b2==0||b2==0&&b3==0||b3==0&&b1==0||b1==0&&b2==0&&b3==0){
	        printf("Water filling time\n");
	    }
	    else{
	        printf("Not now\n");
	    }
	}

}

