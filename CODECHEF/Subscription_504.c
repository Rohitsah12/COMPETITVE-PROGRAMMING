#include <stdio.h>

int main() {
    int t,n,x;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&n,&x);
        if(n%6==0){
        int z=n/6;
        printf("%d\n",z*x);
    }
    else{
        int y=n/6;
        printf("%d\n",(y+1)*x);
    }
    }
  
return 0;
}
