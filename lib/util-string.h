#ifndef __UTIL_STRING_H_
#define __UTIL_STRING_H_


#ifdef __cplusplus
 extern "C" {
#endif


#include <stdint.h>

#define IS_WHITESPACE( chr )  ((chr) == ' ' || (chr) == '\t' || (chr) == '\n' || (chr) == '\r')
#define IS_NUMBER( chr )      ('0' <= (chr) && (chr) <= '9')
#define IS_NEG( chr )         ((chr) == '-')
#define IS_POS( chr )         ((chr) == '+')
#define IS_SIGN( chr )        (IS_NEG(chr) || IS_POS(chr))
#define IS_COMMA( chr )		  ((chr) == '.')
#define IS_EOS( chr )		  ((chr) == '\0')


inline void u16_to_bigendian( uint8_t * dst, uint16_t u16)
{
	dst[0] = (u16 >> 8) & 0xFF;
	dst[1] = u16 & 0xFF;
}

inline void bigendian_to_u16( uint16_t * dst, uint8_t * src )
{
	*dst = (((uint16_t)src[0]) << 8) | (uint16_t)src[1];
}

inline void u24_to_bigendian( uint8_t * dst, uint32_t u24)
{
	dst[0] = (u24 >> 16) & 0xFF;
	dst[1] = (u24 >> 8) & 0xFF;
	dst[2] = u24 & 0xFF;
}

inline void bigendian_to_u24( uint32_t * dst, uint8_t * src )
{
	*dst = (((uint32_t)src[0]) << 16) | (((uint32_t)src[1]) << 8) | (uint32_t)src[2];
}

inline void s24_to_bigendian( int8_t * dst, int32_t s24 )
{
	dst[0] = (s24 >> 16) & 0xFF;
	dst[1] = (s24 >> 8) & 0xFF;
	dst[2] = s24 & 0xFF;
}

inline void bigendian_to_s24( int32_t * dst, uint8_t * src )
{
	*dst = (((int32_t)src[0]) << 16) | (((int32_t)src[1]) << 8) | (uint32_t)src[2];
	//if topmost bit set -> negative
	if (src[0] & 0x80 == 0x80)
	{
		*dst |= 0xFF000000;
	}
}

inline void u32_to_bigendian( uint8_t * dst, uint32_t u32)
{
	dst[0] = (u32 >> 24) & 0xFF;
	dst[1] = (u32 >> 16) & 0xFF;
	dst[2] = (u32 >> 8) & 0xFF;
	dst[3] = u32 & 0xFF;
}

inline void bigendian_to_u32( uint32_t * dst, uint8_t * src )
{
	*dst = (((uint32_t)src[0]) << 24) | (((uint32_t)src[1]) << 16) | (((uint32_t)src[2]) << 8) | (uint16_t)src[3];
}

int32_t str_to_s32( uint8_t * str );
uint32_t str_to_u32( uint8_t * str );


#ifdef __cplusplus
}
#endif

#endif /* __UTIL_STRING_H_ */
