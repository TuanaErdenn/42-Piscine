/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terden <terden@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:55:26 by terden            #+#    #+#             */
/*   Updated: 2023/09/16 20:41:29 by terden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == find[j] && str[i + j] != '\0')
			j++;
		if (find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
