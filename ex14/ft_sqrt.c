/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marberge <marberge@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:21:48 by marberge          #+#    #+#             */
/*   Updated: 2025/11/05 19:29:57 by marberge         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb < 4)
		return (0);
	while (i <= (nb / 2))
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	printf("%d\n", ft_sqrt(-12));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(3));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(8));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(81));
}
*/
