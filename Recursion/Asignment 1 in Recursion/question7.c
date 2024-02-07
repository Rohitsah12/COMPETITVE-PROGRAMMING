#include<stdio.h>
int fact(int x){
  if(x==0||x==1) return 1;
  return x*fact(x-1);
}
int main(){
	int n,r,ncr,m;
	scanf("%d %d %d",&n,&r,&m);
	ncr=(fact(n)%m/(fact(n-r)*fact(r)))%m;
	printf("%d",ncr);
	return 0;
}