/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vsudak <vsudak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 15:23:29 by vsudak        #+#    #+#                 */
/*   Updated: 2025/11/01 16:20:23 by vsudak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//set checker
static int	set_checker(char inptch, const char *set)
{
	size_t	p;

	p = 0;
	while (set[p])
	{
		if (set[p] == inptch)
			return (1);
		p++;
	}
	return (0);
}

// firstly we are trimming from the front and then ftom the back
// and then we are returning a new string
// here are substr and strdup => there is malloc!!! 
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (set_checker(s1[i], set) == 1 && s1[i])
		i++;
	len = ft_strlen(s1);
	while (len > i && set_checker(s1[len - 1], set) == 1)
		len--;
	return (ft_substr(s1, i, (len - i)));
}

// int main()
// {
// 	const char *s = "   --=abc=-=--";
// 	const char *settc = " -=";
// 	printf("%s\n", ft_strtrim(s, settc));
// }