/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   filter_atoi.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tknibbe <tknibbe@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 11:43:13 by tknibbe       #+#    #+#                 */
/*   Updated: 2022/07/24 18:09:09 by tknibbe       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_atoi(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == ' ' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] <= '9' && str[i] >= '0') || str[i] == ',')
	{
		str[j] = str[i];
		j++;
		i++;
	}
	while (j <= i)
	{
		str[j] = '\0';
		j++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	s[] = "twenty";
// 	printf("ouput = %s", ft_atoi(s));
// }
