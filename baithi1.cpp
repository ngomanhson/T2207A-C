#include <stdio.h>
int main(){
    int n; 
    printf("nhap n: ");
    scanf("%d",&n);
    
    float t=0;
    for(int i=1;i<=n;i++){
        t+=(float)1/i;
	}
    printf("Tong la: %f",t);
}
