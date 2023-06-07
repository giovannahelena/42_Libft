/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghelena- <ghelena-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 23:00:37 by ghelena-          #+#    #+#             */
/*   Updated: 2023/06/07 20:16:18 by ghelena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	l = 0;
	if (!s1 || !s2)
		return (NULL);
	s3 = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (!s3)
		return (NULL);
	while (s1[i] != '\0')
		s3[l++] = s1[i++];
	while (s2[j] != '\0')
		s3[l++] = s2[j++];
	return (s3);
}
