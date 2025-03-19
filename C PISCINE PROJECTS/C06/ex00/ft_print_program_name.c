/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:14:45 by mamarin-          #+#    #+#             */
/*   Updated: 2024/07/06 18:14:06 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int args, char *arguments[])
{
	int		num;
	int		i;
	char	*array;

	array = arguments[0];
	i = 0;
	num = 10;
	if (args >= 1)
	{
		while (array[i] != '\0')
		{
			num = array[i];
			write(1, &num, 1);
			i++;
		}
		num = 10;
		write(1, &num, 1);
	}
}
