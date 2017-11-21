/*Looping statement are the statements that execute one or more statement repeatedly several number of times
There are 3 types of loop control statements in C language. They are,

1)for
2)while
3)do-while

1)for - Loop 
Syntax:
      for (exp1; exp2; expr3)
      { 
          statements;
       }
Where,
exp1 – variable initialization - ( Example: i=0, j=2, k=3 )
exp2 – condition checking - ( Example: i>5, j<3, k=3 )
exp3 – increment/decrement - ( Example: ++i, j–, ++k )
*/

Sample program:
#include <stdio.h>
 
int main()
{
  int i;
 
  for(i=0;i<10;i++)
  {
      printf("%d ",i);
  }    
 return 0;
}
Output:
0 1 2 3 4 5 6 7 8 9

/*
2)while - Loop
Syntax:
       while (condition)
       { 
          statements;
        }
   where, 
   condition might be a>5, i<10
*/
Sample program:
#include <stdio.h>
 
int main()
{
  int i=3;
 
  while(i<10)
  {
     printf("%d\n",i);
     i++;
  }    
 
}
Output:
3 4 5 6 7 8 9

/*
3)do-While - Loop
Syntax:
      do { 
          statements;
      }while (condition);

where,
condition might be a>5, i<10
*/
Sample program:
#include <stdio.h>
 
int main()
{
  int i=1;
 
  do
  {  
      printf("Value of i is %d\n",i);
      i++;
  }while(i<=4 && i>=2);    
 
}
Output:
Value of i is 1
Value of i is 2
Value of i is 3
Value of i is 4
