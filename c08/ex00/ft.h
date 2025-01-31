/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:05:15 by avelandr          #+#    #+#             */
/*   Updated: 2024/08/28 17:23:06 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

#endif

/*
 Declaraciones de funciones
 Declaraciones de variables
 Macros
 Estructuras y tipos de datos
 Inclusiones de otros archivos de cabecera

#ifndef es una directiva de preprocesador en C que se utiliza para evitar
la inclusión múltiple de un archivo de cabecera en un archivo de código fuente.
#ifndef se lee como "if not defined"
Si ya se ha incluido, el código entre #ifndef y #endif se salta
#endif se utiliza para indicar el final de esa sección de código
 */
