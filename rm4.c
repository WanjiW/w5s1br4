/ Write a program in C to replace a specific line with another text in a file

#include <stdio.h>


FILE *filePointer;
char fileData[50];

// There are 3 constants used in the fseek() function for whence: SEEK_SET (start), SEEK_CUR(pointers position) and SEEK_END(end)
// int fseek(FILE *stream, long int offset, int whence)

int main () {

    filePointer = fopen("rm4b.txt", "r");

    while (fgets(fileData, 50, filePointer) != NULL){

        printf("%s", fileData);

    }
 
    fseek( filePointer, 12, SEEK_END);  
    fputs("changed line!", filePointer);  

    printf("Changes have happened \n");

    while (fgets(fileData, 50, filePointer) != NULL){

        printf("%s", fileData);

    }

    fclose(filePointer);


    return 0;

}



