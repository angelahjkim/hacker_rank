/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_max_sum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 22:34:29 by angkim            #+#    #+#             */
/*   Updated: 2019/05/16 18:56:37 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** https://www.hackerrank.com/challenges/mini-max-sum/problem
**
** Mini-Max Sum Problem:
**		Given five positive integers, find the minimum and maximum values that
**		can be calculated by summing exactly four of the five integers. Print
**		the minimum and maximum values as a single line separated by a space.
*/

#include <stdio.h>
#define SIZE 5

int		main(void)
{
	unsigned long array[SIZE];
	unsigned long min;
	unsigned long max;
	unsigned long total;
	int i;

	i = 0;
	while (i < SIZE)
	{
		scanf("%ld", &array[i]);
		i++;
	}
	i = 0;
	max = min = array[i];
	total = 0;
	while (i < SIZE)
	{
		if (array[i] > max)
			max = array[i];
		if (array[i] < min)
			min = array[i];
		total += array[i];
		i++;
	}
	printf("%lu %lu\n", total - max, total - min);
	return (0);
}
