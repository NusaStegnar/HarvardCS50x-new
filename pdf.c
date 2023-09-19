//create a program, that checks whether a file, passes in as a command-line argument, is a PDF. 
//All PDFs will begin with a four byte sequence, corresponding to these integers:
// 37 80 68 70


#include <stdio.h>
#include <stdint.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 2)                      //zakaj != 2: potem ko testiras in vpises v terminal ./pdf test_jpeg.jpeg je namrec 1 prvi argument ./pdf, 2 pa test_jpeg
    {
        printf("Improper usage.\n");
        return 1;
    }

//Open file
string filename = argv[1];   //zakaj [1], ker je ./pdf shranjen pod [0], test_jpeg.jpeg pa pod [1]
FILE *file = fopen(filename, "r");

//Check if file exists
if (file == NULL)
    {
        printf("CNo such file found.\n");
        return 1;
    }

    uint8_t buffer[4];
    uint8_t signature[] = {37, 80, 68, 70};

    fread(buffer, 1, 4, file);
    fclose(file);

    //Does the buffer signature match?
    for (int i = 0; i < 4; i++)
    {
        if (buffer[i] != signature[i])
        {
            printf("Likely not a PDF");
            fclose(file);
            return 0;
        }
        
    }
    printf("Likely a PDF!\n");
    fclose(file);
    return 0;
}


//za test: ./pdf test_pdf.pdf in se: ./pdf test_jpeg.jpeg