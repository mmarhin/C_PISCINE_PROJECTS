/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 21:12:38 by mamarin-          #+#    #+#             */
/*   Updated: 2024/07/11 16:26:15 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char	*ft_strdup(char *src)
{
	char	*dup;
	int		num_elements;
	int		i;

	num_elements = 0;
	i = 0;
	while (src[num_elements] != '\0')
		num_elements++;
	dup = malloc((num_elements + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (i < num_elements)
	{
		dup[i] = src [i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
int	main(void)
{
	printf("%s", ft_strdup("123532"));
}
