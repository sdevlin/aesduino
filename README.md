This is simple AES server for Arduino. It reads a plaintext block from
the serial input, encrypts it, and writes it back to the serial
output.

The encryption key is baked in:

    0x41414141414141414141414141414141

We follow the dumb convention of naming Arduino projects with a stupid
pun on "Arduino".
