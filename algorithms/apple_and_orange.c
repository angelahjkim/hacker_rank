/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apple_and_orange.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:29:38 by angkim            #+#    #+#             */
/*   Updated: 2019/05/24 11:11:39 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** https://www.hackerrank.com/challenges/apple-and-orange/problem
**
** APPLES AND ORANGES: A house has an apple tree to its left and an orange
**		tree to its right. The fruits sometimes fall far enough to reach the
**		house. Given a number line, the positions of the trees and house, and
**		the number and distance the fruits fall, determine how many apples and
**		oranges reach the house.
*/

#include <stdio.h>
#include <stdlib.h>

int		count_fruit(int *fruit_d, int num, int tree, int house_s, int house_t)
{
	int i = 0, count = 0;
	int range_min, range_max;

	if (tree < house_s)
	{
		range_min = house_s - tree;
		range_max = house_t - tree;
		while (i < num)
		{
			if (fruit_d[i] >= range_min && fruit_d[i] <= range_max)
				count++;
			i++;
		}
		return (count);
	}
	if (tree > house_s)
	{
		range_min = house_s - tree;
		range_max = house_t - tree;
		while (i < num)
		{
			if (fruit_d[i] >= range_min && fruit_d[i] <= range_max)
				count++;
			i++;
		}
		return (count);
	}
	return (-1);
}

int		main(void)
{
	int s, t;				// starting and ending points of house
	int a, b;				// apple and orange points
	int m, n;				// number of apples and oranges
	int *apples, *oranges;	// distances which each apple/orange falls
	int i;

	scanf("%d %d", &s, &t);
	scanf("%d %d", &a, &b);
	scanf("%d %d", &m, &n);
	apples = (int *)malloc(sizeof(int) * m);
	i = 0;
	while (i < m)
	{
		scanf("%d", &apples[i]);
		i++;
	}
	printf("%d\n", count_fruit(apples, m, a, s, t));
	oranges = (int *)malloc(sizeof(int) * n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &oranges[i]);
		i++;
	}
	printf("%d\n", count_fruit(oranges, n, b, s, t));

	return (0);
}
