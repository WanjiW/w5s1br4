// Write a program in C to replace a specific line with another text in a file

#include <stdio.h>


FILE *filePointer;
char fileData[50];

// There are 3 constants used in the fseek() function for whence: SEEK_SET (start), SEEK_CUR(pointers position) and SEEK_END(end)
// int fseek(FILE *stream, long int offset, int whence)

int main () {

    // printf("Char size: %ld\n", sizeof(char)); //1 byte
    // printf("Char size: %ld\n", sizeof(" "));  //2 bytes
    printf("\n");

    filePointer = fopen("rm4.txt", "r+");

    if (filePointer != NULL){

        while (fgets(fileData, 50, filePointer) != NULL)
        {

            printf("%s", fileData);

        }
        printf("\n");
        
    } else {

        printf("File not opened!\n");
    }

    printf("\n");

    fseek(filePointer, 7, SEEK_SET); // look into determining the int whence //read set it to '2' from '0'
    printf("File pointer position: %ld\n", ftell(filePointer)); //checking where the file pointer is
 
    fputs("Newb X", filePointer); 

    fclose(filePointer); 

    printf("Changes have happened \n");
    printf("\n");


    filePointer = fopen("rm4.txt", "r");

    if (filePointer != NULL){

        while (fgets(fileData, 50, filePointer) != NULL)
        {

            printf("%s", fileData);

        }
        printf("\n");

    } else {

        printf("File not opened!\n");
    }


    return 0;

}



