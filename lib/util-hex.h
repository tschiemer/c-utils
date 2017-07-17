#ifndef __UTIL_HEX_H_
#define __UTIL_HEX_H_

#ifdef __cplusplus
 extern "C" {
#endif

#include <stdbool.h>
#include <stdint.h>

void byte_to_hex( uint8_t * hex, uint8_t * byte, uint8_t len );
void byte_to_hex_lowercase( uint8_t * hex, uint8_t * byte, uint8_t len );
bool is_valid_hex( uint8_t * hex, uint8_t byteLen );
bool hex_to_byte( uint8_t * byte, uint8_t * hex, uint8_t byteLen);

#ifdef __cplusplus
}
#endif

#endif /* __UTIL_HEX_H_ */
