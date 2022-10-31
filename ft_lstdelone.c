/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:57:38 by zstenger          #+#    #+#             */
/*   Updated: 2022/10/25 15:57:36 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

/*
delete the CONTENT of the node and frees the memory it used.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
