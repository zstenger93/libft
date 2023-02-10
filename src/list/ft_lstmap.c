/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:16:03 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:25:44 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/libft.h"

/*
applies function 'f' to all nodes on the list if there is list and function
then applies the funtion to them
creates a new list with the successful applications
in case the content of the list is empty, the node will be deleted
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*work;

	if (lst && f != NULL)
	{
		start = ft_lstnew(f(lst->content));
		work = start;
		while (lst->next)
		{
			lst = lst->next;
			work->next = ft_lstnew(f(lst->content));
			if (lst->content == NULL)
			{
				ft_lstdelone(start, del);
			}
			work = work->next;
		}
		return (start);
	}
	return (NULL);
}
