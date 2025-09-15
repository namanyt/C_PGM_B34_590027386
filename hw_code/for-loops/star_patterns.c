#include <stdio.h>

// Q1.1 Left aligned increasing triangle
void pattern1(char s) {
  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%c ", s);
    }
    printf("\n");
  }
}

// Q1.2 Right aligned increasing triangle
void pattern2(char s) {
  for (int i = 1; i <= 4; i++) {
    for (int space = 4 - i; space > 0; space--) printf("  ");
    for (int j = 1; j <= i; j++) printf("%c ", s);
    printf("\n");
  }
}

// Q1.3 Left aligned decreasing triangle
void pattern3(char s) {
  for (int i = 4; i >= 1; i--) {
    for (int j = 1; j <= i; j++) printf("%c ", s);
    printf("\n");
  }
}

// Q1.4 Right aligned decreasing triangle
void pattern4(char s) {
  for (int i = 4; i >= 1; i--) {
    for (int space = 4 - i; space > 0; space--) printf("  ");
    for (int j = 1; j <= i; j++) printf("%c ", s);
    printf("\n");
  }
}

// Q1.5 Pyramid
void pattern5(char s) {
  for (int i = 1; i <= 4; i++) {
    for (int space = 4 - i; space > 0; space--) printf("  ");
    for (int j = 1; j <= 2 * i - 1; j++) printf("%c ", s);
    printf("\n");
  }
}

// Q1.6 Inverted pyramid
void pattern6(char s) {
  for (int i = 4; i >= 1; i--) {
    for (int space = 4 - i; space > 0; space--) printf("  ");
    for (int j = 1; j <= 2 * i - 1; j++) printf("%c ", s);
    printf("\n");
  }
}

// Q1.7 Diamond
void pattern7(char s) {
  for (int i = 1; i <= 4; i++) {
    for (int space = 4 - i; space > 0; space--) printf("  ");
    for (int j = 1; j <= 2 * i - 1; j++) printf("%c ", s);
    printf("\n");
  }
  for (int i = 3; i >= 1; i--) {
    for (int space = 4 - i; space > 0; space--) printf("  ");
    for (int j = 1; j <= 2 * i - 1; j++) printf("%c ", s);
    printf("\n");
  }
}

// Q1.8 Hourglass-like
void pattern8(char s) {
  for (int i = 1; i <= 4; i++) {
    for (int space = 4 - i; space > 0; space--) printf("  ");
    for (int j = 1; j <= i; j++) printf("%c ", s);
    printf("\n");
  }
  for (int i = 3; i >= 1; i--) {
    for (int space = 4 - i; space > 0; space--) printf("  ");
    for (int j = 1; j <= i; j++) printf("%c ", s);
    printf("\n");
  }
}

// Q1.9 Vertical hourglass
void pattern9(char s) {
  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= i; j++) printf("%c ", s);
    printf("\n");
  }
  for (int i = 3; i >= 1; i--) {
    for (int j = 1; j <= i; j++) printf("%c ", s);
    printf("\n");
  }
}

int main() {
  int choice;
  do {
    printf("\nPattern Menu:\n");
    printf("1. Left aligned increasing triangle\n");
    printf("2. Right aligned increasing triangle\n");
    printf("3. Left aligned decreasing triangle\n");
    printf("4. Right aligned decreasing triangle\n");
    printf("5. Pyramid\n");
    printf("6. Inverted pyramid\n");
    printf("7. Diamond\n");
    printf("8. Hourglass-like\n");
    printf("9. Vertical hourglass\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 0) {
      printf("Exiting...\n");
      break;
    }

    printf("Enter a character to use for the pattern: ");
    char s;
    scanf(" %c", &s);

    if (choice == 1) pattern1(s);
    else if (choice == 2) pattern2(s);
    else if (choice == 3) pattern3(s);
    else if (choice == 4) pattern4(s);
    else if (choice == 5) pattern5(s);
    else if (choice == 6) pattern6(s);
    else if (choice == 7) pattern7(s);
    else if (choice == 8) pattern8(s);
    else if (choice == 9) pattern9(s);
    else printf("Invalid choice! Try again.\n");

  } while (choice != 0);

  return 0;
}
