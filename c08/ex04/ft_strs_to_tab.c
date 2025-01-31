/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:49:12 by avelandr          #+#    #+#             */
/*   Updated: 2024/08/29 22:43:34 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				asignacion(char **av, t_stock_str *aux);
char				*ft_strncpy(char *dest, char *src);
int					ft_strlen(char *str);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	struct s_stock_str		*aaa;
	struct s_stock_str		*aux;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	aux = (struct s_stock_str *)malloc(ac * sizeof(struct s_stock_str));
	if (!aux)
		return (NULL);
	aaa = aux;
	aux->size = ft_strlen(*av);
	while (i < ac)
	{
		asignacion(i, av[i], &aux[i]);
		i++;
		av++;
		aux++;
	}
	return (aaa);
}

void	asignacion(int i, char *av, struct s_stock_str *aux)
{
	if (av == NULL)
		return;
	aux->size = ft_strlen(av);
	aux->str = (char *)malloc((ft_strlen(av) + 1) * sizeof(char));
	if (!aux->str)
	{
		free(aux);
		return;
	}
	ft_strncpy(aux->str, av);
	aux->copy = (char *)malloc((ft_strlen(av) + 1) * sizeof(char));
	if (!aux->copy)
		return;
	ft_strncpy(aux->copy, av);
}

char	*ft_strncpy(char *dest, char *src)
{
	int	i;

	if (dest == NULL || src == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	if (i >= ft_strlen(src))
	{
		dest[i] = '\0';
		return (dest);
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
