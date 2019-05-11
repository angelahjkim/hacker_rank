/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plus_minus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 20:53:58 by angkim            #+#    #+#             */
/*   Updated: 2019/05/10 21:17:12 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** https://www.hackerrank.com/challenges/plus-minus/problem
**
** Plus Minus Problem:
**		Given an array of integers, calculate the fractions of its elements
**		that are positive, negative, and are zeros. Print the decimal value
**		of each fraction (rounded to six decimals) on a newline.
*/

#include <stdio.h>

int		main(void)
{
	float total;
	float pos;
	float neg;
	float zero;
	int num;
	int i;

	scanf("%f", &total);
	pos = 0;
	neg = 0;
	zero = 0;
	i = 0;
	while (i < total)
	{
		scanf("%d", &num);
		if (num == 0)
			zero++;
		if (num > 0)
			pos++;
		if (num < 0)
			neg++;
		i++;
	}
	printf("%.6f\n", pos / total);
	printf("%.6f\n", neg / total);
	printf("%.6f\n", zero / total);
	return (0);
}
