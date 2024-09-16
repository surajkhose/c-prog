 //***************************************************************************
 //--This Program is Devloped for Re-assign Floating Point value to pointer---
 //-------------------Devloped by Suraj on 23 Aug 2024------------------------
 //***************************************************************************

#include<stdio.h>
#include<conio.h>
//Start Main
void main()
{
	//Declaration
	float v = 0.3;
	float *pt =&v;
	clrscr();

	printf("************************************************************************");
	printf("\n----This Program is Devloped for Re-assign Floating Point value to-----");
	printf("\n-------------------Devloped by Suraj on 23 Aug 2024--------------------");
	printf("\n***********************************************************************");

	printf("\n\nBefore Reassign Value");
	printf("\n*pt= %.1f  v= %.1f", *pt, v);
	*pt = 0.0;
	printf("\n\nAfter Reassign Value");
	printf("\n*pt= %.1f  v= %.1f", *pt, v);

	getch();

}//End Main
