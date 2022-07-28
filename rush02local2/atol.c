/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   atol.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tknibbe <tknibbe@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 17:44:47 by tknibbe       #+#    #+#                 */
/*   Updated: 2022/07/24 18:02:32 by tknibbe       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// "just take a break"  --Abi

int	ft_unsigned(char *str)
{
	int		i;
	int		posormin;
	long	res;

	res = 0;
	posormin = 1;
	i = 0;

	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	if (res <= 4294967295 && res >= 0)
		return (1);
	return (0);
}

// int main(void)
// {
// 	char s[] = "twenty";
// 	printf("output = %i", ft_unsigned(s));
// }
