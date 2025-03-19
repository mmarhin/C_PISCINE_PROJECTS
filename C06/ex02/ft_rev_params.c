/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:19:40 by mamarin-          #+#    #+#             */
/*   Updated: 2024/07/06 16:23:30 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int args, char *arguments[])
{
	char	*array;
	int		i;
	int		j;
	int		num;

	j = 0;
	i = 1;
	if (args > 1)
	{
		i = args;
		while (i > 1)
		{
			array = arguments[i - 1];
			j = 0;
			while (array[j] != '\0')
			{
				num = array[j];
				write(1, &num, 1);
				j++;
			}
			i--;
			num = 10;
			write(1, &num, 1);
		}
	}
}
