#include<stdio.h>
int main(){
    int a ,b ,c ;
    printf("enter the age of ram");
    scanf("%d",&a);
    printf("Enter the age of sham :");
    scanf("%d",&b);
    printf("enter the age of Ajay");
    scanf("%d",&c);
    if(a<c && a<b){
        printf("Ram is the yougest among all:");
    }
     if(b<c && b<a){
        printf("Sham is the yougest among all:");
     }
       if(c<a && c<b){
        printf("Ajay is the yougest among all:");
    
       }
    
    return 0;
}