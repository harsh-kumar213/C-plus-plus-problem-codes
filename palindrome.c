#include<stdio.h>
int main(){
    int n1,n2, product,max = 0;
    printf("enter two value\n ");
    scanf("%d%d",&n1,&n2);
    if(n1>=10 && n2>10 &&n1<100 &&n2<100){
    for(int i =1; i<=n1; i++){
        for(int j =1; j<=n2; j++){
            product = i*j;
           int reverse = 0; 
           int s = product;
           while(product >0){
              reverse = reverse*10 + (product%10);
              product = product/10;
           }
           if(s == reverse){
            
                max = s;
            
           }
        }
     }
     printf("%d\n",max);}
     else {
        printf("not a valid statement\n");
     }
    return 0;
}