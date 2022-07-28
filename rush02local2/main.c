/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tknibbe <tknibbe@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/24 11:45:27 by tknibbe       #+#    #+#                 */
/*   Updated: 2022/07/24 18:13:23 by tknibbe       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_unsigned(char *str);
char	*ft_atoi(char *str);
char	*filter_comma(char *str);
void	readfunc(char *dict, char *str);

void	argc_3(char **argv)
{
	char	*t;
	char	*d;
	int		tf;

	d = argv[1];
	t = ft_atoi(argv[2]);
	printf("%s", t);
	t = filter_comma(t);
	tf = ft_unsigned(t);
	if (tf == 0 || t[0] == 0)
	{
		write(1, "Error; value not an unsigned int\n", 33);
		return ;
	}
	readfunc(d, t);
}

void	argc_2(char **argv)
{
	char	*t;
	char	*d;
	int		tf;

	d = "numbers.dict";
	t = ft_atoi(argv[1]);
	t = filter_comma(t);
	tf = ft_unsigned(t);
	if (tf == 0 || t[0] == '\0')
	{
		write(1, "Error; value not an unsigned int\n", 33);
		return ;
	}
	readfunc(d, t);
}

int	main(int argc, char **argv)
{
	if (argc == 1 || argc > 3)
	{
		write(1, "Error; wrong input given\n", 25);
		return (-1);
	}
	if (argc == 2)
		argc_2(argv);
	if (argc == 3)
		argc_3(argv);
}
