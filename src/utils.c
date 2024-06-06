/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/28 15:53:35 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/06/06 16:07:52 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

static int strtoi(char *arg)
{
	int i;
	int result;

	i = 0;
	result = 0;
	if (!arg)
		return(error_msg(INV_ARG));
	while ((arg[i] >= 9 && arg[i] <= 13) || arg[i] == 32)
		i++;
	if (arg[i] == '-' || arg[i] == '+')
	{
		if (arg[i] == '-')
			return(error_msg(INV_ARG));
		i++;
	}
	while (arg[i] >= '0' && arg[i] <= '9')
	{
		result = result * 10 + arg[i] - '0';
		i++;
	}
	if (result == 0)
		return(error_msg(INV_ARG));
	return (result);
}

void init_struct(char **av, t_data *data)
{
	t_data *data;

	data = (t_data *)malloc(sizeof(t_data));
	data->philos = strtoi(av[1]);
	data->die_time = strtoi(av[2]);
	data->eat_time = strtoi(av[3]);
	data->sleep_time = strtoi(av[4]);
	if (av[5])
		data->num_eat_time = strtoi(av[5]);
	else
		data->num_eat_time = 0;
}

int	error_msg(char *msg)
{
	printf(REDB"Error!\n"RESET"%s\n", msg);
	return(ERROR);
}
