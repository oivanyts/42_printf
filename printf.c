/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oivanyts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 15:40:37 by oivanyts          #+#    #+#             */
/*   Updated: 2018/11/30 15:40:45 by oivanyts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static size_t find_sumbol(const char *str, char c)
{
	size_t n;

	n = 0;
	while (str[n])
	{
		if (str[n] == c)
			return (n);
		n++;
	}
	return (n);

}

/*%[флаги][ширина][точность][модификаторы][тип преобразования]

	//[тип преобразования] (1 char)
		//d, i, u, o, x, X, f, F, e, E, g, G, a, A, c, s, S, p, n;
	//[модификаторы] 1-2 char
		//h, hh, l ,ll, L
	//[точность] 1-2 char + int
		// ".", ".*"
	//[ширина] мінімальний розм в символах
		// " ", "0"
	//[флаги]
		// -, + або " "(пробіл), #, 0,
*/

static char f_flags(char flag)
{
	return (flag == '-' || flag == '+' || flag == ' ' || flag == '0' || flag == '#')
}
static int f_whidth(const char *w)
{
	return (ft_atoi(w));
}
static int f_precision(char *m)
{
	return(ft_atoi(*m));
	return ();
}
static char f_mods(char *m)
{

}

static char f_types(char t)
{
	return(t == 'c'
		   || t == 's'
		   || t == 'p'
		   || t == 'd'
		   || t == 'i'
		   || t == 'u'
		   || t == 'o'
		   || t == 'x'
		   || t == 'X'
		   || t == 'f'
		   || t == 'F'
	|| t == 'e'
	|| t == 'E'
	|| t == 'g'
	|| t == 'G'
	|| t == 'a'
	|| t == 'A'
	|| t == 'S'
	|| t == 'n'
	);
}

static size_t	f_count_digits(int num)
{
	size_t n;

	n = 1;
	while (num >= 10)
	{
		num /= 10;
		n++;
	}
	return (n);
}

int	ft_vprintf(const char *format, va_list arg)
{
	size_t	n;
	char 	flag[6] = {'\0', '\0', '\0', '\0', '\0', '\0'};
	int		whidth;
	int		precs;
	char 	mods[3] = {'\0', '\0', '\0'};
	char 	type;
	size_t 	i;

	n = find_sumbol(format, '%');
	write(1, format, n);
	while (format[++n])
	{
		i = 0;
		while ((flag[i++] = f_flags(format[n])))
			n++;
		if ((whidth = f_whidth(&format[n])))
			n += f_count_digits(whidth);
		else if (format[n] == '*')
		{
			whidth = va_arg(arg, int);
			n++;
			// argument to whidth
		}
		if (format[n] == '.' && format[n + 1] != '*')
		{
			precs = ft_atoi(&format[++n]);
			n += f_count_digits(precs);
		}
		else if (format[n] == '.' && format[n + 1] == '*') {
			precs = va_arg(arg, int);
			n += 2;
		}
		i = 0;
		if (mods[i] =  )








		//if (format[n] == "%")
	}
	return(0);
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	ft_vprintf(format, args);
	va_end(args);
	return (0);
}
