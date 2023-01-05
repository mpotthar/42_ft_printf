/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:25:37 by mpotthar          #+#    #+#             */
/*   Updated: 2022/12/22 15:49:47 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Adds the node ’new’ at the end of the list.
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!(*lst))
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

// #include "libft.h"
// #include <stdio.h>

// static void ft_print_names(t_list *lst)
// {
//     t_list *tmp = lst;

//     while (tmp != NULL)
//     {
//         printf("Name: %s\n", tmp->content);
//         tmp = tmp->next;
//     }
// }

// int    main(void)
// {
//     t_list name1;
//     t_list name2;
//     t_list name3;
//     t_list name4;

//     t_list *lst;

//     name1.content = "ONE";
//     name2.content = "TWO";
//     name3.content = "THREE";
//     name4.content = "FOUR";

//     lst = &name1;
//     name1.next = &name2;
//     name2.next = &name3;
//     name3.next = NULL;

//     ft_print_names(lst);
//     printf("\n");
//     ft_lstadd_back(NULL, &name4); // NULL // &name4 // &lst
//     ft_print_names(lst);
// }