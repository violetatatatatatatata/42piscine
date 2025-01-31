/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:23:53 by avelandr          #+#    #+#             */
/*   Updated: 2024/08/28 19:37:39 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# define EVEN(nbr) (nbr % 2 == 0)
# define SUCCESS 0
# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of argument"
# define ODD_MSG "I have an odd number of argument"

typedef int	t_bool;

void		ft_putstr(char *str);
t_bool		ft_is_even(int nbr);

#endif
