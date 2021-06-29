#include <stdarg.h>
#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int printf_new(char *pszFormatString, ...);
int printf_manual(char *pszFormatString, ...);

int  main(int argc, char *argv[])
{
	printf("\nprintf:\n");
        printf("%s",argv[0]);
	printf("\nHello\n");
	printf("Test String %s with integer %i and %% test\n", argv[0], argc);
        printf("My name is %s, and I have %i yo.\n", "gamZs", 22);

	printf_new("\n***********************************\n");

	printf("\nprintf_new:\n");
	printf_new(argv[0]); //its not equal
	printf_new("\nHello\n");
	printf_new("Test String %s with integer %i and %% test\n", argv[0], argc);
        printf_new("My name is %s, and I have %i yo.\n", "gamZs", 22);
	printf_new("\n***********************************\n");
   
   return 0;
}

int  printf_new(char *pszFormatString, ...)
{
   int CharacterCount = 0;
   int PrintInteger;
   char *IntegerString;
   char *pPrintString;
   va_list VaList;

   va_start(VaList, pszFormatString);
   
   while(*pszFormatString)
   {
       if(*pszFormatString == '%')
       {
           pszFormatString++;
           switch(*pszFormatString)
           {
              case 's': 
                      pPrintString = va_arg(VaList, char *);
                      fputs(pPrintString, stdout);
                      pszFormatString++;
                      CharacterCount += strlen(pPrintString);
                      break;
              case 'i':  
                      PrintInteger = va_arg(VaList, int);
                      IntegerString = ft_itoa(PrintInteger);
                      fputs(IntegerString, stdout);
                      pszFormatString++;
                      CharacterCount += strlen(IntegerString);
                      break;
              case '%': 
                      putchar('%');
                      pszFormatString++;
                      CharacterCount++;
                      break;
              case '\0': 
                      break;
              default:
                      putchar('%');
                      putchar(*pszFormatString);
                      pszFormatString++;            
                      CharacterCount +=2;
           }       
       }
       else
       {
           putchar(*pszFormatString);
           pszFormatString++;
           CharacterCount++;
       }
   }

   va_end(VaList);

   return CharacterCount;
}

// #include <stdio.h>
// #include <stdlib.h>

// int main ()
// {
//   int i;
//   char buffer [33];
//   printf ("Enter a number: ");
//   scanf ("%d",&i);
//   itoa (i,buffer,10);
//   printf ("decimal: %s\n",buffer);
//   itoa (i,buffer,16);
//   printf ("hexadecimal: %s\n",buffer);
//   itoa (i,buffer,2);
//   printf ("binary: %s\n",buffer);
//   return 0;
// }