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
	// %c
	// printf("[%c]\n", 'a');
	// printf("[%-c]\n", 'a');
	// printf("[%c]\n", '\0');
	// printf("[%5c]\n", '\0');
	// printf("[%-5c]\n", '\0');
	// printf("[%5c]\n", 'a');
	// printf("[%-5c]\n", 'a');
	// printf("[%*c]\n", 5, 'a');
	// printf("[%*c]\n", -5, 'a');

	// ft_printf("[%c]\n", 'a');
	// ft_printf("[%-c]\n", 'a');
	// ft_printf("[%c]\n", '\0');
	// ft_printf("[%5c]\n", '\0');
	// ft_printf("[%-5c]\n", '\0');
	// ft_printf("[%5c]\n", 'a');
	// ft_printf("[%-5c]\n", 'a');
	// ft_printf("[%*c]\n", 5, 'a');
	// ft_printf("[%*c]\n", -5, 'a');
	
	// printf("%.c\n", 'a');
	// printf("%.5c\n", 'a');
	// printf("%7.3c\n", 'a');
	// printf("%0c\n", 'a');
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
	// ft_printf("[%-10.8s]\n", NULL);
	// ft_printf("[%-3.s]\n", NULL);
	// printf("[%7.3s]\n", "yolo");
	// printf("[%7.9s]\n", "yolo");
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

	// %d
	// printf("[%d]\n", 12345);
	// printf("[%d]\n", -12345);
	// printf("[%3d]\n", 12345);
	// printf("[%7d]\n", 12345);
	// printf("[%-7d]\n", 12345);
	// printf("[%-d]\n", 12345);
	// printf("[%*d]\n", 7, 12345);
	// printf("[%*d]\n", -7, 12345);
	// printf("[%.d]\n", 12345);
	// printf("[%.0d]\n", 12345);
	// printf("[%.3d]\n", 12345);
	// printf("[%.7d]\n", 12345);
	// printf("[%-.7d]\n", 12345);
	// printf("[%-9.7d]\n", 12345);
	// printf("[%9.7d]\n", 12345);
	// printf("[%-7.9d]\n", 12345);
	// printf("[%-3.7d]\n", 12345);
	// printf("[%-7.3d]\n", 12345);  
	// printf("[%.3d]\n", -12345);
	// printf("[%.7d]\n", -12345);
	// printf("[%-.7d]\n", -12345);
	// printf("[%-9.7d]\n", -12345);
	// printf("[%-7.9d]\n", -12345);
	// printf("[%-3.7d]\n", -12345);
	// printf("[%-7.3d]\n", -12345);
	// printf("[%0d]\n", 12345);
	// printf("[%07d]\n", 12345);
	// printf("[%d]\n", 0);
	// printf("[%3d]\n", 0);
	// printf("[%3.d]\n", 0);
	// printf("[%03d]\n", 0);
	// printf("[%09.0d]\n", 12345);
	// printf("[%09.7d]\n", 12345);
	// printf("[%07.9d]\n", 12345);
	// printf("[%.d]\n", 0);
	// printf("[%.3d]\n", 0);
	// printf("[% d]\n", 12345);
	// printf("[% d]\n", -12345);
	// printf("[% -d]\n", 12345);
	// printf("[% 3d]\n", 12345);
	// printf("[% 7d]\n", 12345);
	// printf("[%+d]\n", 12345);
	// printf("[%+d]\n", -12345);
	// printf("[%+-d]\n", 12345);
	// printf("[%+-9d]\n", 12345);
	// printf("[%+9d]\n", 12345);
	// printf("[%+09d]\n", 12345);
	// printf("[%+09d]\n", -12345);
	// // printf("[%-+09d]\n", 12345);//warning : flag '0' is ignored when flag '-' is present
	// // printf("[%+ 09d]\n", 12345);//warning : flag ' ' is ignored when flag '+' is present
	// printf("[%+9.7d]\n", 12345);
	// // printf("[%+09.7d]\n", 12345);
	// printf("[%+7.9d]\n", 12345);
	// // printf("[%+07.9d]\n", 12345);
	// printf("[%+9.7d]\n", -12345);
	// // printf("[%+09.7d]\n", -12345);
	// printf("[%+7.9d]\n", -12345);
	// // printf("[%+07.9d]\n", -12345);
	// // printf("[%#d]\n", 0);//ndefined behavior warning: flag '#' with 'd'
	
	// printf("\n===============================\n");
	// ft_printf("[%d]\n", 12345);
	// ft_printf("[%d]\n", -12345);
	// ft_printf("[%3d]\n", 12345);
	// ft_printf("[%7d]\n", 12345);
	// ft_printf("[%-7d]\n", 12345);
	// ft_printf("[%-d]\n", 12345);
	// ft_printf("[%*d]\n", 7, 12345);
	// ft_printf("[%*d]\n", -7, 12345);
	// ft_printf("[%.d]\n", 12345);
	// ft_printf("[%.0d]\n", 12345);
	// ft_printf("[%.3d]\n", 12345);
	// ft_printf("[%.7d]\n", 12345);
	// ft_printf("[%-.7d]\n", 12345);
	// ft_printf("[%-9.7d]\n", 12345);
	// ft_printf("[%9.7d]\n", 12345);
	// ft_printf("[%-7.9d]\n", 12345);
	// ft_printf("[%-3.7d]\n", 12345);
	// ft_printf("[%-7.3d]\n", 12345);
	// ft_printf("[%.3d]\n", -12345);
	// ft_printf("[%.7d]\n", -12345);
	// ft_printf("[%-.7d]\n", -12345);
	// ft_printf("[%-9.7d]\n", -12345);
	// ft_printf("[%-7.9d]\n", -12345);
	// ft_printf("[%-3.7d]\n", -12345);
	// ft_printf("[%-7.3d]\n", -12345);
	// ft_printf("[%0d]\n", 12345);
	// ft_printf("[%07d]\n", 12345);
	// ft_printf("[%d]\n", 0);
	// ft_printf("[%3d]\n", 0);
	// ft_printf("[%3.d]\n", 0);
	// ft_printf("[%03d]\n", 0);
	// ft_printf("[%.d]\n", 0);
	// ft_printf("[%.3d]\n", 0);
	// ft_printf("[% d]\n", 12345);
	// ft_printf("[% d]\n", -12345);
	// ft_printf("[% -d]\n", 12345);
	// ft_printf("[% 3d]\n", 12345);
	// ft_printf("[% 7d]\n", 12345);
	// ft_printf("[%+d]\n", 12345);
	// ft_printf("[%+d]\n", -12345);
	// ft_printf("[%+-d]\n", 12345);
	// ft_printf("[%+-9d]\n", 12345);
	// ft_printf("[%+9d]\n", 12345);
	// ft_printf("[%+09d]\n", 12345);
	// ft_printf("[%+09d]\n", -12345);
	// ft_printf("[%+9.7d]\n", 12345);
	// ft_printf("[%+7.9d]\n", 12345);
	// ft_printf("[%+9.7d]\n", -12345);
	// ft_printf("[%+7.9d]\n", -12345);

	// printf("[%09.0d]\n", 12345);
	// printf("[%09.7d]\n", 12345);
	// printf("[%07.9d]\n", 12345);
	// printf("[%-+09d]\n", 12345);//warning : flag '0' is ignored when flag '-' is present
	// printf("[%+ 09d]\n", 12345);//warning : flag ' ' is ignored when flag '+' is present
	// printf("[%+09.7d]\n", 12345);
	// printf("[%+07.9d]\n", 12345);
	// printf("[%+09.7d]\n", -12345);
	// printf("[%+07.9d]\n", -12345);
	// printf("[%#d]\n", 0);//ndefined behavior warning: flag '#' with 'd'

	// %u
	// printf("[%u]\n", 12345);
	// printf("[%u]\n", -12345);
	// printf("[%3u]\n", 12345);
	// printf("[%7u]\n", 12345);
	// printf("[%-7u]\n", 12345);
	// printf("[%-u]\n", 12345);
	// printf("[%*u]\n", 7, 12345);
	// printf("[%*u]\n", -7, 12345);
	// printf("[%.u]\n", 12345);
	// printf("[%.0u]\n", 12345);
	// printf("[%.3u]\n", 12345);
	// printf("[%.7u]\n", 12345);
	// printf("[%-.7u]\n", 12345);
	// printf("[%-10.7u]\n", 12345);
	// printf("[%9.7u]\n", 12345);
	// printf("[%-7.9u]\n", 12345);
	// printf("[%-3.7u]\n", 12345);
	// printf("[%-7.3u]\n", 12345);
	// printf("[%.3u]\n", -12345);
	// printf("[%.7u]\n", -12345);
	// printf("[%-.7u]\n", -12345);
	// printf("[%-9.7u]\n", -12345);
	// printf("[%-7.9u]\n", -12345);
	// printf("[%-3.7u]\n", -12345);
	// printf("[%-7.3u]\n", -12345);
	// printf("[%0u]\n", 12345);
	// printf("[%07u]\n", 12345);
	// printf("[%u]\n", 0);
	// printf("[%3u]\n", 0);
	// printf("[%3.u]\n", 0);
	// printf("[%03u]\n", 0);
	// printf("[%.u]\n", 0);
	// printf("[%.3u]\n", 0);
	// printf("[%09.0u]\n", 12345);
	// printf("[%09.7u]\n", 12345);
	// printf("[%07.9u]\n", 12345);
	// // printf("[% u]\n", 12345); //undefined behaviour warning : flag ' ' with 'u'
	// // printf("[%+u]\n", 12345); //undefined behaviour warning : flag '+' with 'u'
	// // printf("[%#u]\n", 0); //undefined behavior warning: flag '#' with 'u'

	// printf("----------------------\n");
	// ft_printf("[%u]\n", 12345);
	// ft_printf("[%u]\n", -12345);
	// ft_printf("[%3u]\n", 12345);
	// ft_printf("[%7u]\n", 12345);
	// ft_printf("[%-7u]\n", 12345);
	// ft_printf("[%-u]\n", 12345);
	// ft_printf("[%*u]\n", 7, 12345);
	// ft_printf("[%*u]\n", -7, 12345);
	// ft_printf("[%.u]\n", 12345);
	// ft_printf("[%.0u]\n", 12345);
	// ft_printf("[%.3u]\n", 12345);
	// ft_printf("[%.7u]\n", 12345);
	// ft_printf("[%-.7u]\n", 12345);
	// ft_printf("[%-10.7u]\n", 12345);
	// ft_printf("[%9.7u]\n", 12345);
	// ft_printf("[%-7.9u]\n", 12345);
	// ft_printf("[%-3.7u]\n", 12345);
	// ft_printf("[%-7.3u]\n", 12345);
	// ft_printf("[%.3u]\n", -12345);
	// ft_printf("[%.7u]\n", -12345);
	// ft_printf("[%-.7u]\n", -12345);
	// ft_printf("[%-9.7u]\n", -12345);
	// ft_printf("[%-7.9u]\n", -12345);
	// ft_printf("[%-3.7u]\n", -12345);
	// ft_printf("[%-7.3u]\n", -12345);
	// ft_printf("[%0u]\n", 12345);
	// ft_printf("[%07u]\n", 12345);
	// ft_printf("[%u]\n", 0);
	// ft_printf("[%3u]\n", 0);
	// ft_printf("[%3.u]\n", 0);
	// ft_printf("[%03u]\n", 0);
	// ft_printf("[%.u]\n", 0);
	// ft_printf("[%.3u]\n", 0);
	
	// %x, X
	// printf("[%x]\n", 768955);
	// printf("[%x]\n", 4294967295u);
	// printf("[%x]\n", -768955);
	// printf("[%X]\n", 768955);
	// printf("[%3x]\n", 768955);
	// printf("[%7x]\n", 768955);
	// printf("[%-7x]\n", 768955);
	// printf("[%-x]\n", 768955);
	// printf("[%*x]\n", 7, 768955);
	// printf("[%*x]\n", -7, 768955);
	// printf("[%.x]\n", 768955);
	// printf("[%.0x]\n", 768955);
	// printf("[%.3x]\n", 768955);
	// printf("[%.7x]\n", 768955);
	// printf("[%-.7x]\n", 768955);
	// printf("[%0x]\n", 768955);
	// printf("[%07x]\n", 768955);
	// printf("[%x]\n", 0);
	// printf("[%3x]\n", 0);
	// printf("[%3.x]\n", 0);
	// printf("[%03x]\n", 0);
	// printf("[%.x]\n", 0);
	// printf("[%.3x]\n", 0);

	// printf("------------------------\n");

	// ft_printf("[%x]\n", 768955);
	// ft_printf("[%x]\n", 4294967295u);
	// ft_printf("[%x]\n", -768955);
	// ft_printf("[%X]\n", 768955);
	// ft_printf("[%3x]\n", 768955);
	// ft_printf("[%7x]\n", 768955);
	// ft_printf("[%-7x]\n", 768955);
	// ft_printf("[%-x]\n", 768955);
	// ft_printf("[%*x]\n", 7, 768955);
	// ft_printf("[%*x]\n", -7, 768955);
	// ft_printf("[%.x]\n", 768955);
	// ft_printf("[%.0x]\n", 768955);
	// ft_printf("[%.3x]\n", 768955);
	// ft_printf("[%.7x]\n", 768955);
	// ft_printf("[%-.7x]\n", 768955);
	// ft_printf("[%0x]\n", 768955);
	// ft_printf("[%07x]\n", 768955);
	// ft_printf("[%x]\n", 0);
	// ft_printf("[%3x]\n", 0);
	// ft_printf("[%3.x]\n", 0);
	// ft_printf("[%03x]\n", 0);
	// ft_printf("[%.x]\n", 0);
	// ft_printf("[%.3x]\n", 0);

	//%p

	// char *ptr = "aaa";
	// char *void_ptr = "ccc";

	// printf("[%p]\n", ptr);
	// printf("[%p]\n", void_ptr);
	// printf("[%p]\n", NULL);
	// printf("[%5p]\n", ptr);
	// printf("[%10p]\n", ptr);
	// printf("[%15p]\n", ptr);
	// printf("[%-15p]\n", ptr);
	// printf("[%-p]\n", ptr);
	// printf("[%*p]\n", 15, ptr);
	// printf("[%*p]\n", -15, ptr);
	// printf("[%.p]\n", ptr);
	// printf("[%.p]\n", void_ptr);
	// printf("[%.p]\n", NULL);
	// printf("[%.0p]\n", ptr);//undefined behavior warning: precision used with 'p'
	// printf("[%.5p]\n", ptr);//undefined behavior warning: precision used with 'p'
	// printf("[%0p]\n", ptr);//undefined behavior warning: flag '0' with 'p'
	// printf("[% p]\n", ptr);//undefined behavior warning: flag ' ' with 'p'

	// printf("-----------------------\n");
	// long long ptr = 0;
	// long long void_ptr = 451;

	// ft_printf("[%p]\n", NULL);
	// ft_printf("[%p]\n", &void_ptr);
	// ft_printf("[%p]\n", NULL);
	// ft_printf("[%5p]\n", &ptr);
	// ft_printf("[%10p]\n", &ptr);
	// ft_printf("[%15p]\n", &ptr);
	// ft_printf("[%-15p]\n", &ptr);
	// ft_printf("[%-p]\n", &ptr);
	// ft_printf("[%*p]\n", 15, &ptr);
	// ft_printf("[%*p]\n", -15, &ptr);

}