/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vsudak <vsudak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 14:52:44 by vsudak        #+#    #+#                 */
/*   Updated: 2025/11/03 17:44:38 by vsudak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// there is malloc here, watch out!!!
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*d;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	d = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!d)
		return (NULL);
	ft_memcpy(d, s1, len1 + 1);
	ft_memcpy(d + len1, s2, len2 + 1);
	d[len1 + len2 + 1] = '\0';
	return (d);
}
//fully mine, but way too long
// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	size_t	len_s;
// 	size_t	i;
// 	size_t	p;
// 	char	*d;
// 	i = ft_strlen(s1) + 1;
// 	len_s = i + ft_strlen(s2);
// 	d = malloc(len_s);
// 	i = 0;
// 	while(s1[i] != '\0')
// 	{
// 		d[i] = s1[i];
// 		i++;
// 	}
// 	p = 0;
// 	while(i < len_s)
// 	{
// 		d[i] = s2[p];
// 		i++;
// 		p++;
// 	}
// 	return(d);
// }
// int main()
// {
// 	char *a = "";
// 	char *b = "def";
// 	printf("%s\n", ft_strjoin(a, b));
// }