/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terden <terden@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:44:05 by terden            #+#    #+#             */
/*   Updated: 2023/09/20 18:03:30 by terden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	s;
	long	index;

	s = nb;
	if (s <= 0)
		return (0);
	if (s == 1)
		return (1);
	index = 2;
	if (s > 2)
	{
		while (index * index <= s)
		{
			if (index * index == s)
				return (index);
			index++;
		}
	}
	return (0);
}
