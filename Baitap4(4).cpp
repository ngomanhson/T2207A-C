#include <stdio.h>
int main(){
	int n,i;
	printf("Nhap n: ");
	scanf("%d",&n);
	int s=0;
	while(n>0){
		i=n % 10;
		s=s * 10 + i;
		n= n/10; 
	}
	printf("So dao nguoc la: %d ",s);
}
