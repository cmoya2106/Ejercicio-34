//Carlos Moya y Manuel Rodriguez.
//Ejercicio 34

#include <stdio.h>
#include <math.h>
int main(){
	int num, suma = 0; 
	printf("Ingrese un numero ");
	scanf("%d", &num);
	
	while(num > 0)
	{ 
		suma = suma + num%10; 
		num = num/10;
	}
	printf("La suma de los digitos del numero es: %d", suma);
	return 0;
	
}


	
	
