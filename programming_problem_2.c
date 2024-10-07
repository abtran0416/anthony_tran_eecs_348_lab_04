#include <stdio.h>

float celsius_to_farhenheit (float celsius){
    return (9/5) * celsius + 32;
}

float celsius_to_kelvin(float celsius){
    return (celsius + 273.15);
}

float fahrenheit_to_celsius (float fahrenheit) {
    return (5/9) * (fahrenheit -32);
}

float kelvin_to_celsius(float kelvin){
    return (kelvin - 273.15);
}

float kelvin_to_fahrenheit(float kelvin){
    return (9/5) * (kelvin - 273.15) + 32
}

int main(){
    float temp, final_temp;
    int input_scale, target_scale;

    printf("Enter the temperature value: ");
    scanf("%f", &temp);

    printf("Choose the input temperature scale:\n");
    printf ("1) Celsius 2) Fahrenheit 3) Kelvin");
    printf("Enter a choice (1, 2 or 3)");
    scanf ("&d", &input_scale);

    printf("Choose the input temperature scale:\n");
    printf ("1) Celsius 2) Fahrenheit 3) Kelvin");
    printf("Enter a choice (1, 2 or 3)");
    scanf ("&d", &target_scale);

    if (input_scale == 1){
        if (target_scale == 1){ //If Celsius == celsius
            final_temp = temp;
        } else if (target_scale == 2){//Celsius conveted to fahrenheit
            final_temp = celsius_to_farhenheit(temp);
        }else if (target_scale == 3){
            final_temp = celsius_to_farhenheit(temp);
        }
    }
    printf("Conveted Temp: %.2f", final_temp)

    
}
