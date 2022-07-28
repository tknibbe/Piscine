/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_stock_str.h                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tknibbe <tknibbe@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 17:58:59 by tknibbe       #+#    #+#                 */
/*   Updated: 2022/07/28 16:56:03 by tknibbe       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;
#endif