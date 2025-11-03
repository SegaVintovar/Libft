/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: vsudak <vsudak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/27 16:57:03 by vsudak        #+#    #+#                 */
/*   Updated: 2025/11/01 16:40:13 by vsudak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs the string ’s’ to the specified file
// descriptor followed by a newline.
// n: The integer to output.
// fd: The file descriptor on which to write.
void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
