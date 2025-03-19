/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:41:48 by mamarin-          #+#    #+#             */
/*   Updated: 2024/06/27 16:28:23 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	ok;

	i = 0;
	ok = 1;
	while (str[i] != '\0')
	{
		if ((ok == 1) && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (ok == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] == ' ' || str[i] == 43 || str[i] == 45)
			ok = 1;
		else
			ok = 0;
		i++;
	}
	return (str);
}
int	main(void)
{
	char cptlz[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(cptlz));
}
