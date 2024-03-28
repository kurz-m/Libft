#ifndef __FT_MEMCPY_H__
#define __FT_MEMCPY_H__

typedef unsigned char byte;

/* Copy exactly nbytes by copying each single byte from src_bp to dst_bp.
   This function is mostly used for aligning the memory addresses. */
#define BYTE_COPY_FWD(dst_bp, src_bp, nbytes)                                  \
  do {                                                                         \
    size_t __nbytes = (nbytes);                                                \
    while (__nbytes > 0) {                                                     \
      byte __x = ((byte *)src_bp)[0];                                          \
      ++src_bp;                                                                \
      --__nbytes;                                                              \
      ((byte *)dst_bp)[0] = __x;                                               \
      ++dst_bp;                                                                \
    }                                                                          \
  } while (0)

#endif /* ft_memcpy.h */
