/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marberge <marberge@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:16:57 by marberge          #+#    #+#             */
/*   Updated: 2025/11/06 19:31:32 by marberge         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
void	ft_double(int num)
{
	printf("%d\n", num * 2);
}

int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5};
	ft_foreach(array, 5, &ft_double);
	return (0);
}*/
