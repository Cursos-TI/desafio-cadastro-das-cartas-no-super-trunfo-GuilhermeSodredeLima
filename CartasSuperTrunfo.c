#include <stdio.h>

int main(){
//declaração de variáveis para a primeira carta
char estado1;
char codigo1[4];
char nomecidade1[50];
int populacao1;
float area1;
float pib1;
int pontosturisticos1;

//entrada de dados para a primeira carta
printf("cadastro da primeira carta:\n");
printf("Estado (Letra de 'A' a 'H'): ");
scanf("%c", &estado1);
printf("Codigo da carta (Ex:a01): ");
scanf("%s", codigo1);
printf("Nome da cidade: ");
scanf("%s", nomecidade1);
printf("População: ");
scanf("%d", &populacao1);
printf("Área (Km2): ");
scanf("%f", &area1);
printf("PIB: ");
scanf("%f", &pib1);
printf("Número de pontos turísticos: ");
scanf("%d", &pontosturisticos1);

//Declaração das variáveis para a segunda carta
char estado2;
char codigo2[4];
char nomecidade2[50];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;

//Entrada de dados para a segunda carta
printf("Estado (Letra de 'A' a 'H'): ");
scanf("%s", &estado2);
printf("Codigo da carta (Ex:A01): ");
scanf("%s", codigo2);
printf("Nome da cidade: ");
scanf("%s", nomecidade2);
printf("População: ");
scanf("%d", &populacao2);
printf("Área (Km2): ");
scanf("%f", &area2);
printf("PIB: ");
scanf("%f", &pib2);
printf("Número de pontos turísticos: ");
scanf("%d", &pontosTuristicos2);

//Exibição dos dados cadastrados
printf("\n---Cartas cadastradas---\n");

//Exibir primeira carta
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código da carta: %s\n", codigo1);
printf("Nome da cidade: %s\n", nomecidade1);
printf("População: %d habitantes\n", populacao1);
printf("Área: %.2fkm2\n", area1);
printf("PIB: %.2f bilhoes\n", pib1);
printf("Número de pontos turísticos: %d\n", pontosturisticos1);

//Exibir segunda carta
printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código da carta: %s\n", codigo2);
printf("Nome da cidade: %s\n", nomecidade2);
printf("População: %d habitantes\n", populacao2);
printf("Área: %.2fkm2\n", area2);
printf("PIB: %.2f bilhoes\n", pib2);
printf("Número de pontos turísticos: %d\n", pontosTuristicos2);



return 0;











}