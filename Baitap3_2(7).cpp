#include<stdio.h>
int TimKiem(int a[], int n){
    int x;
    printf("\nNhap x: ");
    scanf("%d",&x);

    for(int i=0;i<n;i++){
        if(a[i]==x){
            printf("Gia tri x trong mang la: %d\n",i+1);
        }
    }
}


int Nhap(int a[], int n){
    for(int i=0;i<n;i++){
        printf("Nhap a[%d]: ",i+1);
        scanf("%d",&a[i]);
    }
}

int Xuat(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

int main(){
    int a[100];
    int n;
    
    do{
        printf("Nhap mang n: ");
        scanf("%d",&n);
        if(n<1 || n>100){
            printf("Nhap lai: ");
        }
    }while(n<1 || n>100);
    
    Nhap(a, n);
    printf("Cac phan tu trong mang la: ");
    Xuat(a,n);
    TimKiem(a,n);
}
