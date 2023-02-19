#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point char
 *
 * Return: Always 0 (Success)
 */


/*
 ** let x , y, z, i = 0;
         * 00 01,to 00 zz
         * 01 02, 01 zz
         * 02 03, zz
         * 66 67, 66 zz
         * z7 78, z7 zz,
         * z8 zz
         * 
         * while(x > z){
         *      while(y > z)
         *              while(z > z)
         *                      while(i > z)
         *                              if(x == z , y == z)
         *                                      putchar(z)
         *                                      putchar(z)
         *                                      brack;
         *
         *                              if(x<=z && y < i)
         *                              putchar(x)
         *                              putchar(y)
         *                              putchar(' )
         *                              putchar(z)
         *                              putchar(i)

         *
 *
 */

int main(void)
{
	int x , y, z, i ;
	/*x = y = z =i='0';*/
	for (x = '0' ; x <= '9' ; x++)
	{
		for (y = '0' ; y <= '9'; y++)
		{
			for (z = '0' ; z <= '9'; z++)
			{
				for (i = '0' ; i <= '9'; i++)
				{
					
					if(((x <= z ) && ((i + z) > (x + y))) || z > x)
					{
						putchar(x);
                                                putchar(y);
						if ((x == '9') && (y == '9'))
                                        	{
                                                	break;
                                        	}
						putchar(' ');
						putchar(z);
						putchar(i);
						putchar(',');
						putchar(' ');
					}

				}
			}
		}
			
	}
	putchar('\n');
	return (0);
}



/*for (x = '0' ; x <= '9' ; x++)
{
	for (y = '0' ; y <='9';y++)
	{
		for (z = '0' ; z <='9';z++)
		{
			for (i = '0' ; i <='9';i++)
			{
				
				if ((x == 'z') && (y == 'z'))
				{
					putchar(x );
					putchar(y);
					break;
				}
				if((x <= z )&& (y < i) )
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(z);
					putchar(i);
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
		
}*/
