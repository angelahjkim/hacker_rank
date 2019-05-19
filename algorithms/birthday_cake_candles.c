/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   birthday_cake_candles.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 19:01:35 by angkim            #+#    #+#             */
/*   Updated: 2019/05/16 19:09:07 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** https://www.hackerrank.com/challenges/birthday-cake-candles/problem
** BIRTHDAY CAKE CANDLES: given n candles, where n is equal to the age of your niece,
**		of different heights, she will only be able to blow out the tallest ones.
**		Given your neice's age, the height of the candles, determine the number of
**		candles she can successfully blow out.
*/

#include <stdio.h>

int		main(void)
{
	int total;
	int max_height;
	int count;
	
	scanf("%d", &total);

	int candle_heights[total];
	int i = 0;

	max_height = 1;
	while (i < total)
	{
		scanf("%d", &candle_heights[i]);
		if (candle_heights[i] > max_height)
			max_height = candle_heights[i];
		i++;
	}
	i = 0;
	count = 0;
	while (i < total)
	{
		if (candle_heights[i] == max_height)
			count++;
		i++;
	}
	printf("%d\n", count);
	return (0);
}
