//Cho mang n so nguyen, hay tim doan [a,b] tren truc so nguyen sao cho doan nay chua tat ca cac gia tri trong mang

#include <stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc mang n: ");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap [%d]: ",i+1);
		scanf("%d",&a[i]);
	}
	
	int max=a[0];
	int min=a[0];
	
	for(int i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
        }
    }
    
    for(int i=0;i<n;i++){
    if(a[i]<min){
        min=a[i];
        }
    }
	printf("Doan chua tat ca gia tri trong mang la: [%d,%d]",min,max);
}
