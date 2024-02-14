#include <stdio.h>

int main(void) {
	int t,x,y;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    scanf("%d %d",&x,&y);
	    int a=x*y;
	    if(a<100){
	        printf("0\n");
	    }
	    if(a>=100){
	        int b=a/100;
	        printf("%d\n",b);
	    }
	}

}
