#include "ft_printf.h"
#include <stdio.h>

// int printf_new(char *pszFormatString, ...);
// int printf_manual(char *pszFormatString, ...);

int  main(int argc, char *argv[])
{
	int i;
	int ft_i;
	// printf("\nprintf:\n");
    // printf("%s",argv[0]);
	// printf("\nHello\n");
	// printf("Test String %s with integer %i and %% test\n", argv[0], argc);
    // printf("My name is %s, and I have %i yo.\n", "gamZs", 22);

	// printf("\n***********************************\n");

    // printf("\nft_printf:\n");
    // ft_printf("Hello\n", "test");

	// i = printf("afg%d\n", 5);
	// printf("return printf: |%d|\n", i);
	// printf ("Characters: %c %c \n", 'a', 65);
	// printf ("Decimals: %d %ld\n", 1977, 650000L);
	// printf ("Preceding with blanks: %10d \n", 1977);
	// printf ("Preceding with zeros: |%4d| \n", 1977);
	// printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100,100);
	// printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
	//printf ("Width trick: |%*d| and |%4d| \n", 4, 100, 100);

	i = printf ("chr: |%*c| e |%-*c| e |%-*c|\n", 5,'a', 5, 'a',-5, 'a');
	printf("return printf: |%d|\n", i);
	printf("\n***********************************\n");

	ft_i = ft_printf ("chr: |%*c| e |%-*c| e |%-*c|\n", 5,'a', 5, 'a',-5, 'a');
	ft_printf("afg |%-*c| tese\n", 5, 'g');
	printf("return ft_printf: |%d|\n", ft_i);
   
}

// int  printf_new(char *pszFormatString, ...)
// {
//    int CharacterCount = 0;
//    int PrintInteger;
//    char *IntegerString;
//    char *pPrintString;
//    va_list VaList;

//    va_start(VaList, pszFormatString);
   
//    while(*pszFormatString)
//    {
//        if(*pszFormatString == '%')
//        {
//            pszFormatString++;
//            switch(*pszFormatString)
//            {
//               case 's': 
//                       pPrintString = va_arg(VaList, char *);
//                       fputs(pPrintString, stdout);
//                       pszFormatString++;
//                       CharacterCount += strlen(pPrintString);
//                       break;
//               case 'i':  
//                       PrintInteger = va_arg(VaList, int);
//                       IntegerString = ft_itoa(PrintInteger);
//                       fputs(IntegerString, stdout);
//                       pszFormatString++;
//                       CharacterCount += strlen(IntegerString);
//                       break;
//               case '%': 
//                       putchar('%');
//                       pszFormatString++;
//                       CharacterCount++;
//                       break;
//               case '\0': 
//                       break;
//               default:
//                       putchar('%');
//                       putchar(*pszFormatString);
//                       pszFormatString++;            
//                       CharacterCount +=2;
//            }       
//        }
//        else
//        {
//            putchar(*pszFormatString);
//            pszFormatString++;
//            CharacterCount++;
//        }
//    }

//    va_end(VaList);

//    return CharacterCount;
// }
