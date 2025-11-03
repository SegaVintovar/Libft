/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vsudak <vsudak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/17 14:49:20 by vsudak        #+#    #+#                 */
/*   Updated: 2025/11/01 16:07:08 by vsudak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}
//#include <bsd/string.h>
// int main()
// {
// char f[] = "7bcd";
// char g[] = "abcd";
// printf("%d\n", ft_memcmp(f, g, 1));
// printf("%d\n", memcmp(f, g, 1));
// }