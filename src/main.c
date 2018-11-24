/  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"

#define SEUIL  50
#define SEUILB -100
#define SEUILH 200


int main(void)

{
	unsigned char bin[10]= {25, 120, 65, 85,12,89,200,6,245,180};
	int sat[10]= {152, 25,-65,-125,241, 121,-250,-123, 15,99};
	int dist[10]= {1,5,7,15,22,45,50,69,80};
	int distance;
	int A[6]= {1,13,3,8,5,11};
	int B[6]= { 1,2,3,4,5,6};
	int mirroir[4]={6,3,0,0};
	int i, i2,i3,i4,i5,n;
	
	// exo56_1
	
	for (i =0; i<10; i++)
		
	{
		if(bin[i] < SEUIL)
        
		{
			bin[i] = 0;
		}
		
		else

        {
			bin[i]=1;
        }
	}
	//  exo56_2 
	
	for(i2=0; i2<10; i2++)
		
	{
		if(sat[i2]>SEUILH)
		
		{
			sat[i2]=SEUILH;
		}
		
		
		else if(sat[i2]<SEUILB)

		{
			sat[i2]=SEUILB;
		}
	}
	// exo56_3 
	
	for(i3=9;i3>0;i3--)
	
	{
		distance = abs( (dist[i3]-dist[i3-1]));
		dist[i3] = distance;			  
	}
	
	//exo56_4
	
	
	for(i4=0;i4<6;i4++)

	{
		B[i4]=A[5-i4];
	}
	
	//exo56_5
	
	for(i5=0;i5<2;i5++)
	{
		mirroir[i5+2]=mirroir[1-i5];
	}
	
		return 0; 
}
