#include "pch.h"
#include <iostream>
#include<coalamod.h>
#pragma comment(lib, "coalamod.lib")
int main()
{

	BlockID stone = createBlock(BLOCK_STONE);
	
		
		int ex, ey, ez;
		int sx, sy, sz;
		int kx, ky, kz;
		scanf_s("%d %d %d %d %d %d", &sx, &sy, &sz, &ex, &ey, &ez);

		if (ex > sx) {
			kx = ex - sx;
		}
		else {

			kx = sx - ex;
		}
		if (ey > sy) {
			ky = ey - sy;

	}
		else { ky = sy - ey; }
		
		if (ez > sz) {
			kz = ez - sz;

		}
		else {
			kz = sz - ez;

		}
		
	int x, y, z;

	int a, b, c;
	if(ex>sx){
		a = sx;
	}
	else {
		a = ex;
	
	}
	if (ey > sy) {
		b = sy;
	}
	else {
		b = ey;

	}
	if (ez > sz) {
		c = sz;
	}
	else {
		c = ez;
	}

	for (y = 0; y <= ky; y++) {
		for (z = 0; z <= kz; z++) {
			for (x = 0; x <= kx; x++ ) {
				locateBlock(stone, a + x, b + y, c + z);
				


			}  
	}
		
	}

	//int ex, ey, ez;
	//int sx, sy, sz;
	//int kx, ky, kz;
	//scanf_s("%d %d %d %d %d %d", &sx, &sy, &sz, &ex, &ey, &ez);


		

			




	
}