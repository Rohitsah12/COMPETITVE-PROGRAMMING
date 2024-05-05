#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	int a,b,c;
	for(int i=0;i<t;i++){
	    scanf("%d %d %d",&a,&b,&c);
	    int x=a+b;
	    int y=b+c;
	    int z=c+a;
	    if(x>y){
	        if(x>z){
	            printf("%d\n",x);
	        }
	        else{
	            printf("%d\n",z);
	        }
	    }
	    else{
	        if(y>z){
	            printf("%d\n",y);
	        }
	        else{
	            printf("%d\n",z);
	        }
	    }
	}

}

