#define _CRT_SECURE_NO_WARNINGS /* služi da nam Visual Studio ne pokazuje
                                   grešku da koristimo nesigurne
								   funkcije */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, k, nfact;       /* deklaracija potrebnih varijabli*/

   	/* dio 1*/
   	scanf("%d", &n); 

   	/* dio 2 */
   	nfact = 1;                   /* korak 2.1   */
   	k = 1;                       /* korak 2.2   */
   	while ( k < n) {             /* korak 2.3   */
       		k = k + 1; 
       		nfact = k * nfact;    
   	}                            

   	/* dio 3 */
   	printf("Vrijednost %d! iznosi: %d\n", n, nfact);

	system("pause");

   	return(0);
}
