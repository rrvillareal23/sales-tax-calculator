#include <stdio.h>
#include <string.h>


int main(){
  float tax = 0;
  int count = 0;
  float sum, totalSale, totalTax;
  char userInput[1000];
  float itemsBought[10];

  printf("Please enter in prices of items you purchased. \n");
  printf("Press Enter when you're done.\n");
  printf("Max of 10 items to input!\n");

  //while loop to go through as long as count is less then 10 (10 is max)
  //print to keep track of count
  //gets user input and keeps it in input arrays 
  //if input at count array is null then the loop breaks 
  //did count+1 in fgets so it shows correctly in display to user.
  //sent scanner equal to what is being input so I can see if it equals 0 or is EOF.

  while (count < 10) {
    printf("Item %d input: ", count+1);
    fgets(userInput, sizeof(userInput), stdin);
    int scanner = sscanf(userInput, "%f", &itemsBought[count]);

    if (scanner == 0 || scanner == EOF){
      break;
    }
    else
      count++;
  }

  //if count is above 0 then tax rate will be input.
  if (count > 0){
    printf("Input your tax rate: ");
    scanf("%f", &tax);
  }
  
  //dividing tax by 100 to get it ready for math
  tax = tax/100;
  
  //for loop to add total inputs together for some total
  for(int i = 0; i < count; i++){
    sum = sum + itemsBought[i];
  }

  //math to get the total tax for item sum
  totalTax = sum * tax;

  //math to add tax plus total sum
  totalSale = totalTax + sum;

  //prints
  printf("-------------------------------\n");
  printf("Total cost of %d items: $%.2f\n", count, sum);
  printf("Tax: %.2f \n", totalTax);
  printf("Total Sale: $%.2f \n", totalSale);

  return 0;
}