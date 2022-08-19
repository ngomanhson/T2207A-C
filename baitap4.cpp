#include <stdio.h>
int main(){
	int n,max;
	printf("Nhap kich thuoc mang n: ");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap [%d]: ",i+1);
		scanf("%d",&a[i]);
	}
	
	int x=a[0];
	for (int i=0;i<n;i++){
    if (a[i]>max){
        max=a[i];
        }
    }
	printf("Doan chua tat ca gia tri la: [%d,%d]",-max,max);
}
