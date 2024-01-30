#include <stdio.h>
#include <stdlib.h>

int main(){

    double result,temp;
    char type;

    printf("What is your temperature: ");
    scanf("%lf", &temp);
    printf("If your temperature 'Fahreheit' type F or If your temperature 'Celsius' type C: ");
    scanf(" %c", &type);


    if(type == 'F'){
        result = (temp - 32) * 5/9;
        printf("Temperature in Celsius is %f", result);
    }else if(type == 'C'){
        result = (temp * 9/5) + 32;
        printf("Temperature in Fahrenheit is %f", result);
    }else{
        printf("Enter a valid type");
    }


    return 0;
}