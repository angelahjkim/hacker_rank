/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_subsegments.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 21:14:01 by angkim            #+#    #+#             */
/*   Updated: 2019/05/18 17:45:16 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** https://www.hackerrank.com/challenges/sorted-subsegments/problem?h_r=next-challenge&h_v=zen
** SORTED SUBSEGMENTS: Given an array of n integers, perform q queries to sort
** 		subarray(s), and output the element at index k. Input is given with the
**		first line containing three integers representing: n, q, k. Second line
**		represents the array of integers. The following lines represent the 
**		query/queries.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	print_array(int *arr, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
}

int		*sort_array(int *arr, int s, int e)
{
	int lowest;
	int tmp;
	int i;

	while (s < e - 1)
	{
		lowest = s;
		i = s;
		while (i <= e)
		{
			if (arr[i] < arr[lowest])
				lowest = i;
			i++;
		}
		tmp = arr[s];
		arr[s] = arr[lowest];
		arr[lowest] = tmp;
		s++;
	}
	return (arr);
}

int		sorted_subsegments(int k, int *a, int a_count, int queries_rows, int **queries)
{
	int start;
	int end;
	int i;
	int result;
	int *next_arr;

	i = 0;
	result = a[k];
	next_arr = (int *)malloc(sizeof(int) * a_count);
	while (i < queries_rows)
	{
		start = queries[i][0];
		end = queries[i][1];
		if (end < a_count)
		{
			next_arr = sort_array(a, start, end);
printf("start: %d\tend: %d\n", start, end);
print_array(next_arr, a_count);
printf("\n");
			result = next_arr[k];
		}
		i++;
	}
	free(next_arr);
	return (result);
}

int		main(void)
{
	int a_count;
	scanf("%d", &a_count);
	int a[a_count];
	int queries_rows;
	scanf("%d", &queries_rows);
	int **queries;
	int k;
	scanf("%d", &k);
	int i;

	// initialize int array
	i = 0;
	while (i < a_count)
	{
		scanf("%d", &a[i]);
		i++;
	}

	// initialize queries array(s)
	int start;
	int end;
	i = 0;
	queries = (int **)malloc(sizeof(int *) * queries_rows);
	while (i < queries_rows)
	{
		queries[i] = (int *)malloc(sizeof(int) * 2);
		scanf("%d", &start);
		scanf("%d", &end);
		queries[i][0] = start;
		queries[i][1] = end;
		i++;
	}

	printf("%d\n", sorted_subsegments(k, a, a_count, queries_rows, queries));

	return (0);
}
