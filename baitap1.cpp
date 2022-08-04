#include <stdio.h>
int main(){
	int num;
	printf("Nhap num: ");
	scanf("%d",&num);
	
	if(num>0){
		//yes
		printf("%d la so duong",num);
	}else{
		//no
		printf("%d la so am",num);
	}
}
