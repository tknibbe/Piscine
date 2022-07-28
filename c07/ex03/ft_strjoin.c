/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tknibbe <tknibbe@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 19:02:35 by tknibbe       #+#    #+#                 */
/*   Updated: 2022/07/26 11:51:51 by tknibbe       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
char	*ft_stcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		new_length;
	int		i;
	char	*newstr;

	i = 0;
	new_length = ft_strlen(sep) * (size - 1);
	if (size == 0)
		return (newstr = malloc(0));
	while (i < size)
	{
		new_length += ft_strlen(strs[i]);
		i++;
	}
	new_length++;
	newstr = malloc(sizeof(char) * new_length);
	newstr = ft_stcpy(newstr, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(newstr, sep);
		ft_strcat(newstr, strs[i]);
		i++;
	}
	return (newstr);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest) + 1;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_stcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i - 1);
}

// int	main(void)
// {
// 	char	*str[4];
// 	int		size;

// 	size = 1;
// 	str[0] = "";
// 	str[1] = "a string";
// 	str[2] = "that I";
// 	str[3] = "should concatenate";
// 	printf("output : %s", ft_strjoin(size, str, " @@ "));
// }
