#include <stdio.h>

void selectMenu(int menu, int num1, int num2);
void plus(int num1, int num2);
void minus(int num1, int num2);
void multiply(int num1, int num2);
void divide(int num1, int num2);

int main()
{
    int menu = 0;
    int num1 = 0;
    int num2 = 0;
    
    printf("*** menu *** \n");
    printf("1. + \n");
    printf("2. - \n");
    printf("3. * \n");
    printf("4. / \n");
    
    printf("Choose number of calculate : ");
    scanf("%d", &menu);
    
    printf("Enter number1: ");
    scanf("%d", &num1);
    printf("Enter number2: ");
    scanf("%d", &num2);
    
    selectMenu(menu, num1, num2);

    return 0;
}

void selectMenu(int menu, int num1, int num2) {
    if (menu == 1) {
        plus(num1, num2);
    } else if (menu == 2) {
        minus(num1, num2);
    } else if (menu == 3) {
        multiply(num1, num2);
    } else if (menu == 4) {
        divide(num1, num2);
    }
}

void plus(int num1, int num2) {
    printf("Result of plus is: %d \n", (num1 + num2));
}

void minus(int num1, int num2) {
    printf("Result of minus is: %d \n", (num1 - num2));
}

void multiply(int num1, int num2) {
    printf("Result of multiply is: %d \n", (num1 * num2));
}

void divide(int num1, int num2) {
    printf("Result of divide is: %d \n", (num1 / num2));
}
