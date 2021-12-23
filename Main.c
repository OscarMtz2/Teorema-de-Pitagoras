#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	float A = 0, B = 0, suma = 0, raiz = 0;
	int op, i = 1;
	
	
	while(i == 1){
		system("cls");
		printf("\tMenu\n");
		printf("1. Realizar operaciones para Hipotenusa.\n");
		printf("2. Realizar operaciones para lado A.\n");
		printf("3. Realizar operaciones para lado B.\n");
		printf("4. Salir\nOpcion: ");
		scanf("%d", &op);
	    
		switch(op){
			
			case 1:
				printf("\n\tTeorema de pitagoras\n\n");
				printf("Ingrese el valor del lado A: ");
				scanf("%f", &A);

				printf("Ingrese el valor del lado B: ");
				scanf("%f", &B);
	
				printf("\n");
 			if(A > B){
 				A = pow(A,2);  B = pow(B,2);
 	   			suma = A + B;
 	    		raiz = sqrt(suma);
 	    		printf("Hipotenusa: %.2f, Lado A: %.2f, Lado B: %.2f.\n",suma, A,B);
 	   	   	    printf("%.2f = %.2f", raiz = pow(raiz,2), A + B);
		   	}else{
	 			A = pow(A,2);  B = pow(B,2);
 	    		suma = B - A;
 	   		 	raiz = sqrt(suma);
 	    		printf("Hipotenusa: %.2f, Lado A: %.2f, Lado B: %.2f.\n",suma, B,A);
 	    		printf("%.2f = %.2f", raiz = pow(raiz,2), B - A);
	 		}
	 
			break;
			
			case 2:
				do{
				system("cls");
				printf("\n\tTeorema de pitagoras\n\n");
				printf("Ingrese valor de la Hipotenusa: ");
				scanf("%f", &A);
				printf("Ingrese el valor del lado B: ");
				scanf("%f", &B);
				
				printf("\n");
				if(A > B){
				
				A = pow(A,2); B = pow(B,2);
				suma = A - B;
				raiz = sqrt(suma);
				printf("Hipotenusa: %.2f, Lado B: %.2f, Lado A: %.2f\n", A, B, raiz);
				printf("%.2f = %.2f", suma, pow(raiz,2));
				}
				else{
					printf("La hipotenusa no puede ser menor que lado B.\n\n");
					system("pause");
				}
				
				}while(B > A);
			break;
			
			case 3:
			do{
				system("cls");
				printf("\n\tTeorema de pitagoras\n\n");
				printf("Ingrese valor de la Hipotenusa: ");
				scanf("%f", &A);
				printf("Ingrese el valor del lado A: ");
				scanf("%f", &B);
				printf("\n");
				
			if(A > B){
				A = pow(A,2); B = pow(B,2);
				suma = A - B;
				raiz = sqrt(suma);
				printf("Hipotenusa: %.2f, Lado A: %.2f, Lado B: %.2f\n", A, B, raiz);
				printf("%.2f = %.2f", suma, pow(raiz,2));
			}
			else{
				printf("La hipotenusa no puede ser menor que lado A.\n\n");
				system("pause");
			}
			
	    	}while(B > A);
			break;
			
			
			case 4:
			i = 0;
			break;
			 
		}
		printf("\n\n");
		system("pause");
	}
	
	return 0;
}
