#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<locale.h>

int main (void){

setlocale (LC_ALL,"Portuguese");

int C1,C2,C3,C4;

while (C4!=0){
printf ("\n         Opções de Cores                  ");
printf ("\n01- Preto           09- Cinza");
printf ("\n02- Azul            10- Azul Claro");
printf ("\n03- Verde           11- Verde Claro");
printf ("\n04- Verde Água      12- Verde-Água Claro");
printf ("\n05- Vermelho        13- Vermelho Claro");
printf ("\n06- Roxo            14- Lilás");
printf ("\n07- Amarelo         15- Amarelo Claro");
printf ("\n08- Branco          16- Branco Brilhante");
printf ("\n");
printf ("\n(Pressione 0 para sair)");
printf ("\nEntre com a cor do fundo:");
printf ("\n");
scanf ("%d",&C1);
if (C1==0)
C4=0;
else{
printf ("\nEntre com a cor da letra:");
printf ("\n");
scanf ("%d",&C2);
system ("cls");
}
if (C2==0)
C4=0;
if ((C1==C2)&&(C1!=0)&&(C2!=0))
printf ("Valor invalido!");
if (C1==1){
if (C2==2)
system ("color 01");
if (C2==3)
system ("color 02");
if (C2==4)
system ("color 03");
if (C2==5)
system ("color 04");
if (C2==6)
system ("color 05");
if (C2==7)
system ("color 06");
if (C2==8)
system ("color 07");
if (C2==9)
system ("color 08");
if (C2==10)
system ("color 09");
if (C2==11)
system ("color 0A");
if (C2==12)
system ("color 0B");
if (C2==13)
system ("color 0C");
if (C2==14)
system ("color 0D");
if (C2==15)
system ("color 0E");
if (C2==16)
system ("color 0F");
}
if (C1==2){
if (C2==1)
system ("color 10");
if (C2==3)
system ("color 12");
if (C2==4)
system ("color 13");
if (C2==5)
system ("color 14");
if (C2==6)
system ("color 15");
if (C2==7)
system ("color 16");
if (C2==8)
system ("color 17");
if (C2==9)
system ("color 18");
if (C2==10)
system ("color 19");
if (C2==11)
system ("color 1A");
if (C2==12)
system ("color 1B");
if (C2==13)
system ("color 1C");
if (C2==14)
system ("color 1D");
if (C2==15)
system ("color 1E");
if (C2==16)
system ("color 1F");
}
if (C1==3){
if (C2==1)
system ("color 20");
if (C2==2)
system ("color 21");
if (C2==4)
system ("color 23");
if (C2==5)
system ("color 24");
if (C2==6)
system ("color 25");
if (C2==7)
system ("color 26");
if (C2==8)
system ("color 27");
if (C2==9)
system ("color 28");
if (C2==10)
system ("color 29");
if (C2==11)
system ("color 2A");
if (C2==12)
system ("color 2B");
if (C2==13)
system ("color 2C");
if (C2==14)
system ("color 2D");
if (C2==15)
system ("color 2E");
if (C2==16)
system ("color 2F");
}
if (C1==4){
if (C2==1)
system ("color 30");
if (C2==2)
system ("color 31");
if (C2==3)
system ("color 32");
if (C2==5)
system ("color 34");
if (C2==6)
system ("color 35");
if (C2==7)
system ("color 36");
if (C2==8)
system ("color 37");
if (C2==9)
system ("color 38");
if (C2==10)
system ("color 39");
if (C2==11)
system ("color 3A");
if (C2==12)
system ("color 3B");
if (C2==13)
system ("color 3C");
if (C2==14)
system ("color 3D");
if (C2==15)
system ("color 3E");
if (C2==16)
system ("color 3F");
}
if (C1==5){
if (C2==1)
system ("color 40");
if (C2==2)
system ("color 41");
if (C2==3)
system ("color 42");
if (C2==4)
system ("color 43");
if (C2==6)
system ("color 45");
if (C2==7)
system ("color 46");
if (C2==8)
system ("color 47");
if (C2==9)
system ("color 48");
if (C2==10)
system ("color 49");
if (C2==11)
system ("color 4A");
if (C2==12)
system ("color 4B");
if (C2==13)
system ("color 4C");
if (C2==14)
system ("color 4D");
if (C2==15)
system ("color 4E");
if (C2==16)
system ("color 4F");
}
if (C1==6){
if (C2==1)
system ("color 50");
if (C2==2)
system ("color 51");
if (C2==3)
system ("color 52");
if (C2==4)
system ("color 53");
if (C2==5)
system ("color 54");
if (C2==7)
system ("color 56");
if (C2==8)
system ("color 57");
if (C2==9)
system ("color 58");
if (C2==10)
system ("color 59");
if (C2==11)
system ("color 5A");
if (C2==12)
system ("color 5B");
if (C2==13)
system ("color 5C");
if (C2==14)
system ("color 5D");
if (C2==15)
system ("color 5E");
if (C2==16)
system ("color 5F");
}
if (C1==7){
if (C2==1)
system ("color 60");
if (C2==2)
system ("color 61");
if (C2==3)
system ("color 62");
if (C2==4)
system ("color 63");
if (C2==5)
system ("color 64");
if (C2==6)
system ("color 65");
if (C2==8)
system ("color 67");
if (C2==9)
system ("color 68");
if (C2==10)
system ("color 69");
if (C2==11)
system ("color 6A");
if (C2==12)
system ("color 6B");
if (C2==13)
system ("color 6C");
if (C2==14)
system ("color 6D");
if (C2==15)
system ("color 6E");
if (C2==16)
system ("color 6F");
}
if (C1==8){
if (C2==1)
system ("color 70");
if (C2==2)
system ("color 71");
if (C2==3)
system ("color 72");
if (C2==4)
system ("color 73");
if (C2==5)
system ("color 74");
if (C2==6)
system ("color 75");
if (C2==7)
system ("color 76");
if (C2==9)
system ("color 78");
if (C2==10)
system ("color 79");
if (C2==11)
system ("color 7A");
if (C2==12)
system ("color 7B");
if (C2==13)
system ("color 7C");
if (C2==14)
system ("color 7D");
if (C2==15)
system ("color 7E");
if (C2==16)
system ("color 7F");
}
if (C1==9){
if (C2==1)
system ("color 80");
if (C2==2)
system ("color 81");
if (C2==3)
system ("color 82");
if (C2==4)
system ("color 83");
if (C2==5)
system ("color 84");
if (C2==6)
system ("color 85");
if (C2==7)
system ("color 86");
if (C2==8)
system ("color 87");
if (C2==10)
system ("color 89");
if (C2==11)
system ("color 8A");
if (C2==12)
system ("color 8B");
if (C2==13)
system ("color 8C");
if (C2==14)
system ("color 8D");
if (C2==15)
system ("color 8E");
if (C2==16)
system ("color 8F");
}
if (C1==10){
if (C2==1)
system ("color 90");
if (C2==2)
system ("color 91");
if (C2==3)
system ("color 92");
if (C2==4)
system ("color 93");
if (C2==5)
system ("color 94");
if (C2==6)
system ("color 95");
if (C2==7)
system ("color 96");
if (C2==8)
system ("color 97");
if (C2==9)
system ("color 98");
if (C2==11)
system ("color 9A");
if (C2==12)
system ("color 9B");
if (C2==13)
system ("color 9C");
if (C2==14)
system ("color 9D");
if (C2==15)
system ("color 9E");
if (C2==16)
system ("color 9F");
}
if (C1==11){
if (C2==1)
system ("color A0");
if (C2==2)
system ("color A1");
if (C2==3)
system ("color A2");
if (C2==4)
system ("color A3");
if (C2==5)
system ("color A4");
if (C2==6)
system ("color A5");
if (C2==7)
system ("color A6");
if (C2==8)
system ("color A7");
if (C2==9)
system ("color A8");
if (C2==10)
system ("color A9");
if (C2==12)
system ("color AB");
if (C2==13)
system ("color AC");
if (C2==14)
system ("color AD");
if (C2==15)
system ("color AE");
if (C2==16)
system ("color AF");
}
if (C1==12){
if (C2==1)
system ("color B0");
if (C2==2)
system ("color B1");
if (C2==3)
system ("color B2");
if (C2==4)
system ("color B3");
if (C2==5)
system ("color B4");
if (C2==6)
system ("color B5");
if (C2==7)
system ("color B6");
if (C2==8)
system ("color B7");
if (C2==9)
system ("color B8");
if (C2==10)
system ("color B9");
if (C2==11)
system ("color BA");
if (C2==13)
system ("color BC");
if (C2==14)
system ("color BD");
if (C2==15)
system ("color BE");
if (C2==16)
system ("color BF");
}
if (C1==13){
if (C2==1)
system ("color C0");
if (C2==2)
system ("color C1");
if (C2==3)
system ("color C2");
if (C2==4)
system ("color C3");
if (C2==5)
system ("color C4");
if (C2==6)
system ("color C5");
if (C2==7)
system ("color C6");
if (C2==8)
system ("color C7");
if (C2==9)
system ("color C8");
if (C2==10)
system ("color C9");
if (C2==11)
system ("color CA");
if (C2==12)
system ("color CB");
if (C2==14)
system ("color CD");
if (C2==15)
system ("color CE");
if (C2==16)
system ("color CF");
}
if (C1==14){
if (C2==1)
system ("color D0");
if (C2==2)
system ("color D1");
if (C2==3)
system ("color D2");
if (C2==4)
system ("color D3");
if (C2==5)
system ("color D4");
if (C2==6)
system ("color D5");
if (C2==7)
system ("color D6");
if (C2==8)
system ("color D7");
if (C2==9)
system ("color D8");
if (C2==10)
system ("color D9");
if (C2==11)
system ("color DA");
if (C2==12)
system ("color DB");
if (C2==13)
system ("color DC");
if (C2==15)
system ("color DE");
if (C2==16)
system ("color DF");
}
if (C1==15){
if (C2==1)
system ("color E0");
if (C2==2)
system ("color E1");
if (C2==3)
system ("color E2");
if (C2==4)
system ("color E3");
if (C2==5)
system ("color E4");
if (C2==6)
system ("color E5");
if (C2==7)
system ("color E6");
if (C2==8)
system ("color E7");
if (C2==9)
system ("color E8");
if (C2==10)
system ("color E9");
if (C2==11)
system ("color EA");
if (C2==12)
system ("color EB");
if (C2==13)
system ("color EC");
if (C2==14)
system ("color ED");
if (C2==16)
system ("color EF");
}
if (C1==16){
if (C2==1)
system ("color F0");
if (C2==2)
system ("color F1");
if (C2==3)
system ("color F2");
if (C2==4)
system ("color F3");
if (C2==5)
system ("color F4");
if (C2==6)
system ("color F5");
if (C2==7)
system ("color F6");
if (C2==8)
system ("color F7");
if (C2==9)
system ("color F8");
if (C2==10)
system ("color F9");
if (C2==11)
system ("color FA");
if (C2==12)
system ("color FB");
if (C2==13)
system ("color FC");
if (C2==14)
system ("color FD");
if (C2==15)
system ("color FE");
}
}
}
