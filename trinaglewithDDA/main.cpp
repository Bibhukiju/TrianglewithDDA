// C program for DDA line generation
#include<stdio.h>
#include<graphics.h>

//Function for finding absolute value
int abs (int n)
{
	return ( (n>0) ? n : ( n * (-1)));
}

void DDA(int X0, int Y0, int X1, int Y1)
{
	int dx = X1 - X0;
	int dy = Y1 - Y0;

	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);


	float Xinc = dx / (float) steps;
	float Yinc = dy / (float) steps;


	float X = X0;
	float Y = Y0;
	for (int i = 0; i <= steps; i++)
	{
		putpixel (X,Y,RED);
		X += Xinc;
		Y += Yinc;

	}
}

// Driver program
int main()
{
    initwindow(800,800);
	DDA(20,200,150,190);
	DDA(150,190,40,100);
	DDA(20, 200, 40, 100);
	getch();
	return 0;
}
