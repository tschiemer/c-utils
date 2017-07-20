
util-hex
______________

```c
  void byte_to_hex( uint8_t * hex, uint8_t * byte, uint8_t len );
  void byte_to_hex_lowercase( uint8_t * hex, uint8_t * byte, uint8_t len );
  bool is_valid_hex( uint8_t * hex, uint8_t byteLen );
  bool hex_to_byte( uint8_t * byte, uint8_t * hex, uint8_t byteLen);
```


util-string
______________

```c
  // functions to get/set big-endian integer values
  inline void u16_to_byte( uint8_t * dst, uint16_t u16);
  inline void byte_to_u16( uint16_t * dst, uint8_t * src );
  inline void u24_to_byte( uint8_t * dst, uint32_t u24)
  inline void byte_to_u24( uint32_t * dst, uint8_t * src )
  inline void s24_to_byte( int8_t * dst, int32_t s24 )
  inline void byte_to_s24( int32_t * dst, uint8_t * src )
  inline void u32_to_byte( uint8_t * dst, uint32_t u32);
  inline void byte_to_u32( uint32_t * dst, uint8_t * src );

  int32_t str_to_s32( uint8_t * str );
  uint32_t str_to_u32( uint8_t * str );
```
