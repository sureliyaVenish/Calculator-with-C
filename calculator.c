#include<stdio.h>
#include<conio.h>

void main(){
    
    char username[1];
    int calculationinput;
    int add01, add02;
    int sub01, sub02;
    int mul01, mul02;
    int div01, div02;

    printf("\nHey There!! Kindly share your name : ");
    gets(username);
    printf("\nHey ");
    puts(username);


    
    printf("\n\nWhat type of calculation you want to do??\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Quit\n");

    scanf("%d", &calculationinput);

    switch (calculationinput)
    {
    case 1:
        printf("Enter first number : ");
        scanf("%d", &add01);
        printf("Enter second number : ");
        scanf("%d", &add02);
        int a = add01 + add02;
        printf("%d + %d = %d", + add01, add02, a);
        break;

    case 2:
        printf("Enter first number : ");
        scanf("%d", &sub01);
        printf("Enter second number : ");
        scanf("%d", &sub02);
        int b = sub01 - sub02;
        printf("%d - %d = %d", + sub01, sub02, b);
        break;
    
    case 3:
        printf("Enter first number : ");
        scanf("%d", &mul01);
        printf("Enter second number : ");
        scanf("%d", &mul02);
        int c = mul01 * mul02;
        printf("%d * %d = %d", + mul01, mul02, c);
        break;

    case 4:
        printf("Enter first number : ");
        scanf("%d", &div01);
        printf("Enter second number : ");
        scanf("%d", &div02);
        int d = div01 / div02;
        printf("%d / %d = %d", + div01, div02, d);
        break;

    case 5:
        break;

    default:
        printf("Incorrect Input!!");
        break;
    }
    printf("\n\nCreated by Venish Sureliya");
    
}
