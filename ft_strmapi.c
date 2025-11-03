/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vsudak <vsudak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/27 11:56:47 by vsudak        #+#    #+#                 */
/*   Updated: 2025/11/01 16:40:35 by vsudak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Applies the function f to each character of the
// string s, passing its index as the first argument
// and the character itself as the second. A new
// string is created (using malloc(3)) to store the
// results from the successive applications of f.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*r;
	size_t	i;

	if (!s)
		return (NULL);
	if (!f)
		return ((char *)s);
	i = 0;
	r = malloc(ft_strlen(s) + 1);
	if (!r)
		return (NULL);
	while (s[i])
	{
		r[i] = f(i, s[i]);
		i++;
	}
	r[i] = 0;
	return (r);
}

// char	tupper(unsigned int s, char c)
// {
//	void int(s)
// 	if (c >= 'a' && c <= 'z')
// 	{
// 		c = c - ('a' - 'A');
// 	}
// 	return (c);
// }
// int main()
// {
// 	const char *src = "aAsSdadf";
// 	char *res;
// 	res = ft_strmapi(src, tupper);
// 	printf("%s\n", res);
// 	return 0;
// }
