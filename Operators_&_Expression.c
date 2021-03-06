/*C language offers many types of operators. They are,
Arithmetic operators (+,-,*,/,%)
Assignment operators (=)
Relational operators (==,!=, >,>=,<,<=)
Logical operators (&&,||,!)
Bit wise operators
Conditional operators (ternary operators)
Increment/decrement operators(++,--)
Special operators

Sample program for demonstrating Relational operator.*/
Source code:

#include <stdio.h> 
int main()
{
    int a=10, b=4;
 
    // relational operators
    // greater than example
    if (a > b)
        printf("a is greater than b\n");
    else printf("a is less than or equal to b\n");
 
    // greater than equal to
    if (a >= b)
        printf("a is greater than or equal to b\n");
    else printf("a is lesser than b\n");
 
    // less than example
    if (a < b)
        printf("a is less than b\n");
    else printf("a is greater than or equal to b\n");
 
    // lesser than equal to
    if (a <= b)
        printf("a is lesser than or equal to b\n");
    else printf("a is greater than b\n");
 
    // equal to
    if (a == b)
        printf("a is equal to b\n");
    else printf("a and b are not equal\n");
 
    // not equal to
    if (a != b)
        printf("a is not equal to b\n");
    else printf("a is equal b\n");
 
    return 0;
}
/*Output:
a is greater than b
a is greater than or equal to b
a is greater than or equal to b
a is greater than b
a and b are not equal*/
a is not equal to b
