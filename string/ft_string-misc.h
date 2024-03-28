#ifndef __FT_STRING_MISC__
#define __FT_STRING_MISC__

#include "ft_string.h"

static inline op_t repeat_bytes(unsigned char c_in)
{
  return ((op_t)-1 / 0xFF) * c_in;
}

#ifdef __x86_64__
#define has_zero(x) ((x - 0x0101010101010101) & ~x & 0x8080808080808080)
#else
#define has_zero(x) ((x - 0x01010101) & ~x & 0x80808080)
#endif /* __x86_64__ */

#define FT_OPSIZE (sizeof(op_t))

#endif /* ft_string-misc.h */
