#ifndef LIBFT_H
#define LIBFT_H
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

#define INT_MAX 2147483647
#define INT_MIN -2147483648
size_t ft_strlen(const char *s);
int	ft_isascii(int c);
int	ft_atoi(const char *s);
void    ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *to, const void *from, size_t numBytes);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strchr(const char *string, int c);
char	*ft_strdup(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int ft_strncmp(const char * str1,const char* str2,size_t lenght);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
size_t ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char     *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
#endif
