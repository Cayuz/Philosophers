/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   threads.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/29 16:59:08 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/06/06 17:39:49 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	create_threads(t_data *data)
{
	int			i;
	pthread_t	*philo;

	while (i < data->philos)
	{
		pthread_create(&philo[i], NULL, );
		i++;
	}
}
