#include <stdio.h>
#include <string.h>

//Programa de ayuda a Arely con mejora

int main()
{
  int n;
  int m;
  int o;
  char nombre[3][5][25];
  printf("Ingrese el nombre de 5 prsonas \n");

  for(n=0;n<5;n++){

    printf("Persona no. %i\n", n+1);
    for(m=0;m<3;m++){
      if(m==0)
        printf("Nombre: ");
      else
        if(m==1)
          printf("Apellido Paterno: ");
      else
        if(m==3)
          printf("Apellido Materno");
      gets(nombre[m][n]);
    }
  }
  printf("Los apellidos paternos son: \n");
  for(n=0;n<5;n++)
    printf("%i) %s \n", n+1, nombre[1][n]);
  return 0;
}
