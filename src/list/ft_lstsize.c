/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:25:46 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:25:48 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/libft.h"

//counts the nodes on the list
int	ft_lstsize(t_list *lst)
{
	int	z;

	z = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		z++;
	}
	return (z);
}
