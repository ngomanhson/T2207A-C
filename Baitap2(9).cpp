//Viet ham tinh dien tich tam giac
#include <stdio.h>
#include <math.h>
bool ktTamgiac(int a, int b, int c){
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
int tinhDientich(int a, int b, int c){
    float p=tinhChuvi(a,b,c)/2.0;
	float s=sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
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
		float s=tinhDientich(a,b,c);
		printf("Dien tich cua tam giac la: %f",s);
	}else{
		printf("Day khong phai la canh cua tam giac");
	}
}
