/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vsudak <vsudak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/15 18:12:24 by vsudak        #+#    #+#                 */
/*   Updated: 2025/11/01 18:01:32 by vsudak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// looking for the last match with the character
char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	size_t	len;
	char	*end;

	end = (char *)s;
	tmp = 0;
	len = ft_strlen(s);
	while (*s)
	{
		if (*s == (char)c)
			tmp = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return (&end[len]);
	if (tmp == 0)
		return (NULL);
	return (tmp);
}

//#include <bsd/string.h>
// char	*ft_strrchr(const char *s, int c)
// {
// 	size_t i;
// 	i = ft_strlen((char *)s);
// 	while(i != 0)
// 	{
// 		if(*s == '\0')
// 			return (0);
// 		if(*s == c)
//         {
// 			return ((char *)s);
// 		}
// 		i--;
//     }
// 	if(*s == '\0')
// 		return (0);
// return NULL;
// }
// int main()
// {
//     char d[] = "abcdefg";
//     printf("%s\n", ft_strrchr(d, (int)'\0'));
//     printf("%s\n", strrchr(d, (int)'\0'));
// }