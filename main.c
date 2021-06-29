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

	i = printf("afg%d\n", 5);
	printf("return printf: %d\n", i);

	ft_i = ft_printf("afg%d\n", 5);
	printf("return ft_printf: %d\n", ft_i);
   
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
