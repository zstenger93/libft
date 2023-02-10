/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:11:45 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:26:38 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/ft_printf.h"

/*
writing chars and for calculating the length of the string
*/
void	ft_pf_putchar(char c, int *input_len)
{
	*input_len += write(1, &c, 1);
}
