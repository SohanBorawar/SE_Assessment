#include <stdio.h>

int order(ordername, price, more) {
  int qty, amount;
  printf("You have Selected %s", ordername);
  printf("\nPleaze Enter Quantity :");
  scanf("%d", &qty);
  amount = price * qty;
  printf("Amount :%d", amount);
  printf("\nDo You Want Place More Order ? y or n :");
  scanf("%c", &more);
}
int main() {
  int choice;
  char more = 'y', selec;
  while (more == 'y') {
    printf("\n1.Pizza      Price = 180rs/pcs\n");
    printf("2.Burgur     Price = 100rs/pcs\n");
    printf("3.Dosa       Price = 120rs/pcs\n");
    printf("4.Idli       Price = 50rs/pcs\n");
    printf("\nPlease Enter your Choice :");
    scanf("%d", &choice);
    printf("choice %d", choice);

    if (choice == 1) {
      char name[50] = "pizza";
      order(name, 180, more);
      printf("\nDo You Want Place More Order ? y or n :");
      scanf("%c", &selec);
      more = selec;
    } else if (choice == 2) {
      char name[50] = "Burger";
      order(name, 100, more);
      printf("\nDo You Want Place More Order ? y or n :");
      scanf("%c", &selec);
      more = selec;
    } else if (choice == 3) {
      char name[50] = "Dosa";
      order(name, 120, more);
      printf("\nDo You Want Place More Order ? y or n :");
      scanf("%c", &selec);
      more = selec;
    } else if (choice == 4) {
      char name[50] = "Idli";
      order(name, 50, more);
      printf("\nDo You Want Place More Order ? y or n :");
      scanf("%c", &selec);
      more = selec;
    } else {
      printf("Enter a valid value");
    }
  }
}