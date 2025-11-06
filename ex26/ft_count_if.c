/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marberge <marberge@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:33:17 by marberge          #+#    #+#             */
/*   Updated: 2025/11/06 20:06:38 by marberge         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

/*
int	ft_is_lentgh_is_even(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i % 2 == 0)
		return (1);
	return (0);
}

int	main(void)
{
	char	*strs[] = {"toto", "titi", "tata", "Marco", "Steph", NULL};
	printf("%d\n", ft_count_if(strs, &ft_is_lentgh_is_even));
}
*/
