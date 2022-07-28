/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strs_to_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tknibbe <tknibbe@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 17:58:10 by tknibbe       #+#    #+#                 */
/*   Updated: 2022/07/28 17:07:00 by tknibbe       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#ingt

int		ft_strlen(char *str);
char	*ft_strdup(char *src);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*srtuck ;

	i = 0;
	srtuck = malloc(sizeof(*srtuck) * ac);
	while (i < ac)
	{
		srtuck[i].str = av[i];
		srtuck[i].copy = ft_strdup(av[i]);
		srtuck[i].size = ft_strlen(av[i]);
		i++;
	}
	srtuck[i].str = 0;
	srtuck[i].copy = 0;
	srtuck[i].size = '\0';
	return (srtuck);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

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
