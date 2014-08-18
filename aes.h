#ifndef AES_H
#define AES_H

#include <stdint.h>

typedef uint8_t byte;
typedef uint32_t word;

#define Nk 4
#define Nb 4
#define Nr 10

#define KEYSIZE (4*Nk)
#define BLKSIZE (4*Nb)

typedef struct {
  word w[Nb*(Nr+1)];
} aes_ctx;

void aes_init(aes_ctx *ctx, byte key[4*Nk]);
void aes_encrypt(aes_ctx *ctx, byte in[4*Nb], byte out[4*Nb]);

#endif
