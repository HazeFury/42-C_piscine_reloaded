/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marberge <marberge@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:40:41 by marberge          #+#    #+#             */
/*   Updated: 2025/11/06 12:13:34 by marberge         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;
	int	range;

	i = 0;
	range = max - min;
	if (min >= max)
	{
		result = NULL;
		return (result);
	}
	result = malloc(range * sizeof(int));
	if (result == NULL)
		return (NULL);
	while (i < range)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}

/*
int	main(void)
{
	int	*array;
	int	i;
	int	min;
	int	max;

	i = 0;
	min = 6;
	max = 20;
	array = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d\n", array[i]);
		i++;
	}
	return (0);
}
*/
