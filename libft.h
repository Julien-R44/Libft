#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>


// Affichages
void	ft_putstr(const char *s);

// Manipulation de chaine de caracteres
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strcat(char *dest, const char *src);

// Misc..


#endif