/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:17:37 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/22 13:48:16 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
/*
#include <unistd.h>
int	main()
{
	char	str1[15] = "Markos Vinicius";
	char	str2[15] = "Vinicius";
	char	*result;

	result = ft_strstr(str1, str2);
	write(1, result, 15);
}
*/