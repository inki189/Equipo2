#include <stdio.h>

/*
Ejercicio 32
Autor Erick Cardenas
*/
int main(int argc, char *argv[]) {
	//se inicializan las variables Suma, a�oA y a�o2B
	int suma=0;
	int yearA=0;
	int yearB=0;
	//se pregunta el a�o de inicio (a�oA)
	printf("Introduce el a�o de inicio\n");
	//se guarda el valor de a�o A
	scanf("%d",&yearA);
	//se pregunta el a�o a finalizar (a�oB)
	printf("Introduce el a�o final\n");
	//se guarda el valor de a�oB
	scanf("%d",&yearB);
	//se inicia un for con inicio en a�oA y finalizacion en a�oB
	for(int i=yearA;i<=yearB;i++)
	{
		//condicion para saber si los a�os son biciestos (cada 4 a�os) y si estan entre los parametros
		if(i%4==0&yearA!=i&yearB!=i)
		{
			//se incrementa el valor del contador de biciestos
			suma++;
		}
	}
	//se imprime el numero de biciestos
	printf("El numero de a�os biciestos entre el a�o %d y %d es :\n %d ",yearA,yearB,suma);
	return 0;
}

/*Q\A: El programa funcion correctamente ya que te dice los a�os
biciestos que hay entre los a�os que introduces sin tomar
encuenta si el a�o inicial es biciesto, en el caso 1:
los datos de entrada fueron 1900 y 2000 y el dato de salida
fue 24 y en en el caso 2 los datos de entrada fueron 1900 y 
2018 y el dato  de salida fue 29. Q\A realizado por Carlos Eduardo Avila Criollo(Equipo 5 "dinamita"*/

