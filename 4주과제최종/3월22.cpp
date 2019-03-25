#include "pch.h"
#include <iostream>
#include <stdio.h>
#include<CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")
#include <math.h>

int main()
{
	
	BlockID 돌 = createBlock(BLOCK_STONE);
	double pi = 3.14159265358979323846;
	int px, py, pz;

	getPlayerLocation(&px, &py, &pz);
	double dir = getPlayerDirection();
	double radian = dir * pi / 180.;
	int dx = -150 * sin(radian);
	int dz = 150 * cos(radian);
	px += dx;
	pz += dz;
	//printf("x,y,z 좌표를 입력하시요  (예:100,4,200)  ");
	//scanf_s("%d, %d, %d" ,&px, &py, &pz);

	px = 105;
	py = 4;
	pz = 104;

	//locateBlock(돌, px, py, pz);

	printf("%d %d %d \n", px, py, pz);

	WoodID zero = createWool(COLOR_WHITE);
	WoodID one = createWool(COLOR_ORANGE);
	WoodID two = createWool(COLOR_MAGENTA);
	WoodID three = createWool(COLOR_LIGHT_BLUE);
	WoodID four = createWool(COLOR_YELLOW);
	WoodID five = createWool(COLOR_LIME);
	WoodID six = createWool(COLOR_PINK);
	WoodID seven = createWool(COLOR_GRAY);
	WoodID eight = createWool(COLOR_PURPLE);
	WoodID nine = createWool(COLOR_BROWN);


	locateBlock(zero, px, py, pz);
	locateBlock(zero, px + 1, py, pz);
	locateBlock(zero, px + 2, py, pz);
	locateBlock(zero, px, py, pz + 1);
	locateBlock(zero, px + 2, py, pz + 1);
	locateBlock(zero, px, py, pz + 2);
	locateBlock(zero, px + 2, py, pz + 2);
	locateBlock(zero, px, py, pz + 3);
	locateBlock(zero, px + 2, py, pz + 3);
	locateBlock(zero, px + 2, py, pz + 4);
	locateBlock(zero, px + 1, py, pz + 4);
	locateBlock(zero, px, py, pz + 4);
	locateBlock(zero, px, py, pz);

	px = px + 6;
	locateBlock(one, px, py, pz);
	locateBlock(one, px, py, pz + 2);
	locateBlock(one, px, py, pz + 3);
	locateBlock(one, px, py, pz + 4);
	locateBlock(one, px, py, pz + 1);

	px = px + 4;
	locateBlock(two, px, py, pz);
	locateBlock(two, px + 1, py, pz);
	locateBlock(two, px + 2, py, pz);
	locateBlock(two, px + 2, py, pz + 1);
	locateBlock(two, px, py, pz + 2);
	locateBlock(two, px + 1, py, pz + 2);
	locateBlock(two, px + 2, py, pz + 2);
	locateBlock(two, px, py, pz + 3);
	locateBlock(two, px, py, pz + 4);
	locateBlock(two, px + 1, py, pz + 4);
	locateBlock(two, px + 2, py, pz + 4);

	px = px + 5;

	locateBlock(three, px, py, pz);
	locateBlock(three, px + 1, py, pz);
	locateBlock(three, px + 2, py, pz);
	locateBlock(three, px + 2, py, pz + 1);
	locateBlock(three, px, py, pz + 2);
	locateBlock(three, px + 1, py, pz + 2);
	locateBlock(three, px + 2, py, pz + 2);
	locateBlock(three, px + 2, py, pz + 3);
	locateBlock(three, px, py, pz + 4);
	locateBlock(three, px + 1, py, pz + 4);
	locateBlock(three, px + 2, py, pz + 4);


	px = px + 5;


	locateBlock(four, px, py, pz);
	locateBlock(four, px + 2, py, pz);
	locateBlock(four, px, py, pz + 1);
	locateBlock(four, px + 2, py, pz + 1);
	locateBlock(four, px, py, pz + 2);
	locateBlock(four, px + 1, py, pz + 2);
	locateBlock(four, px + 2, py, pz + 2);
	locateBlock(four, px + 2, py, pz + 3);
	locateBlock(four, px + 2, py, pz + 4);


	px = px + 5;

	locateBlock(five, px, py, pz);
	locateBlock(five, px + 1, py, pz);
	locateBlock(five, px + 2, py, pz);

	locateBlock(five, px, py, pz + 1);
	locateBlock(five, px, py, pz + 2);
	locateBlock(five, px + 1, py, pz + 2);
	locateBlock(five, px + 2, py, pz + 2);
	locateBlock(five, px + 2, py, pz + 3);
	locateBlock(five, px, py, pz + 4);
	locateBlock(five, px + 1, py, pz + 4);
	locateBlock(five, px + 2, py, pz + 4);




	px = px + 5;
	locateBlock(six, px, py, pz);
	locateBlock(six, px + 1, py, pz);
	locateBlock(six, px + 2, py, pz);
	locateBlock(six, px, py, pz + 1);
	locateBlock(six, px, py, pz + 2);
	locateBlock(six, px + 1, py, pz + 2);
	locateBlock(six, px + 2, py, pz + 2);
	locateBlock(six, px, py, pz + 3);
	locateBlock(six, px + 2, py, pz + 3);
	locateBlock(six, px, py, pz + 4);
	locateBlock(six, px, py, pz + 4);
	locateBlock(six, px + 1, py, pz + 4);
	locateBlock(six, px + 2, py, pz + 4);

	px = px + 5;

	locateBlock(seven, px, py, pz);
	locateBlock(seven, px + 1, py, pz);
	locateBlock(seven, px + 2, py, pz);
	locateBlock(seven, px, py, pz + 1);
	locateBlock(seven, px + 2, py, pz + 1);
	locateBlock(seven, px, py, pz + 2);
	locateBlock(seven, px + 2, py, pz + 2);
	locateBlock(seven, px + 2, py, pz + 3);
	locateBlock(seven, px + 2, py, pz + 4);


	px = px + 5;

	locateBlock(eight, px, py, pz);
	locateBlock(eight, px + 1, py, pz);
	locateBlock(eight, px + 2, py, pz);
	locateBlock(eight, px, py, pz + 1);
	locateBlock(eight, px + 2, py, pz + 1);
	locateBlock(eight, px, py, pz + 2);
	locateBlock(eight, px + 1, py, pz + 2);
	locateBlock(eight, px + 2, py, pz + 2);
	locateBlock(eight, px, py, pz + 3);
	locateBlock(eight, px + 2, py, pz + 3);
	locateBlock(eight, px, py, pz + 4);
	locateBlock(eight, px + 1, py, pz + 4);
	locateBlock(eight, px + 2, py, pz + 4);


	px = px + 5;

	locateBlock(nine, px, py, pz);
	locateBlock(nine, px + 1, py, pz);
	locateBlock(nine, px + 2, py, pz);
	locateBlock(nine, px, py, pz + 1);
	locateBlock(nine, px + 2, py, pz + 1);

	locateBlock(nine, px, py, pz + 2);
	locateBlock(nine, px + 1, py, pz + 2);
	locateBlock(nine, px + 2, py, pz + 2);
	locateBlock(nine, px + 2, py, pz + 3);
	locateBlock(nine, px + 2, py, pz + 4);
	locateBlock(nine, px, py, pz);
	locateBlock(nine, px, py, pz);


	return 0;
}