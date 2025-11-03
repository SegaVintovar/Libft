/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vs <vs@student.42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/14 14:14:49 by vsudak        #+#    #+#                 */
/*   Updated: 2025/11/02 19:03:29 by vsudak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  The strchr() function returns a pointer to the first occurrence of 
//  the character c in the string s.
char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	char			*r;
	unsigned char	ch;

	ch = (unsigned char)c;
	r = (char *)s;
	i = 0;
	while (r[i] != '\0')
	{
		if (r[i] == ch)
			return ((char *)&r[i]);
		i++;
	}
	if (r[i] == ch)
		return ((char *)&r[i]);
	return (NULL);
}

// #include <bsd/string.h>
// int main()
// {
//     char d[] = "qweps";
//     printf("%s\n", ft_strchr(d, (int)'\0'));
//     printf("%s\n", strchr(d, (int)'\0'));
// }