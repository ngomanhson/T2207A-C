#include<stdio.h>
int main(){
  int n,s;
  
  do{
    printf("Nhap n: ");
    scanf("%d", &n);
    s=0;
  }while(n<=0);
  printf("Cac uoc so la:",n);
  for(int i=1;i<=n;i++){
    if(n % i == 0){
      printf("%4d", i);
      s = s + i;
    }
  }
  printf("\nTong cac uoc so cua %d la: %ld ", n, s);
}
