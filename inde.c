# include<stdio.h>
int main(){
    printf("enter a number : ");
    int a,fact=1,sum=0;
    scanf("%d",&a);
    
    
    for(int i=1;i<=a;i++){
        fact = fact*i;
        sum = sum+fact;
    }
    printf("the total fact is : %d",fact);
    printf("the total sum is : %d",sum);
}