/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vsudak <vsudak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/10 11:13:25 by vsudak        #+#    #+#                 */
/*   Updated: 2025/11/01 16:02:42 by vsudak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The  memmove()  function  copies n bytes from memory area src to memory
// area dest.  The memory areas may overlap: copying takes place as though
// the  bytes in src are first copied into a temporary array that does not
// overlap src or dest, and the bytes are then copied from  the  temporary
// array to dest.
// Firstly we are forward coping, because of no overlap using memcpy
// backward coping in case of overlap
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (d == s)
		return (dest);
	if (!dest && !src)
		return (NULL);
	if (s > d)
	{
		ft_memcpy (d, s, n);
		return (dest);
	}
	i = n;
	while (i != 0)
	{
		d[i - 1] = s[i - 1];
		i--;
	}
	return (dest);
}

// int main()
// {
// 	char b[] = "abcd";
// 	char a[] = "123";
// 	memmove(a, b, 2);
// 	printf("%s\n", a);
//  ft_memmove(a, b, 2);
// 	printf("%s\n", a);
// }