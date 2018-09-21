#ifndef __VEC2I__
#define __VEC2I__
typedef struct Vec2I {
	int x, y;
} Vec2I;

Vec2I Vector2I(int x, int y);

#endif

#ifndef __DRAW_UTILS__
#define __DRAW_UTILS__

void drawSquare(Vec2I coord, int size);

void  drawDiagonalSquare(Vec2I coord, int size);

void drawMosaic(Vec2I coord, int size, int width, int height);

void drawMosaicOnClick(int size, int width, int height);

#endif
