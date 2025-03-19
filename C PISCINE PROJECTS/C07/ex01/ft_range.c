/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:27:11 by mamarin-          #+#    #+#             */
/*   Updated: 2024/07/11 16:27:12 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	*ft_range(int min, int max)
{
	int		num_elements;
	int	*array;
	int		i;
	if (min >= max)
		return NULL;

	num_elements = max - min;
	array = malloc(num_elements * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i <= num_elements)
	{
		array[i] = min;
		min++;
		i++;
	}
	return	(array);
	
}
int	main(void)
{
	int min = -3;
	int max = 5;
	int *range = ft_range(min, max);
	int num_elements = max - min;
	for (int i = 0; i < num_elements; i++)
	{
		printf("%d ", range[i]);
	}
	printf("\n");
}
