/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marberge <marberge@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:19:36 by marberge          #+#    #+#             */
/*   Updated: 2025/11/05 20:25:34 by marberge         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	printf("%d\n", ft_strcmp("ABC", "ABC"));
	printf("%d\n", ft_strcmp("ABC", "AB"));
	printf("%d\n", ft_strcmp("AB", "ABC"));
}
*/
