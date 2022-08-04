#include <stdio.h>
int main(){
	int a;
	printf("Nhap a: ");
	scanf("%d",&a);
	
	int b;
	printf("Nhap b: ");
	scanf("%d",&b);
	
	int c;
	printf("Nhap c: ");
	scanf("%d",&c);
	
	int max=a;
	if(max<b){
		max=b;
	}
	if(max<c){
		max=c;
	}
	printf("So lon nhat la %d",max);
}
