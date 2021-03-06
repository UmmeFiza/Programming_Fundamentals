/*A function is a block of code that performs a specific task.
Dividing complex problem into small components makes program easy to understand and use.

There are two types of functions in C programming:
            1)Standard library functions
            2)User defined functions
1) Standard Library functions:
  The standard library functions are built-in functions in C programming to handle tasks such as mathematical computations, I/O processing, string handling etc.
  These functions are defined in the header file. When you include the header file, these functions are available for use. 
  Example:
        printf(),scanf(),fprintf(),getchar() etc. are defined under stdio.h header file.
        
2) User Defined functions:
   C allow programmers to define functions. Such functions created by the user are called user-defined functions.
 Syntax:
      #include <stdio.h>
          void functionName()
          {
              ... .. ...
              ... .. ...
          }

          int main()
          {
              ... .. ...
              ... .. ...

              functionName();

              ... .. ...
              ... .. ...
          }
 Defining a Function:
  The general form of a function definition in C programming language is as follows −

    return_type function_name( parameter list ) 
    {
              body of the function
    }
 Function Declarations:
   A function declaration tells the compiler about a function name and how to call the function.
   A function declaration has the following parts −

    return_type function_name( parameter list );
  
 Calling a Function:
    To call a function, you simply need to pass the required parameters along with the function name, 
    and if the function returns a value, then you can store the returned value
 */
 
 Sample program:
 
 #include <stdio.h>
 int max(int num1, int num2);   // function declaration
 int main () {
  /* local variable definition */
   int a = 100;
   int b = 200;
   int ret;
    ret = max(a, b);   //calling a function to get max value
   printf( "Max value is : %d\n", ret );
   return 0;
}
 
/* function returning the max between two numbers */
int max(int num1, int num2) {           /*  Function Defination */

   /* local variable declaration */
   iznt result;
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}
