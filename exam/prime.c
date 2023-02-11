#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    printf("emter number to check if prime\n");
    int num;
    scanf("%d", &num);
    isPrime(num);
}

bool isPrime(int num){
    int i;
    bool prime = true;
    if (num==1 || num%2==0 && num!=2) prime = false;
    else{
        for (int i=3; i<sqrt(num); i+=2){
            if(num%i==0){
                prime=false;
                break;
            }
        }
    }
    return prime;
}