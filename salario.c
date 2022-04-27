#include<stdio.h>
#include<locale.h>


int main (void)
{
	setlocale(LC_ALL, "");
	
	float VH, SB, SL, HT , DESC, TD; //VH - Valor hora trabalhada | SB - Salário Bruto | SL - Salário Líquido | TD - Total do desconto | HT - Horas trabalhadas mês | Desc - percentual desconto
	printf("Insira total de horas trabalhadas no mês: \n");
	scanf(" %f", &HT);
	printf("Insira valor da hora trabalhada: \n");
	scanf(" %f", &VH);
	printf("Insira o percentual de desconto (sem sinal): \n");
	scanf(" %f", &DESC);
	
	SB = HT * VH;
	TD = (DESC/100) * SB;
	SL = SB - TD;
	printf("\nSalário bruto:..........R$ %4.f \nDesconto:..........R$ %4.f\nSalário líquido:..........R$ %4.f\n", SB, TD, SL);
	
	return 0;
}
