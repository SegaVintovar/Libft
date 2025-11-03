/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vsudak <vsudak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 11:06:08 by vsudak        #+#    #+#                 */
/*   Updated: 2025/11/02 19:01:01 by vsudak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #ifndef SIZE_MAX
// # define SIZE_MAX ((size_t)-1)
// #endif

// bzero 
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*d;
	size_t	p;

	d = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	p = nmemb * size;
	d = malloc(sizeof(void) * p);
	if (!d)
		return (NULL);
	ft_bzero(d, p);
	return (d);
}

// int main()
// {
// 	char *s = "312321";
// 	printf("%s\n", s);
// 	s = ft_calloc(341214121212, 1412412412412);
// 	printf("%s\n", s);
// }