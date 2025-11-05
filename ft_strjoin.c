/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vs <vs@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:52:44 by vsudak            #+#    #+#             */
/*   Updated: 2025/11/05 11:20:42 by vs               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// there is malloc here, watch out!!!
// also works
// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	size_t	len1;
// 	size_t	len2;
// 	char	*d;

// 	len1 = ft_strlen(s1);
// 	len2 = ft_strlen(s2);
// 	d = (char *)malloc((len1 + len2 + 1) * sizeof(char));
// 	if (!d)
// 		return (NULL);
// 	ft_memcpy(d, s1, len1 + 1);
// 	ft_memcpy(d + len1, s2, len2 + 1);
// 	d[len1 + len2] = '\0';
// 	return (d);
// }

// there is malloc here, watch out!!!
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s;
	size_t	i;
	size_t	p;
	char	*d;
	
	i = ft_strlen(s1) + 1;
	len_s = i + ft_strlen(s2);
	d = malloc(len_s);
	i = 0;
	while (s1[i] != '\0')
		d[i++] = s1[i];
	p = 0;
	while (i < len_s)
		d[i++] = s2[p++];
	d[i] = '\0';
	return (d);
}
int main()
{
	char *a = "abc";
	char *b = "def";
	printf("%s\n", ft_strjoin(a, b));
}