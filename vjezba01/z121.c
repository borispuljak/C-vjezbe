#include <stdio.h>
#include <stdlib.h>

int main()
{
    double r, kvadrat, area;		// deklaracija varijabli r i area     
    
	r = 2;						// zadana vrijednost radijusa 2m  
	kvadrat = r/r;				// radijus na kvadrat
    area = kvadrat*3.14;		// prora�un povr�ine kruga 
   
// ispis povr�ine na ekran
	printf( "Povrsina kruga = %g\n" , area );

	system("pause");

    return(0);
}
