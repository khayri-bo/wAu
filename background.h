#include <SDL/SDL.h>
#define CAMERA_W 100
#define CAMERA_H 200
struct background
{
SDL_Rect bck;
SDL_Surface *img;
};
typedef struct background background;
void initBackground (background * b, char url[]);
void showBacckground (SDL_Surface * screen, background b);
void scrollToLeft (background * b);
void scrollToRight (background * b);


#endif
