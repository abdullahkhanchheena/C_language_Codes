//////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100];
//     printf("Enter string:");
//     scanf("%s", str);
//     puts(str);
//     return 0;
// }
// /////string compression /////////////////////////////////////////////////
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100];
//     printf("Enter String:");
//     scanf("%s", str);

//     for (int i = 0; str[i] !='\0'; )
//     {
//         char c = str[i];
//         int count = 0;
//         while (str[i] == c)
//         {
//             count++;
//             i++;
//         }
//         printf("%c-> %d\n", c, count);
//     }
//     return 0;
// }
// //////////////////////////////////////////////////////
// // unique characters in string
// #include <stdio.h>
// int main()
// {
//     char str[100];
//     char unique[100];
//     int index = 0;
//     printf("Enter String:");
//     scanf("%s", str);
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         int count = 0;
//         for (int j = 0; str[j] != '\0'; j++)
//         {
//             if (str[i] == str[j])
//             {
//                 count++;
//             }
//         }
//         if (count == 1)
//         {
//             unique[index++] = str[i];
//         }
//     }
//     unique[index] = '\0';
//     printf("Unique Characters in string: %s\n", unique);
//     return 0;
// }
// ////////////////////////////////////////////////////////////////////////////////////
// //work counter in string
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char name[100];

//     printf("Enter a Sentence: ");
//     fgets(name, 100, stdin);
//     int inword = 0;
//     int words = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         if (name[i] != ' ' && name[i] != '\n' && inword == 0)
//         {
//             inword = 1;
//             words++;
//         }
//         else if (name[i] == ' ' || name[i] == '\n')
//         {
//             inword = 0;
//         }
//     }
//     printf("%d", words);
//     return 0;
// }
////////////////////////////////////////////
// name taking
// #include <stdio.h>
// int main()
// {
//     char name[50];
//     printf("Enter Name:\n");
//     fgets(name, sizeof(name), stdin);
//     printf("Your Name is: %s\n", name);
//     return 0;
// }