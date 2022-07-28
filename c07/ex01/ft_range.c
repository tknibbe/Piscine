/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tknibbe <tknibbe@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 10:04:06 by tknibbe       #+#    #+#                 */
/*   Updated: 2022/07/26 12:06:21 by tknibbe       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*s;
	int		i;
	int		j;

	if (min >= max)
		return (0);
	s = malloc(sizeof(int) * (max - min));
	if (s == 0)
		return (0);
	i = min;
	j = 0;
	while (i < max)
	{
		s[j] = i;
		i++;
		j++;
	}
	return (s);
}

// int	main(void)
// {
// 	int		*o;
// 	int		i;

// 	o = ft_range(1, 250);
// 	i = 0;
// 	while (o[i])
// 	{
// 		printf("output : %i\n", o[i]);
// 		i++;
// 	}
// }
