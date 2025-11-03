/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vsudak <vsudak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 12:50:35 by vsudak        #+#    #+#                 */
/*   Updated: 2025/11/02 18:51:35 by vsudak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strlcpy() function copies up to size - 1 characters from the NUL-ter‐
//      minated string src to dst, NUL-terminating the result.
// so from 1st pos in src to 1st pos in dest(not apending!!!)
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!src || !dest)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// #include <bsd/string.h>
// int main()
// {
// 	char source[] = "abcd";
// 	char destin[] = "";
//     int p = 4;
// 	ft_strlcpy(destin, source, p);
// 	printf("%s", destin);
// 	printf("\n%zu", ft_strlcpy(destin, source, p));
// 	printf("\n");
// 	char s[] = "abcd";
// 	char d[] = "";
// 	strlcpy(d, s, p);
// 	printf("%s\n", d);
// 	printf("%zu\n", strlcpy(d, s, p) );
// }