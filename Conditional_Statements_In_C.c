/*IF statement
If the test expression is evaluated to true (nonzero), statements inside the body of if is executed otherwise it is skipped.
Syntax:
if (testExpression)   //The if statement evaluates the test expression inside the parenthesis.
{
   // statements  
}
*/

Sample Program for IF statement:
// Program to display a number if user enters negative number
// If user enters positive number, that number won't be displayed

#include <stdio.h>
int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Test expression is true if number is less than 0
    if (number < 0)
    {
        printf("You entered %d.\n", number);
    }

    printf("The if statement is easy.");

    return 0;
}
/*Output:
Enter an integer: -2
You entered -2.
The if statement is easy.

/* IF...ELSE statement
The if...else statement executes some code if the test expression is true (nonzero) and some other code if the test expression is false (0).

Syntax of if...else
if (testExpression) {
    // codes inside the body of if
}
else {
    // codes inside the body of else
}
*/
Sample Program for IF...ELSE statement:
// Program to check whether an integer entered by the user is odd or even

#include <stdio.h>
int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d",&number);

    // True if remainder is 0
    if( number%2 == 0 )
        printf("%d is an even integer.",number);
    else
        printf("%d is an odd integer.",number);
    return 0;
}
/*Output:

Enter an integer: 7
7 is an odd integer.*/

/*Nested if...else statement (if...elseif....else Statement)
The nested if...else statement allows you to check for multiple test expressions and execute different codes for more than two conditions.

Syntax of nested if...else statement.
if (testExpression1) 
{
   // statements to be executed if testExpression1 is true
}
else if(testExpression2) 
{
   // statements to be executed if testExpression1 is false and testExpression2 is true
}
else if (testExpression 3) 
{
   // statements to be executed if testExpression1 and testExpression2 is false and testExpression3 is true
}
.
.
else 
{
   // statements to be executed if all test expressions are false
}

*/
Sample Program for Nested IF...Else statement:
// Program to relate two integers using =, > or <

#include <stdio.h>
int main()
{
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    //checks if two integers are equal.
    if(number1 == number2)
    {
        printf("Result: %d = %d",number1,number2);
    }

    //checks if number1 is greater than number2.
    else if (number1 > number2)
    {
        printf("Result: %d > %d", number1, number2);
    }

    // if both test expression is false
    else
    {
        printf("Result: %d < %d",number1, number2);
    }

    return 0;
}
/*Output:
Enter two integers: 12
23
Result: 12 < 23*/
