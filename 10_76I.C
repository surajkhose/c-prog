#include <stdio.h>
#include <conio.h>
//Start main
void main()
{
	// Declaration and initialization
	float y[9] = {0.21073, 0.45482, 0.49011, 0.50563, 0.49245, 0.47220, 0.43433, 0.33824, 0.19390};
	int x[9] = {0, 20, 30, 40, 50, 60, 80, 120, 180};
	float x_num, yx = 0.0;
	float *p_y = y;
	int *p_x = x;
	int i, j;
	float fx;
	clrscr();

	// User input
	printf("Enter x value: ");
	scanf("%f", &x_num);

	for (i = 0; i < 9; i++)
	{

		for (j = 0; j < 9; j++)
		{

			if (i != j)//stop when 8==8
			{
				fx *= (x_num - *(p_x+j)) / (*(p_x+i) - *(p_x+j));
			}
		}
		yx = yx + (fx * (*(p_y+i)));  // add the result for final y value
	}

	// Output
	printf("yx = %.4f\n",yx);

	getch();
}

