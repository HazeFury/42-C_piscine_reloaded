/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marberge <marberge@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:07:45 by marberge          #+#    #+#             */
/*   Updated: 2025/11/05 18:32:24 by marberge         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	res = nb * (nb - 1);
	i = nb - 2;
	while (i > 0)
	{
		res += res * (i - 1);
		i--;
	}
	return (res);
}

/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", ft_iterative_factorial(3));
	printf("%d\n", ft_iterative_factorial(4));
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(6));
	printf("%d\n", ft_iterative_factorial(7));
	printf("%d\n", ft_iterative_factorial(8));
	printf("%d\n", ft_iterative_factorial(9));
	printf("%d\n", ft_iterative_factorial(10));
	printf("%d\n", ft_iterative_factorial(-12));
	printf("%d\n", ft_iterative_factorial(13));
}
*/
