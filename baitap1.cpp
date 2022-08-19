//Nhap vao mang n so nguyen va 1 so nguyen x. Hay tim gia tri trong mang so xa gia tri x nhat

#include <stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc mang n: ");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap a[%d]: ",i+1);
		scanf("%d",&a[i]);
	}
	
	int x;
	int idx=0;
	printf("Nhap gia tri x: ");
	scanf("%d",&x);
	
	int xn= a[idx]-x;
	for(int i=1;i<n;i++){
		int num =a[idx]-x;
		if(num>xn){
			xn =num;
			idx=i;
		}
	}
	printf("Gia tri xa x nhat la: %d",a[idx]);
}
