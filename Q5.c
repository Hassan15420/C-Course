#include <stdio.h>

int cube( int n );

int main (int argc, char *argv[]){

  int n, i, j, k, l, raman = 0, order = 0;

  printf("\nEnter a value for n:");

  scanf("%d", &n);

  /*printf("Ramanujan    First    Second    First     Second    Order\n");
  printf("   Number     Cube      Cube     Root       Root         \n");
  printf("_________    _____    ______    _____     ______    _____\n");*/

  while (raman <= n) {

    for(i = 1; i <= n; i++) {

      for(j = 1; j <= n; j++) {

        for(k = 1; k <= n; k++) {

          for(l = 1; l <= n; l++) {

            if(cube(i) + cube(j) == cube(k) + cube(l) && cube(i) + cube(j) != raman) 
			   {

               raman = cube(i) + cube(j);
               order = order + 1;

               printf("%d      %d     %d     %d     %d     %d\n", raman, cube(i), cube(j), i, j, order);
               printf("           %d     %d      %d      %d", cube(k), cube(l), k, l);
               printf("\n\n\n");

               i = n+1;
               j = n+1;
               k = n+1;
               l = n+1;
			   }
          }
        }
      }
    }
  }
  return (0);
}

int cube( int n ) {

    return (n * n * n);

}
