#include "aes.h"

byte key[] = {
  0x41, 0x41, 0x41, 0x41,
  0x41, 0x41, 0x41, 0x41,
  0x41, 0x41, 0x41, 0x41,
  0x41, 0x41, 0x41, 0x41
};

aes_ctx ctx;

void setup(void)
{
  aes_init(&ctx, key);
}

void loop(void)
{
  byte in[BLKSIZE];
  byte out[BLKSIZE];
  if (Serial.available() >= sizeof in) {
    Serial.readBytes(in, sizeof in);
    aes_encrypt(&ctx, in, out);
    Serial.write((char *)out, sizeof out);
  }
}
