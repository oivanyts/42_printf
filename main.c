#include <stdio.h>
#include <float.h>
#include "includes/libftprintf.h"
#include <math.h>
#include <stddef.h>
#include <wchar.h>
#include <locale.h>
#include <time.h>



#define	NBR (long double)LDBL_MAX
#define TYP "%d%d%d\n"
#define ARG "{%.f} fsddfssdfdfsdfsdsfsdsdfdsf\n {%.e}", 82.35454,82.36545
//#define ARG "%ls", L"中文"

int main (void)
{
//	int i = 0;
//	int e;
//	int q;
//	double d = 988907.1234567;

	setlocale(LC_ALL ,"C/UTF-8/C/C/C/C");
//	clock_t start, end;
//	double cpu_time_used, cpu_time_used1;
//	start = clock();
//	for (int n = 0; n < 100; n++) {
//		printf(ARG);
//	}
//	end = clock();
//	cpu_time_used = ((double) (end - start));
//	start = clock();
//	for (int n = 0; n < 1000; n++)
//	{
//		ft_printf(ARG);
//	}
//	end = clock();
//	cpu_time_used1 = ((double) (end - start));
//	printf("prntf - %f\nftprintf %f\n", cpu_time_used1, cpu_time_used);
//
//	int fd = open("test.txt", O_CREAT|O_RDWR, S_IWUSR|S_IRUSR);
	printf("\n%d\n", printf(ARG));
	printf("\n%d\n", ft_printf(ARG));

//	printf("%d\n", printf("e ~ %.8e\ng ~ %.3g\nf ~ %.4f", d, d, d));
//	ft_printf_fd(fd, "%Lb1\n{red}%s2\n{green}%b3\n{yellow}%b4\n{blue}%b5\n{magenta}%b6\n{cyan}%b7\n{white}%b8\n{eoc}9\n",
//			(long double)-5160.5220, "JAXBFAJSBFOBASKJF",  -1, -1, -1, -1, -1, -1, 1, 1);
//
//	ft_printf_fd(fd, "str = %s\nint  = %d\n", "qwerty", INT_MIN);
//	close(fd);

//	system("leaks printf -q");
}