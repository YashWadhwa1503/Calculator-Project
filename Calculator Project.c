#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
    char input_str[10]="";
    char target_string[] = "ok";
    printf("Welcome! This is a simple calculator that will aid you in simple arithmetic.\nTo continue, please type ok.\n");
    scanf("%9s", input_str);
    int compare = strcmp(input_str, target_string);
    if (compare == 0) 
    {
        printf("Great! Let's get started. To choose your operation, please type multiply, divide, add, or subtract. Please note that if you choose to subtract or divide, order matters!\n");

    } 
    else 
    {
        printf("Nooooo! You're missing out! Math is amazing!\n");
        return 0;
    }
    

    char a[100] = "";
    int first_choice;
    int second_choice;

    printf("Choose Mathematical Operation: ");
    scanf("%99s", a);
    if (strcmp(a, "multiply")==0) 
    {
        printf("You chose multiplication.");
    } 
    else if (strcmp(a, "add")==0) 
    {
        printf("You chose addition.");
    }
    else if (strcmp(a, "divide")==0) 
    {
        printf("You chose division");
    }
    else if (strcmp(a, "subtract")==0) 
    {
        printf("You chose subtraction.");
    } 
    else 
    {
        printf("Sorry! That's not a valid math operation :)");
        return 0;
    }

    
    printf("\nGreat! Now choose your first number: ");
    if (scanf("%d", &first_choice)!=1) 
    {
        printf("Invalid input! Please enter an integer:\n");
        return 1;
    }

    printf("\nGreat! Now choose your second number: ");
    if (scanf("%d", &second_choice)!=1) 
    {
        return 1;
    }

    if (strcmp(a, "multiply")==0) 
    {
        printf("Result: %d*%d=%d", first_choice, second_choice, first_choice * second_choice);
    }  
    else if (strcmp(a, "divide")==0 && second_choice==0) 
    {
        printf("Result: Divide by 0 error");
        return 0;

    }
    else if (strcmp(a, "divide")==0) 
    {
        printf("Result: %d/%d=%d", first_choice, second_choice, first_choice / second_choice);
    } 
    else if (strcmp(a, "add")==0) 
    {
        printf("Result: %d+%d=%d", first_choice, second_choice, first_choice + second_choice);
    } 
    else if (strcmp(a, "subtract")==0) 
    {
        printf("Result: %d-%d=%d", first_choice, second_choice, first_choice - second_choice);
    } 
    else 
    {
        return 0;
    }
}