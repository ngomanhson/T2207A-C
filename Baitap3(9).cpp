//Tinh tong cac chu so cua 1 so nguyen n
#include <stdio.h>
int tongCacchuso(int n){
	int t=0;
	do{
		t=t+n%10;
		n=n/10;
	}while(n>0);
	return t;
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("Tong cac chu so la: %d",tongCacchuso(n));
}
