/**********************************************************************
*
* @Propòsit: realització de la pràtcica 1.2 de programació 1, fer un programa
que compti per grups quants bitllets tenen pel teatre i deixi comprar i fer
estadistica de infants i adults
* @Autora: Alicia Castellanos Massó
* @Data de creació: 3/12/2021
* @ Data de l'última modificació: 5/12/2021

***********************************************************************/

#include <stdio.h>

int suma(int creditcard) {
  int suma = 0;
  while (creditcard > 0) {
    suma = suma + creditcard % 10;
    creditcard = creditcard / 10;
  }

  if (suma > 9) {
    suma = suma % 10 + suma / 10;
  }
  return suma;
}


int novalidcreditcard(int creditcard) {
  int novalid = 0;
  if (creditcard < 1000 || creditcard > 9999) {
    printf("ERROR: Digit groups mus have 4 digits\n");
  } else {
    novalid = 1;
  }
  return novalid;
}

int main() {
  int creditcard = 0, creditcard2 = 0, creditcard3 = 0, creditcard4 = 0,
      suma1 = 0, suma2 = 0, suma3 = 0;
  int suma4 = 0, novalid1 = 0, novalid2 = 0, novalid3 = 0, novalid4 = 0,
      pin = 0;
  int  optionmenu = 0,
      entradas_disponible = 15, compra = 0, op1 = 0, sal_1 = 0;
  char ticket = '0';
  int end = 0;
  float adultos = 0, ninos = 0, total = 0;
  float estadistica_ninos = 0.0, estadistica_adultos = 0.0;

  printf("Welcome to LS THEATRE!\n");

  while (novalid1 == 0) {
    printf("Input credit card digit group #1: ");
    scanf("%d", &creditcard);
    novalid1 = novalidcreditcard(creditcard);
  }
  suma1 = suma(creditcard);

  while (novalid2 == 0) {
    printf("Input credit card digit group #2: ");
    scanf("%d", &creditcard2);
    novalid2 = novalidcreditcard(creditcard2);
  }
  suma2 = suma(creditcard2);
  while (novalid3 == 0) {
    printf("Input credit card digit group #3: ");
    scanf("%d", &creditcard3);
    novalid3 = novalidcreditcard(creditcard3);
  }
  suma3 = suma(creditcard3);
  while (novalid4 == 0) {
    printf("Input credit card digit group #4: ");
    scanf("%d", &creditcard4);
    novalid4 = novalidcreditcard(creditcard4);
  }
  suma4 = suma(creditcard4);

  /////////////////////////////////////////////////
  while pin (pin<1000 || pin>9999){
   printf("Input PIN: ");
  scanf("%d", &pin);
    
 if (pin<1000 || pin>9999){
   printf("ERROR: The PIN must have 4 digits\n");
 }
   
int pincard1 = 0, pincard2 = 0, pincard3 = 0, pincard4 = 0;
    pincard4 =   pin%10;
    pin= pin/10;
  pincard3 = pin%10;
    pin= pin/10;
  pincard2 = pin%10;
    pin= pin/10;
  pincard1 = pin%10;
    pin= pin/10;
  if (pincard1 != suma1 || pincard2 != suma2 || pincard3 != suma3 ||
      pincard4 != suma4) {
    printf("ERROR: The credit card is not valid\n");
    optionmenu = 3;
    printf("Have a nice day!");
    return 0;

  
  }
  

  while (optionmenu != 3) {
    printf("1. Buy | 2. Show statistics | 3. Exit\n");
    printf("Select option: ");
    scanf("%d", &optionmenu);
    if (optionmenu < 1 || optionmenu > 3) {
      printf("ERROR: Invalid option");
    } else {
      switch (optionmenu) {
        case 1:
          while (sal_1 == 0 && end == 0) {
            if (op1 == 2) {
              printf("\nERROR: You cannot buy tickets today");
              sal_1 = 1;
            } else {
              do {
                printf("(c)hildren or (a)dult? (case insensitive)");
                scanf("%c", &ticket);
                scanf("%c", &ticket);
                if (ticket != 'A' && ticket != 'a' && ticket != 'c' &&
                    ticket != 'C') {
                  printf(
                      "\nERROR: You must choose between (c)hildren or (a)dult\n");
                } else {
                  printf("\nRemaining tickets: %d", entradas_disponible);
                  printf("\nHow many tickets do you want to buy? ");
                  scanf("%d", &compra);

                  if (compra >= 10) {
                    printf(
                        "\nERROR: You cannot buy more than 10 tickets at "
                        "once\n");
                  }
                  if (compra > entradas_disponible) {
                    printf(
                        "\nERROR: You cannot buy more tickets than available\n");
                  } else {
                    entradas_disponible = entradas_disponible - compra;
                    op1++;
                    if (ticket == 'c' || ticket == 'C') {
                      ninos += compra;
                    } else {
                      adultos += compra;
                    }
                  }
                  sal_1 = 1;
                }

              } while (sal_1 == 0);
            }
          }
          sal_1 = 0;
          if (op1 == 2 && end == 1) {
            printf("\nERROR: You cannot buy tickets today");
          }
          if (op1 == 2) {
            end = 1;
          }
          break;
        case 2:
          total = adultos + ninos;
          estadistica_ninos = (ninos / total) * 100;
          estadistica_adultos = (adultos / total) * 100;
          printf("STATISTICS:\n");
          printf("\nRemaining tickets: %d", entradas_disponible);
          printf("\nTickets sold for children (percentage): %f",
                 estadistica_ninos);
          printf("\nTickets sold for adults (percentage): %f",
                 estadistica_adultos);
          break;
      }
    }
  }
  printf("Have a nice day!");
  return 0;
}
