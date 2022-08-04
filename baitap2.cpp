#include <stdio.h>
int main(){
	//input num
	int num;
	printf("Nhap num: ");
	scanf("%d",&num);
	
	if(num>0){
		//yes
		printf("%d la so duong",num);
	}else{
		//no
		if(num<0){
			//yes
			printf("%d la so am",num);
		}else{
			//no
			printf("bang 0",num);
		}
	}	
}	
