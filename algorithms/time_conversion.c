/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 07:50:04 by angkim            #+#    #+#             */
/*   Updated: 2019/05/17 08:58:51 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** https://www.hackerrank.com/challenges/time-conversion/problem?h_r=next-challenge&h_v=zen
** TIME CONVERSION: Given a time in 12-hour AM/PM format, convert it to
** 		military (24-hour) time.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*time_conversion(char *s)
{
	char 	*conv;

	conv = (char *)malloc(sizeof(char) * 9);
	strncpy(conv, s, 8);
	conv[8] = '\0';
	if (s[0] == '0' && s[8] == 'P')
	{
		conv[0] = '1';
		if (s[1] <= '7')
			conv[1] = s[1] + 2;
		else
		{
			conv[0] = '2';
			if (s[1] == '8')
				conv[1] = '0';
			if (s[1] == '9')
				conv[1] = '1';
		}
	}
	if (s[0] == '1')
	{
		if (s[1] == '2')
		{
			if (s[8] == 'A')
			{
				conv[0] = '0';
				conv[1] = '0';
				return (conv);
			}
			else
				return (conv);
		}
		conv[0] = '2';
		if (s[1] == '0')
			conv[1] = '2';
		if (s[1] == '1')
			conv[1] = '3';
	}
	return (conv);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		printf("24-hour time: %s\n", time_conversion(av[1]));
	return (0);
}
