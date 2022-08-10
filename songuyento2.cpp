#include <stdio.h>
int main(){
	int n,i,d;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	d=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			d++;
			printf("\n%d chia het cho %d",n,i);
		       }
		}
		if(d==2){
			printf("\n%d la so nguyen to",n);
		}else{
			printf("%d khong phai la so nguyen to",n);
		}
	
}
