/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:13:01 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:25:30 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/libft.h"

/*
if there is no new node returns null, if no list then the new node becames the 
list otherwise checks for the last node of the list and adds a new one
*/
void	ft_lstadd_back(t_list **lst, t_list *new_element)
{
	t_list	*the;

	if (!new_element)
		return ;
	if (!*lst)
	{
		*lst = new_element;
		return ;
	}
	the = ft_lstlast(*lst);
	the->next = new_element;
}
