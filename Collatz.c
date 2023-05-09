#include<stdio.h>

int main(){
    int x;
    scanf("%i", &x);
    while (x!=1){
        if(x%2==0){
            x/=2;
        }
        else{
            x*=3+1;
        }
        printf("%i\n",x);
    }
}