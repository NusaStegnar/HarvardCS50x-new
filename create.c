//Debug a program, that creates the file given as input at the command-line.
//For example: ./create test.c will create a file test.c.
//But our code has errors! Can you find and fix them?
//Use valgrind ./create test.c

#include <stdio.h>
#include <sdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

    //Check for improper usage, otherwise, het filename length
    if (argc!= 2)
    {
        printf("Wrong usage: Try ./create filename\n");
        return 1;
    }
    int filename_length = strlen(argv[1]);

    //Create a new block of memory to store filename
    char *filename = malloc(sizeof(char) * (filename_length + 1));

    //Copy argv[1] into block of memory for filename
    sprintf(filename, "%s", argv[1]);

    //Open new file under the name stored at filename

    FILE *new_file = fopen(filename, "w");
    if (new_file == NULL)
    {
        printf("could not create file.\n");
        return 1;
    }

    fclose(new_file);
    free(filename);
}

