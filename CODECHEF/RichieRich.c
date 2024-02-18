#include <stdio.h>
#include<stdlib.h>
int main(void) {
	// your code goes here
	int t,x,a,b;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    scanf("%d %d %d",&a,&b,&x);
	    int p=abs(a-b);
	    printf("%d\n",p/x);
	}

}

