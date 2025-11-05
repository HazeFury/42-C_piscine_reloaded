/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marberge <marberge@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:01:17 by marberge          #+#    #+#             */
/*   Updated: 2025/11/05 18:06:43 by marberge         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 22;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d et mod = %d\n", div, mod);
}
*/
