/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/28 15:42:25 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/28 16:29:09 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "inc/philosophers.h"

void	parse(char **args, int check)
{
	if (!ft_atoi(args[1]) || !ft_atoi(args[2]) || !ft_atoi(args[3])
		|| !ft_atoi(args[4]) || (check && !ft_atoi(args[5])))
		//error;
	
}
