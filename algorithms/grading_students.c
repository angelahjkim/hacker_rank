/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grading_students.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:19:45 by angkim            #+#    #+#             */
/*   Updated: 2019/05/24 10:32:00 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** https://www.hackerrank.com/challenges/grading/problem
** GRADING STUDENTS: Take a number of grades, if the difference between the next
**		multiple of 5 is less than 3, round the grade up to the next multiple
**		of 5. Any grade less than 40 is a failing grade, thus any grade less
**		than 38 should not be rounded.
*/

#include <stdio.h>
#include <stdlib.h>
#define FAIL 37

int		*round_grades(int *grades, int size)
{
	int i = 0;

	while (i < size)
	{
		if (grades[i] > FAIL)
		{
			if (grades[i] % 10 >= 8)
				grades[i] = grades[i] + 10 - (grades[i] % 10);
			if (grades[i] % 10 >= 3 && grades[i] % 10 < 5)
				grades[i] = grades[i] + (5 - (grades[i] % 10));
		}
		i++;
	}
	return (grades);
}

int		main(void)
{
	int *grades;
	int *rounded;
	int size;
	int i;

	scanf("%d", &size);
	grades = (int *)malloc(sizeof(int) * size);
	i = 0;
	// initialize array
	while (i < size)
	{
		scanf("%d", &grades[i]);
		i++;
	}
	rounded = round_grades(grades, size);
	i = 0;
	while (i < size)
	{
		printf("%d\n", rounded[i]);
		i++;
	}
	return (0);
}
