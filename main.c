/*
 * Car_Static_Design.c
 *
 * Created: 2/15/2020 9:27:58 PM
 * Author : Khaled Magdy
 */ 

#include "car_sm.h"

int main(void)
{
	Car_SM_Init();
	
    while(1) 
    {
		Car_SM_Update();
    }
	return 0;
}
