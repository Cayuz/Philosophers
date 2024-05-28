/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/28 15:53:35 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/28 16:23:42 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "inc/philosophers.h"

int	ft_atoi(const char *arg)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	if (!arg)
		return (0);
	while ((arg[i] >= 9 && arg[i] <= 13) || arg[i] == 32)
		i++;
	if (arg[i] == '-' || arg[i] == '+')
	{
		if (arg[i] == '-')
			//error?;
		i++;
	}
	while (ft_isdigit(arg[i]))
	{
		r = r * 10 + arg[i] - '0';
		i++;
	}
	return (r);
}