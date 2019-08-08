
#include <stdio.h>

void main()
{
	int num,SH,SM,EH,EM,z,i,x,y;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
	    
	   scanf("%d %d %d %d",&SH,&SM,&EH,&EM);
	  x=60-SM;
	  //printf("%d",x);
	  y=x+EM;
	 if(y<60)
	 {
	      z=EH-(SH+1);
	 }
	 else
	 {
	  z=EH-SH;
	  y=y-60;
	 }
	
	   printf("%d %d\n",z,y);
	
    }
}
