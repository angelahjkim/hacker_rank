/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   staircase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 21:17:44 by angkim            #+#    #+#             */
/*   Updated: 2019/05/10 22:30:43 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** https://www.hackerrank.com/challenges/staircase/problem
**
** Staircase Problem:
**		Write a program that prints a staircase of size n. The image is drawn
**		using # symbols and spaces. The last line is not preced by any spaces:
**			(staircase, n = 4)
**		    |     #
**          |    ##
**          |   ###
**          |  ####
*/

#include <stdio.h>

int		main(void)
{
	int size;
	int i;
	int space;
	int hash;

	scanf("%d", &size);
	i = size;
	while (i > 0)
	{
		space = 0;
		while (space < i - 1)
		{
			printf(" ");
			space++;
		}
		hash = size - i + 1;
		while (hash > 0)
		{
			printf("#");
			hash--;
		}
		printf("\n");
		i--;
	}
	return (0);
}
