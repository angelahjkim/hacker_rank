/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kangaroo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:12:23 by angkim            #+#    #+#             */
/*   Updated: 2019/05/24 13:06:51 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** https://www.hackerrank.com/challenges/kangaroo/problem
** KANGAROO: given two kangaroos at different starting points on a positive-
** direction number line, and jump rates (x meters/jump). Given the starting
** point and jump distance values for each kangaroo, determing if they
** end up in the same location after the same number of jumps.
*/

#include <stdio.h>

char	*kangaroo(int x1, int v1, int x2, int v2)
{
	int jumps;
	int d1, d2;		// landing positions

	if (x1 == x2)
	{
		if (v1 == v2)
			return ("YES");
		else
			return ("NO");
	}
	d1 = x1;
	d2 = x2;
	jumps = 1;
	while (d1 < d2)
	{
		d1 += v1;
		d2 += v2;
		if (d1 == d2)
			return ("YES");
		jumps++;
	}
	while (d1 > d2)
	{
		d1 += v1;
		d2 += v2;
		if (d1 == d2)
			return ("YES");
		jumps++;
	}
	return ("NO");
}

int		main(void)
{
	int x1, x2;		// starting positions
	int v1, v2;		// jump distances per jump

	scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
	if ((x1 > x2 && v1 > v2) || (x2 > x1 && v2 > v1))
		return (printf("NO\n"));
	printf("%s\n", kangaroo(x1, v1, x2, v2));
	return (0);
}
