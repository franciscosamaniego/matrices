#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  //los argumentos
  int n = atoi(argv[1]);
  double p = atof(argv[2]);
  // el tablero
  int a[n][n];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      int r = rand() % 100;
      double mina = r / 100.0;
      if(mina <= p) {
        a[i][j] = 9;
    } else {
    a[i][j] = 0;
  }
 }
}
//poner cantidad de minas alrededor

//imprimir el tablero
for(int i = 0; i < n; i++) {
  for(int j = 0; j < n; j++) {
    printf("%d ", a[i][j]);
  }
  printf("\n");
}
  return 0;
}
