#pragma once
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
struct point { int32_t x, y; };
struct rect
{
	struct point a, b;
};
extern bool rect_load(FILE *f, struct rect *r);
