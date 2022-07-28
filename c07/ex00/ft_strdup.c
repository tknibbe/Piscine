/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tknibbe <tknibbe@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/21 19:26:55 by tknibbe       #+#    #+#                 */
/*   Updated: 2022/07/26 12:04:48 by tknibbe       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*s;
	int		strlen;
	int		i;

	i = 0;
	strlen = 0;
	while (src[strlen])
		strlen++;
	s = malloc(sizeof(char) * (strlen + 1));
	if (s == 0)
		return (0);
	while (i < strlen)
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

// int	main(void)
// {
// 	char	*p;

// 	p = "HiThere :)";
// 	printf("out = %s", ft_strdup(p));
// }
