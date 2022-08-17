//Tinhh trung binh cong cua cac so le o vi tri chan trong mang n so

#include<stdio.h>
int main(){
	int a[100];
	int i,dem,n,s;
	printf("Nhap mang n: ");
	scanf("%d",&n);
	dem=0;
	s=0;
	  
	for(int i=0;i<n;i++){
	printf("Nhap [%d]:",i+1);
	scanf("%d",&a[i]);
		if(a[i]%2==0){
			s+=a[i];
			dem++;
 		}
	}
	printf("So phan tu co trong mang la: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
 	printf("\nTrung binh cong la: %.2f",(float)s/dem);
}

