#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>

# include <stdlib.h>
# include <unistd.h>


// Affichages
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putchar(char c);
void	ft_putnbr(int n);

// Write fd
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

// Mems
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memset(void *b, int c, size_t len);

// Traitements et conditions alphanumeriques
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

// Manipulation de chaine de caracteres
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strstr(char *s, const char *to_find);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_atoi(const char *s);

// Misc..
void	*ft_memalloc(size_t size);


#endif
