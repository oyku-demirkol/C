#include <stdio.h>
#include<stdlib.h>
//C program to write all the members of an array of structures to a file using fwrite().
//Read the array from the file and display on the screen.
struct student
{
   char name[50];
   char height[50];
};
int main(){ //struct = Define non-existent data structure and variables separately
    struct student stud1[5], stud2[5];
    FILE *fptr;
    int i;

    fptr = fopen("file.txt","w");
    //w = Open for writing
    //If the file exists, its contents are overwritten. If the file does not exist, it will be created

    for(i = 0; i < 5; ++i)

    {
        fflush(stdin);
         //The function fflush(stdin) is used to flush the output buffer of the stream.
        //It returns zero, if successful otherwise, returns EOF and feof error indicator is set.

        printf("Enter name: ");

        fgets(stud1[i].name,100,stdin);

        printf("Enter height: ");

        fgets(stud1[i].height,100,stdin);

    }

    rewind(fptr); //the rewind function sets the file position to the beginning of the file for the stream pointed to by stream.
    //It also clears the error and end-of-file indicators for stream.

    for(i = 0; i < 5; ++i)

    {

    fprintf(fptr,"%s%s",stud1[i].name, stud1[i].height);

    }

    fclose(fptr); //close the file

    fptr = fopen("file.txt", "r+"); //r+ = Open for reading and continue to writting

    rewind(fptr);

    fread(stud2, 1, sizeof(stud1), fptr); //fread(void *ptr, size_t size, size_t count, FILE *stream);

    for(i = 0; i < 5; ++i)
    {
        //fprintf(fptr,"%s %s ",stud2[i].name, stud2[i].height);

        fscanf(fptr, "%s", stud2);

    }

    fclose(fptr);  //close the file

    for(int o = 0 ;o<5; o++){

        fprintf(stdout,"%s",stud2[o]);


    }
}











