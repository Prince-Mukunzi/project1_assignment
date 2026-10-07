#include <stdio.h>

int main() {

  float balance = 0;
  float amount;

  int choice;
  int deposits = 0;
  int withdrawals = 0;

  while (1) {

    printf("\n===== MOBILE MONEY TRANSACTION SYSTEM =====\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("4. Transaction Summary\n");
    printf("5. Exit\n");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {

    case 1:
      printf("Enter deposit amount: ");
      scanf("%f", &amount);

      if (amount <= 0) {
        printf("Transaction rejected: Invalid amount\n");
        continue;
      }

      balance = balance + amount;
      deposits++;

      printf("Deposit successful\n");
      printf("Current balance: %.2f RWF\n", balance);
      break;

    case 2:
      printf("Enter withdrawal amount: ");
      scanf("%f", &amount);

      if (amount <= 0) {
        printf("Transaction rejected: Invalid amount\n");
        continue;
      }

      if (amount > balance) {
        printf("Transaction rejected: Insufficient balance\n");
        continue;
      }

      balance = balance - amount;
      withdrawals++;

      printf("Withdrawal successful.\n");
      printf("Current balance: %.2f RWF\n", balance);
      break;

    case 3:
      printf("Current balance: %.2f RWF\n", balance);
      break;

    case 4:
      printf("Successful deposits: %d\n", deposits);
      printf("Successful withdrawals: %d\n", withdrawals);
      break;

    case 5:
      printf("System terminated.\n");
      break;

    default:
      printf("Invalid choice. Please try again\n");
      continue;
    }

    if (choice == 5) {
      break;
    }
  }

  return 0;
}
