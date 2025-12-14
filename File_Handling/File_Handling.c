// Opening of file for writing with "w"
// #include <stdio.h>
// int main()
// {
//     FILE *fp;
//     fp = fopen("data.txt", "w");

//     if (fp == NULL)
//     {
//         printf("Error Opening file!");
//         return 1;
//     }
//     printf("File opened successfully.");
//     fclose(fp);
//     return 0;
// }
///////////////////////////////
// Example of file writing "fwrite()"
// #include <stdio.h>
// int main()
// {
//     FILE *fp;
//     int number[5] = {1,2,3,4,5};
//     fp = fopen("number.bin", "wb");
//     if (fp == NULL)
//     {
//         printf("Error opening file!");
//         return 1;
//     }
//     fwrite(number, sizeof(int), 5, fp);
//     fclose(fp);
//     return 0;
// }
/////////////////////////////////////////
// example of "fread()"
// #include <stdio.h>
// int main()
// {
//     FILE* fp;
//     int numbers[5];

//     fp = fopen("number.bin", "rb");
//     if (fp == NULL)
//     {
//         printf("File not found");
//         return 1;
//     }

//     fread(numbers, sizeof(int), 5, fp);
//     fclose(fp);

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", numbers[i]);
//     }
//     return 0;
// }
/////////////////////////
// example of "fseek()"
// #include <stdio.h>
// int main()
// {
//     FILE *fp;
//     char ch;
//     fp = fopen("sample.txt", "r");
//     if (fp == NULL)
//     {
//         printf("File no found!");
//         return 1;
//     }
//     fseek(fp, 5, SEEK_SET);
//     ch = fgetc(fp);
//     printf("Character at position 5: %c\n", ch);
//     fclose(fp);
//     return 0;
// }
/////////////////////////////////////
// example of "fprintf()"
// #include <stdio.h>
// int main()
// {
//     FILE *fp;
//     fp = fopen("student.txt", "r");
//     if (fp == NULL)
//     {
//         printf("Error opening file!");
//         return 1;
//     }
//     int roll = 101234;
//     char name[] = "M Ali";
//     fprintf(fp, "Roll No: %d\nName: %s\n", roll, name);
//     fclose(fp);
//     return 0;
// }
/////////////////////////////////////////////
// Example of fwrite()
// #include <stdio.h>
// int main()
// {
//     FILE *fp;
//     fp = fopen("student.txt", "w");

//     if (fp == NULL)
//     {
//         printf("Error opening file!");
//         return 1;
//     }

//     fprintf(fp, "Hello! this is my first file!\n");
//     fprintf(fp, "file handling in c ia easy");
//     fclose(fp);
//     printf("Data written successfully!");
//     return 0;
// }
///////////////////////////////////////////////
// Example of "fread()" "r"
// #include <stdio.h>
// int main()
// {
//     FILE *fp;
//     char info[100];
//     fp = fopen("myfile.txt", "r");
//     if (fp == NULL)
//     {
//         printf("Error!");
//         return 1;
//     }

//     while (fgets(info, 100, fp))
//     {
//         printf("%s ", info);
//     }
//     fclose(fp);
//     return 0;
// }
////////////////////////////////////
// Append to a file
// #include <stdio.h>
// int main()
// {
//     FILE *fp;
//     fp = fopen("myfile.txt", "a");

//     if (fp == NULL)
//     {
//         printf("Error");
//         return 1;
//     }

//     fprintf(fp, "this line is added later\n");
//     fclose(fp);
//     return 0;
// }
//////////////////////////////////
// Word counting in a file
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     FILE *fp;
//     char ch;
//     int words = 0;
//     int inword = 0;

//     fp = fopen("myfile.txt", "r");

//     if (fp == NULL)
//     {
//         printf("Error!\n");
//         return 1;
//     }

//     while (ch = fgetc(fp) != EOF)
//     {
//         if (isspace(ch))
//         {
//             inword = 0;
//         }
//         else if (inword == 0)
//         {
//             inword = 1;
//             words++;
//         }
//     }
//     fclose(fp);
//     printf("Total words: %d\n", words);
//     return 0;
// }
////////////////////////////////////////////
// Copy One File to Another
// #include <stdio.h>
// int main()
// {
//     FILE *source = fopen("source.txt", "r");
//     FILE *destination = fopen("copy.txt", "w");

//     if (source == NULL || destination == NULL)
//     {
//         printf("Error!\n");
//         return 1;
//     }

//     char ch;

//     while ((ch = fgetc(source) != EOF))
//     {
//         fputc(ch, destination);
//     }
//     fclose(source);
//     fclose(destination);
//     printf("File Copied Successfully!");
//     return 0;
// }
///////////////////////////////////////
// Count Lines, Words, Characters
#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *fp;
    fp = fopen("myfile.txt", "r");
    if (!fp)
    {
        printf("Error!");
        return 1;
    }

    char ch;
    int lines = 0, words = 0, inword = 0, characters = 0;

    while ((ch = fgetc(fp) != EOF))
    {
        characters++;
        if (ch == '\n')

            lines++;

        if (isspace(ch))

            inword = 0;

        else if (inword == 0)
        {
            inword++;
            words++;
        }
    }
    fclose(fp);
    printf("Lines: %d\nWords: %d\nCharacters: %d\n", lines, words, characters);
}