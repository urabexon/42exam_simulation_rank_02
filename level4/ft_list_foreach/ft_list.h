/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urabex <urabex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:36:44 by urabex            #+#    #+#             */
/*   Updated: 2024/09/02 19:38:43 by urabex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST.H
# define FT_LIST.H

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif