#include "dessine.h"

#ifndef __GRAPHLIB_INCLUDE__
#define __GRAPHLIB_INCLUDE__
#include "../lib/graphlib/graphlib.h"
#endif

Vec2I Vector2I(int x, int y) {
	Vec2I ret;
	ret.x = x;
	ret.y = y;
	return ret;
}

void drawSquare(Vec2I coord, int size) {
	line(coord.x, coord.y, coord.x + size / 2, coord.y + size / 2);
	line(coord.x + size / 2, coord. y + size / 2, coord.x, coord.y + size);
	line(coord.x, coord.y + size, coord.x - size / 2, coord.y + size / 2);
	line(coord.x - size / 2, coord.y + size / 2, coord.x, coord.y);
}

void drawDiagonalSquare(Vec2I coord, int size) {
	drawSquare(coord, size);
	line(coord.x, coord.y, coord.x, coord.y + size);
	line(coord.x - size / 2, coord.y + size / 2, coord.x + size / 2, coord.y + size / 2);
}

void drawMosaic(Vec2I coord, int size, int width, int height) {
	int x, y;
	for(x = 0; x < width; x++) {
		for(y = 0; y < height; y++) {
			Vec2I sqCoord = Vector2I(coord.x + size * x, coord.y + size * y);
			drawSquare(sqCoord, size);
		}
	}
}

void drawMosaicOnClick(int size, int width, int height) {
	Vec2I clickCoords;
	cliquer_xy(&(clickCoords.x), &(clickCoords.y));
	drawMosaic(clickCoords, size, width, height);
}
