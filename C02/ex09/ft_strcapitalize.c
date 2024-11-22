/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terden <terden@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:19:26 by terden            #+#    #+#             */
/*   Updated: 2023/09/12 11:29:23 by terden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (str[i])
	{
		if (c == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (c == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (!((str[i] >= '0' && str[i] <= '9')
				|| (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			c = 1;
		else
			c = 0;
		i++;
	}
	return (str);
}
