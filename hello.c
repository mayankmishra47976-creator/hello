
#include <stdio.h>
#include <stdlib.h>

// Function declarations
void displayWelcome(void);
void displayMenu(void);
int addNumbers(int a, int b);
int multiplyNumbers(int a, int b);
void clearInputBuffer(void);

int main(void)
{
    int choice;
    int num1, num2;
    int result;

    displayWelcome();

    while (1)
    {
        displayMenu();

        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("\nInvalid input! Please enter a number.\n");
            clearInputBuffer();
            continue;
        }

        if (choice == 0)
        {
            printf("\nThank you for using the program!\n");
            break;
        }

        if (choice < 1 || choice > 3)
        {
            printf("\nInvalid choice. Please try again.\n");
            continue;
        }

        printf("Enter the first number: ");
        if (scanf("%d", &num1) != 1)
        {
            printf("Invalid number entered.\n");
            clearInputBuffer();
            continue;
        }

        printf("Enter the second number: ");
        if (scanf("%d", &num2) != 1)
        {
            printf("Invalid number entered.\n");
            clearInputBuffer();
            continue;
        }

        switch (choice)
        {
            case 1:
                result = addNumbers(num1, num2);
                printf("\nResult: %d + %d = %d\n",
                       num1, num2, result);
                break;

            case 2:
                result = multiplyNumbers(num1, num2);
                printf("\nResult: %d * %d = %d\n",
                       num1, num2, result);
                break;

            case 3:
                printf("\nFirst number: %d\n", num1);
                printf("Second number: %d\n", num2);
                break;
        }

        printf("\n-----------------------------\n");
    }

    return 0;
}

// Display the welcome message
void displayWelcome(void)
{
    printf("================================\n");
    printf("      C PROGRAMMING PROJECT     \n");
    printf("================================\n");
    printf("Welcome! This is a C boilerplate.\n\n");
}

// Display available options
void displayMenu(void)
{
    printf("\n========== MAIN MENU ==========\n");
    printf("1. Add two numbers\n");
    printf("2. Multiply two numbers\n");
    printf("3. Display two numbers\n");
    printf("0. Exit\n");
    printf("================================\n");
}

// Return the sum of two integers
int addNumbers(int a, int b)
{
    return a + b;
}

// Return the product of two integers
int multiplyNumbers(int a, int b)
{
    return a * b;
}

// Remove invalid input remaining in stdin
void clearInputBuffer(void)
{
    int ch;

    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        // Discard characters
    }
}
