//Tim boi chung nho nhat cau 2 so
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
int bcnn(int a, int b){
	int s=a*b;
	int nn=s/ucln(a,b);
	return nn;
}

int main(){
	int a,b;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	int x=bcnn(a,b);
	printf("Boi chung nho nhat la: %d",x);
}
