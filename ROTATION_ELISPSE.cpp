#include <graphics.h>
#include <stdio.h>
#include<math.h>
int main() 
{ 
    // gm is Graphics mode which is 
    // a computer display mode that 
    // generates image using pixels. 
    // DETECT is a macro defined in 
    // "graphics.h" header file 
    int gd = DETECT, gm, dx, dy; 
  
    
    initgraph(&gd, &gm, ""); 
    int x1= 150, y1 = 150, x2=1, y2= 360, x3= 60, y3=100, A,c, s;
    
    // ellipse
    
    setfillstyle(SOLID_FILL, BLUE);
    ellipse(x1, y1, x2, y2, x3, y3); 
    
  
  	printf("Enter the angle through which you want to rotate: ");
	scanf("%lf",&A);
	c = cos(A*3.14/180);  
    s = sin(A*3.14/180);  
    x1 = floor(x1 * c + y1 * s);  
    y1 = floor(-x1 * s + y1 * c);  
    x2 = floor(x2 * c + y2 * s);  
    y2 = floor(-x2 * s + y2 * c);  
    x3 = floor(x3 * c + y3 * s);  
    y3 = floor(-x3 * s + y3 * c); 
  
 
 
    ellipse(x1, y1, x2, y2, x3, y3); 
    
    

  
    getch(); 
  
    // closegraph function closes the 
    // graphics mode and deallocates 
    // all memory allocated by 
    // graphics system . 
    closegraph(); 
  
    return 0; 
}
