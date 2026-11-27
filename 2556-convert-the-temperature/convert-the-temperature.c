#include <stdio.h>

int main() {

int celsius, kelvin=0, fahrenheit=0, n1,n2;


printf("Enter Celsius: ");
scanf("%d", &celsius);

kelvin = celsius + 273;
fahrenheit = celsius * 1.8 + 32;

n1 = kelvin;
n2 = fahrenheit;

printf("%d, %d", n1, n2);

return (0);
}
