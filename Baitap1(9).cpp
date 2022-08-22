// Viet ham tinh chu vi tam giac
#include <stdio.h>
bool ktTamgiac(int a,int b,int c){
	if(a+b>c||b+c>a||a+c>b){
		return true;
	}else{
		return false;
	}
}

int tinhChuvi(int a,int b,int c){
	int cv;
	cv=a+b+c;
	return cv;
}

int main(){
	int a,b,c;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	printf("Nhap c: ");
	scanf("%d",&c);
	
	if(ktTamgiac(a,b,c)){
		int cv=tinhChuvi(a,b,c);
		printf("Chu vi cua tam giac la: %d",cv);
	}else{
		printf("Day khong phai la anh cua tam giac");
	}
}

