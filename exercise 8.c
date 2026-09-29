#include <stdio.h>
#include <stdlib.h>

int main()
{
    //4.28
    int code = 0;
    double pay = 0.0;

    printf("Enter pay code (1-4, -1 to quit):");
    scanf("%d", & code);

    while (code!= -1){
        pay=0.0;

        switch (code) {
         case 1: {
            double salary = 0.0;
            printf("Enter weekly salary: ");
            scanf("%lf", &salary);
            pay = salary;
            break;
         }
         case 2: {
            double wage = 0.0, hours = 0.0;
            printf("Enter hourly wage and hours worked: ");
            scanf("%lf%lf", &wage, &hours);
            if (hours <= 40) {
               pay = wage * hours;
            }
            else {
               pay = wage * 40 + 1.5 * wage * (hours - 40);
            }
            break;
         }
         case 3: {
            double sales = 0.0;
            printf("Enter gross weekly sales: ");
            scanf("%lf", &sales);
            pay = 250 + 0.057 * sales;
            break;
         }
         case 4: {
            double perItem = 0.0, items = 0.0;
            printf("Enter pay per item and items produced: ");
            scanf("%lf%lf", &perItem, &items);
            pay = perItem * items;
            break;
         }
         default:
            puts("Invalid pay code.");
      }

      if (code >= 1 && code <= 4) {
         printf("Weekly pay: $%.2f\n", pay);
      }

      printf("\nEnter pay code (1-4, -1 to quit): ");
      scanf("%d", &code);
   }







    return 0;
}
