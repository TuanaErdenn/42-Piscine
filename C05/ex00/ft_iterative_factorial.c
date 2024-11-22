/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terden <terden@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:33:32 by terden            #+#    #+#             */
/*   Updated: 2023/09/18 13:32:57 by terden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	s;

	s = 1;
	while (nb > 0)
	{
		s *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (s);
}
