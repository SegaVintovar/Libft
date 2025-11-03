/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vsudak <vsudak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/16 16:31:07 by vsudak        #+#    #+#                 */
/*   Updated: 2025/11/02 19:04:37 by vsudak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The  memchr()  function  scans  the  initial n bytes of the memory area
//        pointed to by s for the first instance of c. Both c and the bytes of
//        the memory area pointed to by s are interpreted as unsigned char.
void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*d;
	char		t;

	t = (const char)c;
	d = (const char *)s;
	while (n > 0)
	{
		if (*d == t)
			return ((void *)d);
		d++;
		n--;
	}
	return (NULL);
}

// int main()
// {
//     int f[7] = {-49, 49, 1, -1, 0, -2, 2};
//     printf("%s\n", (char *)ft_memchr(f, -1, 7));
//     printf("%s\n", (char *)f);
//     printf("%s\n", (char *)memchr(f, -1, 7));
//     printf("%s\n", (char *)f);
// }