/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tknibbe <tknibbe@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 11:34:50 by tknibbe       #+#    #+#                 */
/*   Updated: 2022/07/26 12:01:01 by tknibbe       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*s;
	int	i;
	int	size;

	size = max - min;
	i = 0;
	if (min >= max)
		return (0);
	s = malloc(sizeof(int) * size);
	if (s == 0)
		return (-1);
	range[0] = s;
	while (min < max)
	{
		s[i] = min;
		i++;
		min++;
	}
	return (size);
}

// int	main(void)
// {
// 	int	**range;

// 	range = malloc(sizeof(int *));
// 	printf("out is; %i", ft_ultimate_range(range, -35, 25));
// }
