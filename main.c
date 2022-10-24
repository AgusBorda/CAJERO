#include <stdio.h>
#include <stdlib.h>





void menu();
void depositar(int cantidad);
void retirar(int cantidad);

int saldoActual=100;
int cantidad;

int main()
{
    menu();
    return 0;
}
void menu(){
   int opc;
   while(opc!=4){
   printf("\n1. Consultar saldo");
   printf("\n2. depositar");
   printf("\n3. Retirar");
   printf("\n4. Salir");
   printf("\nIngrese una opcion: ");
   scanf("%i", &opc);

   switch(opc){
   case 1: printf("\nTu saldo actual es de %i", saldoActual);
   break;

   case 2: printf("\nCuanto dinero desea depositar?: ");
   scanf("%i", &cantidad);
   depositar(cantidad);
   break;

   case 3:printf("\nCuanto dinero desea retirar?: ");
   scanf("%i", &cantidad);
   retirar(cantidad);
   break;

   case 4:
   break;

   default: printf("\nOpcion no valida :/");

   }
}
}
void depositar(int cantidad){
   saldoActual += cantidad;
   printf("\nDEPOSITO CON EXITO");
   printf("\nHas depositado %i, saldo actual %i", cantidad, saldoActual);

}
void retirar(int cantidad){
   if(cantidad<=saldoActual){
    saldoActual -= cantidad;
    printf("\nRETIRADO CON EXITO");
    printf("\nHas retirado %i, saldo actual %i", cantidad, saldoActual);
   }
   else{
    printf("\nNo tienes suficiente dinero, tu saldo actual es de %i", saldoActual);
   }
}
