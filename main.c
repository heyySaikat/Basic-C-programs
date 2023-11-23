#include <stdio.h>
#include <math.h>

double add(){
    int n, i;
    double sum = 0, d;
    printf("Addition of how many numbers ?\n=> ");
    scanf("%i", &n);
    for(i = 0; i < n; i++){
        printf("Enter #%d : ", i + 1);
        scanf("%lf", &d);
        sum += d;
    }
    return sum;
}
double subs(){
    double n1, n2;
    printf("Enter first number : ");
    scanf("%lf", &n1);
    printf("Enter second number : ");
    scanf("%lf", &n2);
    return n1 - n2;
}
double multi(){
    int n, i;
    double mul = 1.0, d;
    printf("Multiplication of how many numbers ?\n=> ");
    scanf("%lf", &n);
    for(i = 0; i < n; i++){
        printf("Enter #%d : ", i + 1);
        scanf("%lf", &d);
        mul *= d;
    }
    return mul;
}
double div() {
    double numerator, denominator, result;
    printf("Enter the numerator: ");
    scanf("%lf", &numerator);
    do {
        printf("Enter the non-zero denominator: ");
        scanf("%lf", &denominator);

        if (denominator == 0) {
            printf("Error: Denominator cannot be zero. Please try again.\n");
        }
    } while (denominator == 0);
    result = numerator / denominator;
    return result;
}
double expo(){
    double base, exp;
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exp);
    return pow(base, exp);
}
double sqroot(){
    double n;
    printf("Enter number : ");
    scanf("%lf", &n);
    return sqrt(n);
}
int rmnd(){
    int numerator, denominator, result;
    printf("Enter the numerator: ");
    scanf("%i", &numerator);
    do {
        printf("Enter the non-zero denominator: ");
        scanf("%i", &denominator);

        if (denominator == 0) {
            printf("Error: Denominator cannot be zero. Please try again.\n");
        }
    } while (denominator == 0);
    result = fmod(numerator, denominator);
    return result;
}
double main()
{
    printf("Available operations : \n[1]  Addition\n[2]  Subtraction\n[3]  Multiplication\n[4]  Division\n[5]  Exponentiation (Power)\n[6]  Square Root\n[7]  Modulus (Remainder)\n\n");
    int choice;
    printf("Enter your choice : ");
    scanf("%d", &choice);
    switch(choice){
        case 1 : printf("Result : %d", add());
        break;
        case 2 : printf("Result : %.2lf", subs());
        break;
        case 3 : printf("Result : %.2lf", multi());
        break;
        case 4 : printf("Result : %.2lf", div());
        break;
        case 5 : printf("Result : %.2lf", expo());
        break;
        case 6 : printf("Result : %.2lf", sqroot());
        break;
        case 7 : printf("Result : %i", rmnd());
        break;
        default : printf("\nInvalid option chosen!\nTry again.\n\n");
        main();
    }
}