#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


int main (){
setlocale(LC_ALL, "Portuguese");
	
float prova1, prova2, pim, result;


printf("Digite a nota da primeira prova: ");
scanf("%f", & prova1);

printf("\n\n");

printf("Digite a nota da segunda prova: ");
scanf("%f", & prova2);

printf("\n\n");

printf("Digite a nota do pim: ");
scanf("%f", & pim);

printf("\n\n");


result = ((prova1 * 4) + (prova2 * 4 )+ (pim * 2))/10;

printf("A media do aluno(a) e: %.2f" , result );

}
