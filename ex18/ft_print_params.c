/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marberge <marberge@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:28:11 by marberge          #+#    #+#             */
/*   Updated: 2025/11/05 20:36:40 by marberge         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	int	i;
	int	k;

	i = 1;
	while (i < argc)
	{
		k = 0;
		while (argv[i][k] != '\0')
		{
			ft_putchar(argv[i][k]);
			k++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
