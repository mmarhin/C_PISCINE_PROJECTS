/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:28:38 by mamarin-          #+#    #+#             */
/*   Updated: 2024/07/11 16:28:40 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int		num_elements;
	int	*array;
	int		i;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	num_elements = max - min;
	array = malloc(num_elements * sizeof(int));
	if (array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i <= num_elements)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return	(i - 1);	
}

int	main(void)
{
	int min = -3;
        int max = 5;
        int *range = NULL;
	printf("%d", ft_ultimate_range(&range, -3, 5));
        int num_elems = max - min;
        for (int i = 0; i < num_elems; i++)
        {
                printf("%d ", range[i]);
        }
        printf("\n");
}
