#include <stdio.h>
    
int main(void)
{
    int num1;
    int num2;
    int sum;
    printf("Enter your number:");
    scanf("%d", &num1);
    printf("Enter your number:");
    scanf("%d", &num2);
    sum = num1 + num2;

    printf("The sum is %d \n", sum);
    getchar();
}
