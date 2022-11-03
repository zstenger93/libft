/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:55:20 by zstenger          #+#    #+#             */
/*   Updated: 2022/11/03 11:02:52 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* applies 'f' on each char of the string passed as an argument. each char
passed by address to 'f' to be modified if necessary */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	z;

	if (!s || !f)
		return ;
	z = 0;
	while (s[z] != '\0')
	{
		f(z, (s + z));
		z++;
	}
}
