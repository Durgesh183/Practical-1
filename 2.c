#include<stdio.h>
float celsiusToFahrenheit(float celsius)
{
    return (celsius*9/5)+32;

}
float fahrenheitToCelsius(float fahrenheit)
{
    return (fahrenheit-32)*5/9;
}
int main()
{
    float celsius,fahrenheit;
    printf("Enter the temperature in Celsius\n:");
    scanf("%f",&celsius);
    fahrenheit=celsiusToFahrenheit(celsius);
    printf("%f,%f\n",celsius,fahrenheit);
    printf("Enter the temperature in Fahrenheit\n:");
    scanf("%f",&fahrenheit);
    celsius=fahrenheitToCelsius(fahrenheit);
    printf("%f,%f",fahrenheit,celsius);
    return 0;

        }
