
/////////////////////////////////////////////////////////////
// Create a file and write your name using "w"
// #include <stdio.h>
// int main()
// {
//     FILE *fp;                       // pointing to FILE
//     fp = fopen("my name.txt", "w"); // creating file if it is not exits with my name.txt

//     if (fp == NULL) // Checking for file that is NULL or NOT
//     {
//         printf("Error in Creating file!");
//         return 1;
//     }

//     // Writing Data in FILE
//     fprintf(fp, "My Name is Abdullah Hussian"); // Data write in fp
//     fclose(fp);                                 // Closing File after giving content

//     printf("Data Entered Successfully!");
//     return 0;
// }
/////////////////////////////////////////////////////////////

// Read and display file content using "r"
#include <stdio.h>
// int main()
// {
//     FILE *fp;                       // pointing to FILE
//     fp = fopen("my name.txt", "r"); //// creating file if it is not exits with my name.txt

//     int ch;

//     if (fp == NULL) // Checking for file that is NULL or NOT
//     {
//         printf("File not Found!");
//         return 1;
//     }

//     // Reading Data From File
//     while ((ch = fgetc(fp)) != EOF)
//     {
//         putchar(ch);
//     }

//     fclose(fp); // Closing File
//     return 0;
// }
///////////////////////////////////////////////////////////////

