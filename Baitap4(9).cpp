//Tim uoc chung lon nhat cua 2 so
#include <stdio.h>
int ucln(int a, int b){
	if(a==b){
		return a;
	}else{
		while(a!=b){
			if(a>b){
				a=a-b;
			}else{
				b=b-a;
			}
		}return b;
	}
}
int main(){
	int a,b;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	int x=ucln(a,b);
	printf("Uoc chung lon nhat la: %d",x);
}
