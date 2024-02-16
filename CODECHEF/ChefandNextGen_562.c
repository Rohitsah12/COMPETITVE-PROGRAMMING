#include <stdio.h>

int main(void) {
	int t,a,b,x,y;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    scanf("%d %d %d %d",&a,&b,&x,&y);
	    int p=x*y;
	    int q=a*b;
	    if(p>=q){
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}
	

}

