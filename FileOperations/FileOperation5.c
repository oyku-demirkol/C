/* Open, Read and close a file: Reading char by char */

# include <stdio.h>
int main( )
{
   FILE *fp ;
   char c ;
   char data[50];
    fp = fopen("test.txt","w");
    printf("\nEnter some text from keyboard" \
           "to write in this file test.txt:");
    while(strlen(gets(data)) > 0){
        //writing in the file
        fputs(data,fp);
        fputs("\n",fp);

    }
   fclose(fp);
   printf( "Opening the file test.txt in read mode \n" ) ;
   fp = fopen ( "test.txt", "r" ) ; // opening an existing file
   if ( fp == NULL )
   {
     printf ( "Could not open file test.txt \n" ) ;
     return 1;
   }
   printf( "Reading the file test.txt \n" ) ;
   while ( 1==1 )
   {
     c = fgetc ( fp ) ; // reading the file
     if ( c == EOF ) //EOF = end of file
     break ;
     /* When a break statement is encountered inside a loop,
     the loop is Immediately terminated and the program control resumes at the next Statement following the loop.
     It can be used to terminate a case in the switch statement . */
     printf ( "%c", c ) ;
   }
   printf("Closing the file test.txt") ;
   fclose ( fp ) ; // Closing the file
   return 0;
}
