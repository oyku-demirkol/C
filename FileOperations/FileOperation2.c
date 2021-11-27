#include <stdio.h>
#include <stdlib.h>
//C program to read name and marks of n number of students from
//and store them in a file. If the file previously exits,it will add the information to the file.
//if you run this code for example two times, it will do everything from where it finished, so it will just continue to write in the file
//your values that you entered in first time will not gone and it will include all the old and new values

int main()
{
    char name[50];
    int marks,i,num;

    printf("Enter number of students: ");
    scanf("%d", &num);

    FILE *fptr;
    fptr = (fopen("student.txt", "a")); ////its opening student.txt and allow to write in this file , a = append
    //Append to a text file. If it does not exist, then a new file is created.
    //Here your program will start appending content in the existing file content.
    if(fptr == NULL){
        printf("Error!"); //Error while opening file
        exit(1);
    }
    for( i = 0; i<num; ++i){ //to list the students name and marks
        printf("For student%d\nEnter name: ",i+1);
        scanf("%s", name);

        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(fptr , "\nName: %s \nMarks=%d \n", name, marks); //to print or continue to print names and marks in the file
    }

    fclose(fptr); //close the file
    return 0;
}
