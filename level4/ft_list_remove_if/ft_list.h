/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urabex <urabex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:43:33 by urabex            #+#    #+#             */
/*   Updated: 2024/09/02 19:45:29 by urabex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST.H
# define FT_LIST.H

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

#include <stdlib.h>

#endif
