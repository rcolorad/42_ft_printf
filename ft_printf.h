#ifndef FT_PRINTF
#define FT_PRINTF

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>


int ft_printf(char const *str, ...);
int print_flags(unsigned int count_chars, int flag, va_list args);

int		ft_putchar(int c);
int		ft_puthex(unsigned int n, int tf);
int		ft_putnbr(int n);
int		ft_putptr(void *ptr);
int		ft_putstr(char *s);
int		ft_putunsig(unsigned int n);

char    *ft_strchr(const char *str, int c);

#endif
