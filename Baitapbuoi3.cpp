#include<stdio.h>

int main() {
	int n, t; 
	printf("Nhap ngay: ");
	scanf("%d",&n);
	printf("Nhap thang: ");
	scanf("%d",&t);

	int ngay;
	int thu;

	if(t==1) {
		ngay = n;
		thu = ngay%7;
	} else if(t==2) {
		ngay = n + 31;
		thu = ngay%7;
	} else if(t==3) {
		ngay = n + 59;
		thu = ngay%7;
	} else if(t==4) {
		ngay = n + 90;
		thu = ngay%7;
	} else if(t==5) {
		ngay = n + 120;
		thu = ngay%7;
	} else if(t==6) {
		ngay = n + 151;
		thu = ngay%7;
	} else if(t==7) {
		ngay = n + 181;
		thu = ngay/7;
	} else if(t==8) {
		ngay = n + 212;
		thu = ngay%7;
	} else if(t==9) {
		ngay = n + 243;
		thu = ngay%7;
	} else if(t==10) {
		ngay = n + 273;
		thu = ngay%7;
	} else if(t==11) {
		ngay = n + 304;
		thu = ngay%7;
	} else if(t==12) {
		ngay = n + 334;
		thu = ngay%7;
	}
	
	if(thu == 1){
		printf("Hom nay la thu hai");
	}
	else if(thu == 2){
	printf("Hom ny la thu ba");
	}
	else if(thu == 3){
		printf("Hom nay la thu tu");
	}
	else if(thu == 4){
		printf("Hom nay la thu nam");
	}
	else if(thu == 5){
		printf("Hom nay la thu sau");
	}
	else if(thu == 6){
		printf("Hom nay la thu bay");
	}
	else if(thu == 7){
		printf("Hom nay la chu nhat");
	}else{
		printf("Khong co ngay nay",&ngay);
	}
	
	printf("\nSo ngay trong nam la %d", ngay);
}
