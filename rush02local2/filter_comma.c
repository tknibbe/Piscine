/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   filter_comma.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tknibbe <tknibbe@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 11:30:13 by tknibbe       #+#    #+#                 */
/*   Updated: 2022/07/24 12:48:07 by tknibbe       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*filter_comma(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ',')
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	while (j != i)
	{
		str[j] = '\0';
		j++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	s[] = "100,0,,,,,,,00,000";
// 	printf("out is %s", filter_comma(s));
// }
