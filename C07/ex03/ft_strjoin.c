/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:44:52 by mamarin-          #+#    #+#             */
/*   Updated: 2024/07/11 18:59:19 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	int	dest_size;
	int	i;

	dest_size = 0;
	i = 0;
	while (dest[dest_size] != '\0')
	{
		dest_size++;
	}
	while (src[i] != '\0')
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	int		j;
	char	*array;

	len = 0;
	i = 0;
	j = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	while (j < (size - 1))
	{
		len += ft_strlen(sep);
		j++;
	}
	array = malloc(sizeof(char) * (len + 1));
	if (array == NULL)
			return (NULL);
	
	array[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(array, strs[i]);
		if (i != (size - 1))
			ft_strcat(array, sep);
		i++;
	}
	return (array);

}
int	main(void)
{
	char *sep = "--+--";
	int	size = 4;
	char *strs[] ={"hola", "adios", "va a funcionar"};
	printf("%s", ft_strjoin(size, strs, sep));
}
