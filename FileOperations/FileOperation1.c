#include <stdio.h>
#include <stdlib.h>

//1. C program to read name and marks of n number of students and store them in a file.
//if you run this code for example two times , it will do everything from beginning, so your values that you entered in first time will gone
//and it will include just the new values

int main()
{
   char name[50];
   int marks,i,num;

   printf("Enter a number of students: ");
   scanf("%d", &num);

   FILE *fptr;
   fptr = (fopen("student.txt","w")); //its opening student.txt and allow to write in this file , w= write

   if(fptr == NULL){
    printf("Error!"); //Error while opening file
    exit(1);
   }

   for(i=0; i<num; ++i){ //to list the students name and marks
    printf("For student%d\n Enter name:", i+1);
    scanf("%s",name);

    printf("Enter marks:");
    scanf("%d", &marks);

    fprintf(fptr, "\nName: %s \nMarks=%d \n", name, marks); //to print name and marks in the file
   }

   fclose(fptr); //close the file
    return 0;
}
