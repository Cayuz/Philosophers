/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   philosophers.h                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/28 14:37:35 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/28 16:12:57 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <pthread.h>
# include <stdio.h>

typedef struct s_data
{
	int	philosophers;
	int	eat_time;
	int	sleep_time;
	int	die_time;
	int	num_eat_time;
}	t_data;

#endif