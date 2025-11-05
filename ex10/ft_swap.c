/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marberge <marberge@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:39:53 by marberge          #+#    #+#             */
/*   Updated: 2025/11/05 11:45:20 by marberge         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 42;
	printf("a = %d et b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d et b = %d\n", a, b);
	return (0);
}
*/
