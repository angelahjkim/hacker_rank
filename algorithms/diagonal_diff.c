/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diagonal_diff.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 17:15:17 by angkim            #+#    #+#             */
/*   Updated: 2019/05/10 20:51:48 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** https://www.hackerrank.com/challenges/diagonal-difference/problem
**
** Diagonal Difference:
** 		Given a square matrix, calculate the absolute difference between
**		the sums of its diagonals.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int		main(void)
{
	int array[100][100];
	int diag_1 = 0;
	int diag_2 = 0;
	int sum = 0;
	int size;
	int i;
	int j;

	scanf("%d", &size);
	
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			scanf("%d", &array[i][j]);
			j++;
		}
		i++;
	}

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
				diag_1 += array[i][j];
			if (i + j == size - 1)
				diag_2 += array[i][j];
			j++;
		}
		i++;
	}

	sum = abs(diag_1 - diag_2);
	printf("%d\n", abs(sum));

	return (0);
}
