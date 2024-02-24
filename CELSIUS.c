
#include<stdio.h>
#include<math.h>
float celsiusToFahrenheit(float celsius)//function
{
     return (celsius*9/5)+32;
}
float fahrenheitToCelsius(float fahrenheit)//function
{
    return (fahrenheit-32)*5/9;
}
int main(){

printf("CELSIUS TO FAHRENHEIT CALCULATOR\n");
for(int celsius=0;celsius<=100;celsius++)
    {
        float fahrenheit=celsiusToFahrenheit(celsius);
        printf("%d celsius \t %.2f fahrenheit\n",celsius,fahrenheit);
    }
printf("FAHRENHEIT TO CELSIUS CALCULATOR\n");
for(int fahrenheit=32;fahrenheit<=212;fahrenheit++)//loop for fahrenheit to celsius conversion
    {
     float celsius=fahrenheitToCelsius(fahrenheit);
        printf("%d fahrenheit \t %.2f celsius\n",fahrenheit,celsius);
    }


return 0;
}
