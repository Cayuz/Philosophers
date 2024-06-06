/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   philosophers.h                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/28 14:37:35 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/06/06 15:28:11 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

/*===============================LIBRARIES====================================*/

# include <pthread.h>
# include <stdio.h>
# include "colors.h"

/*==============================DEFINITIONS===================================*/

# define INV_ARG "Invalid argument(s)!"
# define ERROR 1
# define SUCCESS 0

/*================================STRUCTS=====================================*/

typedef struct s_data
{
	int	philos;
	int	eat_time;
	int	sleep_time;
	int	die_time;
	int	num_eat_time;
	int	ac;
}	t_data;

/*===============================FUNCTIONS====================================*/


#endif