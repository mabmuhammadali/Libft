/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:10:29 by mabdulla          #+#    #+#             */
/*   Updated: 2022/07/17 16:10:33 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int c)
{
	char	*s1;

	s1 = (char *)s;
	while ((char)c != *s1)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
	}
	return (s1);
}
