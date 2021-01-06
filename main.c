#include "ft_printf.h"

// void ft_printn2(va_list ap)
// {
// 	printf("2 >>> %s\n", va_arg(ap, char *));
// }
// void ft_printn3(va_list ap)
// {
// 	printf("3 >>> %s\n", va_arg(ap, char *));
// }

// void ft_printn(char *type, ...)
// {
// 	va_list ap;
// 	va_start(ap, type);
// 	// while (*type)
// 	// {
// 	// 	printf("%s", va_arg(ap, char *));
// 	// 	type++;
// 	// }
// 	printf("%s\n",va_arg(ap, char *));
// 	ft_printn2(ap);
// 	ft_printn3(ap);
// }

int main()
{
	// ft_printn("ddd","ad","ag","sdgsdg");
	// ft_printn("ddd","ad","ag","sdgsdg");
	
	// %c
	printf("[%c]\n", 'a');
	printf("[%-c]\n", 'a');
	printf("[%c]\n", '\0');
	printf("[%5c]\n", '\0');
	printf("[%-5c]\n", '\0');
	printf("[%5c]\n", 'a');
	printf("[%-5c]\n", 'a');
	printf("[%*c]\n", 5, 'a');
	printf("[%*c]\n", -5, 'a');

	ft_printf("[%c]\n", 'a');
	ft_printf("[%-c]\n", 'a');
	ft_printf("[%c]\n", '\0');
	ft_printf("[%5c]\n", '\0');
	ft_printf("[%-5c]\n", '\0');
	ft_printf("[%5c]\n", 'a');
	ft_printf("[%-5c]\n", 'a');
	ft_printf("[%*c]\n", 5, 'a');
	ft_printf("[%*c]\n", -5, 'a');
	
	ft_printf("%.c\n", 'a');
	ft_printf("%.5c\n", 'a');
	ft_printf("%7.3c\n", 'a');
	ft_printf("%0c\n", 'a');
	// printf("%#c", 'a');
	// printf("% c", 'a');
	// printf("%+c", 'a');

	// %s
	// printf("[%s]\n", "abcde");
	// printf("[%s]\n", "");
	// // ft_printf("%s\n", NULL);
	// printf("[%-s]\n", "abcde");
	// printf("[%3s]\n", "abcde");
	// printf("[%-3s]\n", "abcde");
	// printf("[%7s]\n", "abcde");
	// printf("[%-7s]\n", "abcde");
	// printf("[%*s]\n", 7, "abcde");
	// printf("[%*s]\n", 0, "abcde");
	// printf("[%*s]\n", -7, "abcde");
	// printf("[%.0s]\n", "abcde");
	// printf("[%.s]\n", "abcde");
	// printf("[%.3s]\n", "abcde");
	// printf("[%.7s]\n", "abcde");
	// printf("[%3.7s]\n", "abcde");
	// printf("[%7.3s]\n", "abcde");
	// printf("[%7.9s]\n", "abcde");
	// // ft_printf("%7.3s\n", NULL);

	// printf("-----------------\n");

	// ft_printf("[%s]\n", "abcde");
	// ft_printf("[%s]\n", "");
	// ft_printf("[%s]\n", NULL);
	// ft_printf("[%-s]\n", "abcde");
	// ft_printf("[%3s]\n", "abcde");
	// ft_printf("[%-3s]\n", "abcde");
	// ft_printf("[%7s]\n", "abcde");
	// ft_printf("[%-7s]\n", "abcde");
	// ft_printf("[%*s]\n", 7, "abcde");
	// ft_printf("[%*s]\n", 0, "abcde");
	// ft_printf("[%*s]\n", -7, "abcde");
	// ft_printf("[%.0s]\n", "abcde");
	// ft_printf("[%.s]\n", "abcde");
	// ft_printf("[%.3s]\n", "abcde");
	// ft_printf("[%.7s]\n", "abcde");
	// ft_printf("[%3.7s]\n", "abcde");
	// ft_printf("[%7.3s]\n", "abcde");
	// ft_printf("[%7.9s]\n", "abcde");
	// ft_printf("[%7.3s]\n", NULL);

	// printf("%.-1s", "abcde");
	// printf("%.*s", -1, "abcde");
	// printf("%0s", "abcde");
	// printf("%#s", "abcde");
	// printf("% s", "abcde");
	// printf("%+s", "abcde");

	//%%
	// printf("[%%]");
	// printf("[%5%]");
	// printf("[%-5%]");
	// printf("[%-%]");
	// printf("[%*%]", 5);
	// printf("[%*%]", -5);
	// printf("[%.5%]");
	// printf("[%.-5%]");
	// printf("[%.*%]", -5);
	// printf("[%.%]");
	// printf("[%.0%]");
	// printf("[%05%]");
	// printf("[% %]");
	// printf("[% 05%]");
	// printf("[%-05%]");
	// printf("[%#5%]");
	// printf("[%+5%]");
}