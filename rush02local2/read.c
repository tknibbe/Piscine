/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   read.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tknibbe <tknibbe@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 19:31:42 by tknibbe       #+#    #+#                 */
/*   Updated: 2022/07/24 18:24:35 by tknibbe       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strstr(char *haystack, char *needle);
int		ft_strlen(char *needle);
char	*filter(char *p);

void	readfunc(char *dict, char *str)
{
	int		fd;
	int		sz;
	char	*p;
	char	*c;

	c = malloc(750);
	fd = open(dict, O_RDONLY);
	sz = read(fd, c, 690);
	p = ft_strstr(c, str);
	if (p == 0)
		return ;
	p = filter(p);
	(void)str;
	free(c);
}

char	*filter(char *p)
{
	int	ee;
	int	i;

	ee = 0;
	i = 0;
	while ((p[ee] < 'a' || p[ee] > 'z') && (p[ee] < 'A' || p[ee] > 'Z'))
		ee++;
	while (p[ee] != '\n')
	{
		p[i] = p[ee];
		write(1, &p[ee], 1);
		ee++;
		i++;
	}
	write(1, "\n", 1);
	return (p);
}

char	*ft_strstr(char *haystack, char *needle)
{
	int	i;
	int	j;
	int	len;
	int	temp;

	i = 0;
	j = 0;
	len = ft_strlen(needle);
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
			temp = i;
		while (haystack[i] == needle[j])
		{
			j++;
			i++;
			if (j == len)
				return (&haystack[temp]);
			if (haystack[i] != needle[j])
				j = 0;
		}
		i++;
	}
	printf("Dict Error\n");
	return (0);
}

int	ft_strlen(char *needle)
{
	int	i;

	i = 0;
	while (needle[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	readfunc("trashstring");
// }