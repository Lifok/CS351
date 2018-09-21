
#include "dessine.h"

#ifndef __GRAPHLIB_INCLUDE__
#define __GRAPHLIB_INCLUDE__
#include "../lib/graphlib/graphlib.h"
#endif

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define WINDOW_TITLE "Mosaiques"

#define SQUARE_SIZE 20


int main() {
  Vec2I clickCoord;

  gr_inits_w(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);
  Vec2I coord = Vector2I(SQUARE_SIZE + SQUARE_SIZE / 2, SQUARE_SIZE);
  set_blue();
  drawMosaic(coord, SQUARE_SIZE, WINDOW_WIDTH / SQUARE_SIZE - 2, WINDOW_HEIGHT / SQUARE_SIZE - 2);

  // This is just to keep the window open, we could use X11 events but i'm too lazy for...
  do {
      cliquer_xy(&(clickCoord.x), &(clickCoord.y));
  } while (clickCoord.x != -1 && clickCoord.y != -1);
  // The mouse cannot click at coords (-1,-1), this is kinda hack... :)
  gr_close();
}
