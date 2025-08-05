#include <stdio.h>

int main() {

char estado1[25];
char codigo[50];
char cidade[50];
int populaçao;
float area;
float pib;
int turisticos;
float dp;
float pc;  
printf("carta 1:\n");

printf("digite o estado:\n");
scanf("%s", estado1);

printf("digite o codigo da carta:\n");
scanf("%s", codigo);

printf("digite a cidade:\n");
scanf("%s", cidade);

printf("digite a populaçao:\n");
scanf("%d", &populaçao);

printf("digite area:\n");
scanf("%f", &area);

printf("digite o pib\n");
scanf("%f", &pib);

printf("digite o numeros de pontos turisticos\n");
scanf("%d", &turisticos);

dp = populaçao / area;
pc = pib / populaçao;

printf("carta 1:\n");
printf("cidade: %s\n", cidade);
printf("estado: %s\n", estado1);
printf("codigo da carta: %s\n ", codigo);
printf("populaçao: %d\n area: %.5f\n", populaçao, area);
printf("pib: %.5f\n pontos turisticos: %d\n", pib, turisticos);
printf("dencidade populacional: %.5f\n", dp);
printf("pib per capita: %.5f\n", pc);




char estado2[25];
char codigo2[50];
char cidade2[50];
int populaçao2;
float area2;
float pib2;
int turisticos2;
float dp2;
float pc2; 

printf("carta 2:\n");

printf("digite o estado da carta2:\n");
scanf("%s", estado2);

printf("digite o codigo da carta da carta2:\n");
scanf("%s", codigo2);

printf("digite a cidade da carta2:\n");
scanf("%s", cidade2);

printf("digite a populaçao da carta2:\n");
scanf("%d", &populaçao2);

printf("digite area da carta2:\n");
scanf("%f", &area2);

printf("digite o pib da carta2:\n");
scanf("%f", &pib2);

printf("digite o numeros de pontos turisticos da carta2:\n");
scanf("%d", &turisticos2);

dp2 = populaçao2 / area2;
pc2 = pib2 / populaçao2;




printf("carta 2:\n");
printf("cidade da cartaa2: %s\n", cidade2);
printf("estado da carta2: %s\n", estado2);
printf("codigo da carta2: %s\n ", codigo2);
printf("populaçao da carta2: %d\n area carta2: %.5f\n", populaçao2, area2);
printf("pib da carta2: %.5f\n pontos turisticos da carta2: %d\n", pib2, turisticos2);
printf("dencidade populacional carta2: %.5f\n", dp2);
printf("pib per capita carta2: %.5f\n", pc2);

return 0;

}