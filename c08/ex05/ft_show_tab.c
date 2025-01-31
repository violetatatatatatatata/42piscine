/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 22:36:03 by avelandr          #+#    #+#             */
/*   Updated: 2024/08/29 22:36:46 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_show_tab(struct s_stock_str *par)
int		ft_strlen(char *str)

void    ft_show_tab(struct s_stock_str *par)
{
        int     i;
        int     j;
        char    *size;
        int     temp;

        i = 0;
        j = 0;
        size = (char *)malloc(50 * sizeof(char));
        while (par[i].str != NULL)
        {
                write(1, par[i].str, ft_strlen(par[i].str));
                write(1, '\n', 1);
                temp_size = par[i].size;
                j = 0;
                while (par[i].size > 0)
                {
                        size[j] = (par[i].size % 10) + '0';
                        par[i].size /= 10;
                }
                size[j] = '\0';
                while (j > 0)
                {
                        write(1, size[j], 1);
                        j--;
                }
                write (1, size, ft_strlen(size));
                write (1, par[i].str, ft_strlen(par[i].str));
                write(1, '\n', 1);
                i++;
        }
        free(size);
}

int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
                i++;
        return (i);
}

