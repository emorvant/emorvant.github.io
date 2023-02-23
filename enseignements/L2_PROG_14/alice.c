/** corection du code de Alice - TP1 */

#include <stdio.h>
#include <stdlib.h>


int usage(char * nom){
   printf("Usage : %s <entier> <limite>, <limite> <= 100\n",nom);
   exit(-1);
}

/**********************
 *Fonction principale *
 **********************/

int main (int argc, char *argv[]){
  int n,i,limite;
  if (argc<2){
    usage(argv[0]);
    exit(-1);
  }
  if(argc==2){
    limite=10;
  }
  else{
    limite=atoi(argv[2]);
  }
  n=atoi(argv[1]);
  if (limite > 100){
    usage(argv[0]);
  }
  printf("Table de %d : ",n);
 
  /*************/
  i=1;
  while(i<=limite){
    printf("%d ",i*n);
    i++;
  }
  /************/
  /* la boucle while est equivalente à : */
  /*
 
  for(i=1 ;i<=limite ;  i++){
      printf("%d ",i*n);
  }
 
  */
 
  /*************/

  printf("\n");
}












