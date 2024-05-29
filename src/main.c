/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/28 14:37:08 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/29 17:01:55 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int main(int ac, char **av)
{
	t_data *data;

	if (ac != 4 || ac != 5)
		error_msg(INV_ARG);
	init_struct(av, data);
	create_threads(data);
}
