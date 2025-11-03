/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vsudak <vsudak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/10 11:02:35 by vsudak        #+#    #+#                 */
/*   Updated: 2025/11/02 18:51:53 by vsudak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = dest;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
// int main()
// {
// 	//printf("%p\n", memcpy((0), (0), 3));
// 	printf("%p\n", ft_memcpy(((void*)0), ((void*)0), 3));
// }