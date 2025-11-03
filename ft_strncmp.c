/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vsudak <vsudak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/16 13:12:32 by vsudak        #+#    #+#                 */
/*   Updated: 2025/11/02 19:01:43 by vsudak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// compare n amount of elements
// and return 
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if ((unsigned char)s1[i] != (unsigned char)s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

// int ft_strncmp(const char *s1, const char *s2, size_t n)
// {
//     size_t i;
//     i = 0;
// 	while(i < n && s1[i] && s2[i])
// 	{
//         if (s1[i] != s2[i])
//             return (s1[i] - s2[i]);
// 		i++;
//     }
// 	return (0);
// }
// int main()
// {
// 	char ss[] = "zyxbcdefgh";
// 	char dd[] = "abcdwxyz";
// 	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
// 	printf("%d\n", strncmp("test\200", "test\0", 6));
// }