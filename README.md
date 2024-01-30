# Sales Tax Calculator

This simple C program calculates the total cost of items, tax, and the overall sale amount based on user input. The user is prompted to enter the prices of up to 10 items, and then the program calculates the total cost, tax, and final sale amount.

## How to Use

1. Compile the program using a C compiler.

```bash
gcc sales_tax_calculator.c -o sales_tax_calculator

1.Run the compiled executable.

./sales_tax_calculator

Follow the prompts to enter the prices of items. Press Enter after each input.
If you have entered at least one item, you will be prompted to input the tax rate.
The program will then calculate and display the total cost of items, tax, and the final sale amount.

Example output:
Please enter prices of items you purchased.
Press Enter when you're done.
Max of 10 items to input!

Item 1 input: 10.50
Item 2 input: 20.00
Item 3 input: 15.75
Item 4 input: (Press Enter to finish)

Input your tax rate: 8.5

-------------------------------
Total cost of 3 items: $46.25
Tax: $3.93
Total Sale: $50.18

##Notes
The program uses a simple loop to collect user input for item prices.
It checks for invalid input and terminates the loop when the user is done entering items.
The tax rate is then applied, and the total cost, tax, and final sale amount are displayed.
Feel free to use, modify, and share this code as needed!
