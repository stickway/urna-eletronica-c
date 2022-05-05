// Urna eletrônica em C

#include <stdio.h>

int main() {

// Variáveis

	int c1 = 0;
	int c2 = 0;
	int c3 = 0;
	int c4 = 0;
	int brancos = 0;
	int nulos = 0;
	int voto = 0;
	

// Começo do programa

	printf("== Eleição para o Grêmio Estudantil do IFSULDEMINAS 2022 ==\n");
	printf("Atenção! Digite o número do candidato para o voto ser computado\n\n");
	printf("Os números para a votação são:\n\nMarisa Mirandela ~> 1\nClarisse Mourato ~> 2\nBernardo Leme ~> 3\nLorena Lagoa ~> 4\nVoto em Branco ~> 0\n\n");
	printf("=================================\n");

// Eleitor 1

	printf("Digite a numeração de seu voto: ");
	scanf("%d", &voto);
	
	if(voto == 1) {
		c1 = c1 + 1;
	}
	else if(voto == 2) {
		c2 = c2 + 1;
	}
	else if(voto == 3) {
		c3 = c3 + 1;
	}
	else if(voto == 4) {
		c4 = c4 + 1;
	}
	else if(voto == 0) {
		brancos = brancos + 1;
	}
	else {
		nulos = nulos + 1;
	}
	

// Eleitor 2

printf("Digite a numeração de seu voto: ");
	scanf("%d", &voto);
	
	if(voto == 1) {
		c1 = c1 + 1;
	}
	else if(voto == 2) {
		c2 = c2 + 1;
	}
	else if(voto == 3) {
		c3 = c3 + 1;
	}
	else if(voto == 4) {
		c4 = c4 + 1;
	}
	else if(voto == 0) {
		brancos = brancos + 1;
	}
	else {
		nulos = nulos + 1;
	}
	

// Eleitor 3

printf("Digite a numeração de seu voto: ");
	scanf("%d", &voto);
	
	if(voto == 1) {
		c1 = c1 + 1;
	}
	else if(voto == 2) {
		c2 = c2 + 1;
	}
	else if(voto == 3) {
		c3 = c3 + 1;
	}
	else if(voto == 4) {
		c4 = c4 + 1;
	}
	else if(voto == 0) {
		brancos = brancos + 1;
	}
	else {
		nulos = nulos + 1;
	}
	

// Eleitor 4

printf("Digite a numeração de seu voto: ");
	scanf("%d", &voto);
	
	if(voto == 1) {
		c1 = c1 + 1;
	}
	else if(voto == 2) {
		c2 = c2 + 1;
	}
	else if(voto == 3) {
		c3 = c3 + 1;
	}
	else if(voto == 4) {
		c4 = c4 + 1;
	}
	else if(voto == 0) {
		brancos = brancos + 1;
	}
	else {
		nulos = nulos + 1;
	}


// Eleitor 5

printf("Digite a numeração de seu voto: ");
	scanf("%d", &voto);
	
	if(voto == 1) {
		c1 = c1 + 1;
	}
	else if(voto == 2) {
		c2 = c2 + 1;
	}
	else if(voto == 3) {
		c3 = c3 + 1;
	}
	else if(voto == 4) {
		c4 = c4 + 1;
	}
	else if(voto == 0) {
		brancos = brancos + 1;
	}
	else {
		nulos = nulos + 1;
	}

	
// Resultado da votação

	printf("\n");
	printf("Apuração de votos:\n\n");
	printf("Votos em Marisa Mirandela: %d\n", c1);
	printf("Votos em Clarisse Mourato: %d\n", c2);
	printf("Votos em Bernardo Leme: %d\n", c3);
	printf("Votos em Lorena Lagoa: %d\n", c4);
	printf("Votos em Branco: %d\n", brancos);
	printf("Votos Nulos: %d\n", nulos);
	printf("\n");
	if(c1 > c2 && c1 > c3 && c1 > c4){
		printf("Candidata Marisa Mirandela venceu com %d votos\n", c1);
	}
	else if(c2 > c1 && c2 > c3 && c2 > c4){
		printf("Candidata Clarisse Mourato venceu com %d votos\n", c2);
	}
	else if(c3 > c2 && c3 > c1 && c3 > c4){
		printf("Candidato Bernardo Leme venceu com %d votos\n", c3);
	}
	else if(c4 > c2 && c4 > c3 && c4 > c1){
		printf("Candidata Lorena Lagoa venceu com %d votos\n", c4);
	}
	else {
		printf("Houve empate na votação\n");
	}


}
	
