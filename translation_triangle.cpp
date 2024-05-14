#include <graphics.h>
#include <stdio.h>
int main() 
{ 
    // gm is Graphics mode which is 
    // a computer display mode that 
    // generates image using pixels. 
    // DETECT is a macro defined in 
    // "graphics.h" header file 
    int gd = DETECT, gm, dx, dy; 
  
    // coordinates of polygon 
    int arr[] = {320, 150, 400, 250,  
                 250, 350, 320, 150}; 
  
    // initgraph initializes the 
    // graphics system by loading a 
    // graphics driver from disk 
    initgraph(&gd, &gm, ""); 
  
    // drawpoly function 
    
    drawpoly(4, arr); 
    
    
  	printf("Enter the translating factor for x: ");
	scanf("%d",&dx);
	printf("Enter the translating factor for y: ");
	scanf("%d",&dy);
	
	int arr1[] = {320+dx, 150+dx, 400+dx, 250+dx,  
                 250+dy, 350+dy, 320+dy, 150+dy}; 
   //setfillstyle(SOLID_FILL, BLUE);
   drawpoly(4, arr1); 
  //setfillstyle(SOLID_FILL, BLUE);
  
  

  
    getch(); 
  
    // closegraph function closes the 
    // graphics mode and deallocates 
    // all memory allocated by 
    // graphics system . 
    closegraph(); 
  
    return 0; 
}
