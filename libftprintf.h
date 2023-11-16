#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *, ...);
int	ft_printc(va_list args);
int	ft_prints(va_list val);
int ft_printp(va_list args);
int	ft_printd(va_list args);
int	ft_printu(va_list args);
int	ft_printh(va_list args);
int ft_printuph(va_list args);
int	ft_printperc(void);
int	ft_putchar(int c);

#endif
