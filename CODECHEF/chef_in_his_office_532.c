#include <stdio.h>

int main(void) {
	int t,x,y;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
	    scanf("%d %d",&x,&y);
	    printf("%d\n",x*4+y);
	}

}
