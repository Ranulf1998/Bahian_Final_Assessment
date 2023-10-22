#include <stdio.h>

int main() {
    int choice;

    while (1) {
        printf("\n==================================\n\n");
        printf("[0] - Exit\n");
        printf("[1] - Triangle\n");
        printf("[2] - Square\n");
        printf("[3] - Rectangle\n");

        do {
            printf("\nWhat would you like to do?: ");
            scanf("%d", &choice);

            if (choice < 0 || choice > 3) {
                printf("\nInvalid input.\n");
            }
        } while (choice < 0 || choice > 3);

        switch (choice) {
            case 0:
                printf("\nProgrammed by: Ranulf Bueno Bahian\n");
                return 0;

            case 1:
                printf("\n==================================\n");
                printf("\nTriangle Selected.\n");
                int subChoice;
                printf("\n[0] - Back\n");
                printf("[1] - Perimeter\n");
                printf("[2] - Area\n");

                while (1) {
                    printf("\nWhat would you like to find?: ");
                    scanf("%d", &subChoice);

                    if (subChoice == 0) {
                        break;
                    }

                    else if (subChoice == 1) {
                        int side1, side2, side3;
                        printf("\nPerimeter Selected.\n");
                        do {
                            printf("\nEnter Length of Side 1 [>0]: ");
                            scanf("%d", &side1);
                        } while (side1 <= 0);
                        do {
                            printf("Enter Length of Side 2 [>0]: ");
                            scanf("%d", &side2);
                        } while (side2 <= 0);
                        do {
                            printf("Enter Length of Side 3 [>0]: ");
                            scanf("%d", &side3);
                        } while (side3 <= 0);
                        printf("\nPerimeter = %d\n\n", side1 + side2 + side3);
                        break;
                    }

                    else if (subChoice == 2) {
                        int base, height;
                        printf("\nArea Selected.\n");
                        do {
                            printf("\nEnter Base of Triangle [>0]: ");
                            scanf("%d", &base);
                        } while (base <= 0);
                        do {
                            printf("Enter Height of Triangle [>0]: ");
                            scanf("%d", &height);
                        } while (height <= 0);
                        printf("\nArea = %.2f\n\n", (float)base * height / 2);
                        break;
                    }

                    else {
                          printf("\nInvalid input\n");
                    }
                }
                break;

            case 2:
                    if (choice == 2)
                        printf("\n==================================\n");
                        printf("\nSquare Selected.\n");
                        int subChoice2;
                        printf("\n[0] - Back\n");
                        printf("[1] - Perimeter\n");
                        printf("[2] - Area\n");

                    while (1) {
                        printf("\nWhat would you like to find?: ");
                        scanf("%d", &subChoice2);
                        if (subChoice2 == 0 ) {
                        break;
                    }
                    else if (subChoice2 == 1) {
                            int side;
                            printf("\nPerimeter Selected\n");
                         do {
                            printf("\nEnter The Side of a Square[>0]: ");
                            scanf("%d", &side);
                        } while (side <= 0);
                            printf("\nPerimeter = %d\n", side * 4);
                            break;

                  } else if (subChoice2 == 2){
                            int side;
                            printf("\nArea Selected\n");
                         do {
                            printf("\nEnter The Side of a Square[>0]: ");
                            scanf("%d", &side);
                        } while (side <= 0);
                            printf("\nArea = %d\n", side * side);
                            break;
                  } else {
                            printf("\ninvalid input\n");
                            }
                        }
                        break;

            case 3:
                    if (choice == 3)
                            printf("\n==================================\n");
                            printf("\nSquare Selected.\n");
                            int subChoice3;
                            printf("\n[0] - Back\n");
                            printf("[1] - Perimeter\n");
                            printf("[2] - Area\n");
                          while (1) {
                            printf("\nWhat Would you like to find?: ");
                            scanf("%d", &subChoice3);
                            if (subChoice3 == 0 ) {
                            printf("\nInvalid Number\n");
                            break;
                         }
                   else if (subChoice3 == 1) {
                         int length,width;
                            printf("\n==================================\n");
                            printf("\nPerimeter Selected\n");
                        do {
                            printf("\nEnter Length[>0]: ");
                            scanf("%d", &length);
                        } while (length <= 0);
                        do {
                            printf("Enter Width[>0]: ");
                            scanf("%d", &width);
                      }   while (width <= 0);
                            printf("Perimeter = %d\n", 2 * (length * width));
                            break;
                         }
                  else if (subChoice3 == 2) {
                            int length,width;
                            printf("\n==================================\n");
                            printf("\nArea Selected\n");
                        do {
                            printf("\nEnter Length[>0]: ");
                            scanf("%d", &length);
                        } while (length <= 0);
                        do {
                            printf("Enter Width[>0]: ");
                            scanf("%d", &width);
                        } while (width <= 0);
                            printf("Area = %d", length * width);
                            break;
                         }
                  else {
                            printf("\ninvalid input\n");
                       }


                }
                break;

            default:
                printf("\nInvalid input.\n");
        }
    }

    return 0;
}

