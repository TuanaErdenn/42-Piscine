/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terden <terden@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:51:33 by terden            #+#    #+#             */
/*   Updated: 2023/09/21 17:25:38 by terden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sort_params(int count, char **s)
{
	int	i;
	int	j;

	i = 1;
	while (i < count - 1)
	{
		j = 1;
		while (j < count - 1)
		{
			if (ft_strcmp(s[j], s[j + 1]) > 0)
				ft_swap(&s[j], &s[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	sort_params(ac, av);
	while (av[i])
	{
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}
