#include <stdio.h>

int main(void) {
	int t,n,x;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
	    scanf("%d %d",&n ,&x );
	    int b=(n*x)/4;
	    if((n*x)%4==0)
	    printf("%d\n",b);
	    else
	    printf("%d\n",b+1);
	    
	}
	

}

