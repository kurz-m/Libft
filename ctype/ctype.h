#ifndef __CTYPE_H__
#define __CTYPE_H__

#include <sys/types.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isblank(int c);
int		ft_iscntrl(int c);
int		ft_isdigit(int c);
int		ft_isinstr(int c, const char *str);
int		ft_isinstrr(int c, const char *str, int i);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
int		ft_isxdigit(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif /* ctype.h */
