/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:01:20 by despanad          #+#    #+#             */
/*   Updated: 2024/07/05 11:41:30 by despanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Contar las palabras separadas por el delimitador
static int  count_words(char *s, char c)
{
    int cwords;

    cwords = 0;
    if (!*s)
        return 0;
    while (*s) {
        if (*s == c) 
        {
            cwords++;
            while (*s == c)
            s++;
        }
        else 
            s++;
    }
    cwords++;
    return cwords;
}

// Liberar memoria en caso de error
static void *ft_free(char **memry, size_t aux)
{
    size_t  i;

    i = 0;
    while (i < aux)
    {
        free(memry[i]);
        i++;
    }
    free(memry);
    return NULL;
}

// Dividir la cadena según el delimitador
static void split_str(char **ptr, char *str, char c, int nwords)
{
    int     i;
    char    *aux;

    i = 0;
    if ((nwords > 0) && *str)
    {
        while (i < (nwords - 1))
        {
            aux = ft_strchr(str, c);
            ptr[i] = ft_substr(str, 0, aux - str);
            if (ptr[i] == NULL)
            {
                ft_free(ptr, i);
                return;
            }
            i++;
            while (*aux == c)
                aux++;
            str = aux;
        }
        ptr[i] = ft_strdup(str);
        if (ptr[i] == NULL) {
            ft_free(ptr, i);
            return;
        }
        ptr[i + 1] = NULL;
    }
}

// Función principal para dividir la cadena
char **ft_split(const char *s, char c)
{
    int nwords;
    char **ptr;
    char *str;
    char a[2];

    a[0] = c;
    a[1] = '\0';
    if (s)
    {
        str = ft_strtrim(s, a);
        if (str)
        {
            nwords = count_words(str, c);
            ptr = (char **)calloc((nwords + 1), sizeof(char *));
            if (ptr)
                split_str(ptr, str, c, nwords);
            free(str);
            return ptr;
        }
    }
    return NULL;
}
