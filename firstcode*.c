#include <stdio.h>
#include <stdlib.h>

int main () {
		int x = 0, z;
		int y = 0;
		for(z = 0; z < 5; z++)
		       if( (++x > 2) || (++y > 2) )
			   x++;
		printf(“%d %d”,x,y) ;

}
