#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "portuguese");
int p1, p2;
float vInteiro, vF;

//v = valor

printf("Informe o valor total do produto: ");
scanf("%f", &vInteiro);

p1 = vInteiro/3;
p2 = p1;

vF = vInteiro - (p1 + p2);

printf ("Valor da entrada: %.2f", vF);
printf("\nValor da 1� presta��o: %d", p1); 
printf("\nValor da 2� presta��o: %d", p2);
	
	
	
	return 0;
}
