## Usage:
```c
#include "mopengl.c"
...
int ok = mgl_init((mgl_get_proc_address_t) SDL_GL_GetProcAddress);
if (!ok) {
  SDL_Log("%s", "couldnt load some of my functions... sad day ;(");
}
```
not so good of an error handling i know, i have ideas for how it can be better, so you can know exactly what functions didnt load, by having them all in some kinda array that you can enumerate through or something, tho idk how much of a use it is, cuz like, if you targeting smth that doesnt support gl46 (which is kinda ancient) i dont think you should be using this thingie. also this wont work for macos, cuz mac just capped out at 4.1, soo you kinda just wanna use metal if you can, or rly anything but opengl tbh, this is more like just for toying around with thingies, and when just toying around you might as well use modern gl, plus would be nice to get an idea of what a gl function does just by reading function name instead of having to had docs.gl open all the time cuz the naming for most of gl DSA functions are hilariously bad! and so this is why this thing exists, enjoy! :)
