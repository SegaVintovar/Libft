/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vsudak <vsudak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/17 15:48:11 by vsudak        #+#    #+#                 */
/*   Updated: 2025/11/02 19:02:56 by vsudak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strnstr - Locates the first occurrence of the null-terminated string 
   'little' in the string 'big',
 * where not more than 'len' characters are searched.
 * @big: The string to be searched.
 * @little: The substring to search for.
 * @len: The maximum number of characters to search.
 * Return: Pointer to the first occurrence of 'little' in 'big',
 *  or NULL if not found.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	if (*little == '\0' || !little)
		return ((char *)big);
	while (big && i < len && big[i] != '\0')
	{
		y = 0;
		if (big[i] == little[y])
		{
			while (big[i + y] == little[y] && i + y < len && big[y + i])
				y++;
			if (little[y] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (0);
}
//line 41 -- // moya ne ponimat` - big + i means "pointer to the i‑th character"
//(pointer arithmetic).
//
// #include <bsd/string.h>
// int main()
// {
//     char a[] = "";
//     char b[] = "xx";
//     size_t p = 4294967295;
//     printf("%s\n", ft_strnstr((char *)a, (char *)b, p));
//     printf("%s\n", strnstr((char *)a, (char *)b, p));
// }