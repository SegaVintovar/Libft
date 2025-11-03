/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: vsudak <vsudak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 11:54:05 by vsudak        #+#    #+#                 */
/*   Updated: 2025/11/01 16:01:18 by vsudak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*d;
	size_t			i;

	d = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		d[i] = 0;
		i++;
	}
}

// int main()
// {
//     char p[] = "1234";
//     ft_bzero(p, 2);
//     printf("%s\n", p);
// }