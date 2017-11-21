/*A file represents a sequence of bytes on the disk where a group of related data is stored. File is created for permanent storage of data. 
It is a ready made structure.

In C language, we use a structure pointer of file type to declare a file.
          FILE *fp;
          
Functions that helps to perform basic file operations. Following are the functions,
        Function	        description
        fopen()	          create a new file or open a existing file
        fclose()	        closes a file
        getc()	          reads a character from a file
        putc()	          writes a character to a file
        fscanf()	        reads a set of data from a file
        fprintf()	        writes a set of data to a file
        getw()	          reads a integer from a file
        putw()	          writes a integer to a file
        fseek()	          set the position to desire point
        ftell()	          gives current position in the file
        rewind()	        set the position to the begining point
        
Opening a File or Creating a File
      The fopen() function is used to create a new file or to open an existing file.
      General Syntax :
                *fp = FILE *fopen(const char *filename, const char *mode);
                
           where, filename is the name of the file to be opened 
                  mode specifies the purpose of opening the file.
      Mode can be of following types,
      mode	      description
        r	    opens a text file in reading mode
        w	    opens or create a text file in writing mode.
        a	    opens a text file in append mode
        r+	  opens a text file in both reading and writing mode-New data is written at the beginning overwriting existing data
        w+	  opens a text file in both reading and writing mode-Over write on Existing
        a+	  opens a text file in both reading and writing mode-New data is appended at the end of file	
        rb	  opens a binary file in reading mode
        wb	  opens or create a binary file in writing mode
        ab	  opens a binary file in append mode
        rb+ 	opens a binary file in both reading and writing mode
        wb+ 	opens a binary file in both reading and writing mode
        ab+	  opens a binary file in both reading and writing mode
        
Closing a File
      The fclose() function is used to close an already opened file.
      General Syntax :
                int fclose( FILE *fp );
            Here fclose() function closes the file and returns zero on success, or EOF if there is an error in closing the file.
 */    
Sample program:

#include<stdio.h>
#include<conio.h>
main()
{
 FILE *fp;
 char ch;
 fp = fopen("one.txt", "w");    //open file one.txt in write mode
 printf("Enter data");
 while( (ch = getchar()) != EOF) {    
    putc(ch,fp);                
 }
 fclose(fp);
 fp = fopen("one.txt", "r");
 
 while( (ch = getc(fp)! = EOF)
    printf("%c",ch);
    
 fclose(fp);
}
