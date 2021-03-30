#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "background.h"
void initBackground (background * b){
b->img = IMG_Load ("backgroundd.png");
b->bck.x = 0;
b->bck.y = 0;
b->bck.w = b->img->w;
b->bck.h = b->img->h;
}
void showBackground (SDL_Surface * screen, background b){
  SDL_BlitSurface(b->img,&b->camera,screen,NULL);

}
void scrollToLeft (background * b){
if (b->bck.x != 0)
b->bck.x--;
}
void scrollToRight (background * b){
if (b->bck.w - b->bck.x != CAMERA_W)
b->bck.x++;
}
