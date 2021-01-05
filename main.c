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
	ft_printf(">> [%-4c]\n",'c');
	ft_printf(">> [%-c]\n",'c');
	ft_printf(">> [%-*c]\n",-3,'c');
	ft_printf(">> [%5c]\n",'c');
	ft_printf(">> [%*c]\n",0,'c');
}