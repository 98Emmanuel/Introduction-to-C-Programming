// lab01, lab procesure, task 4

// source file for the program manipulate_two_numbers

/*
 * This file is used to generate an executable program that reads two
 * numbers from the terminal and output the merged result in
 * hexadecimal, and the sum in hexadecimal and binary format.
 */

// again, the header of our function library is already included
#include "functions.h"

// main
int main(int argc, char *argv[])
{
	// ***** enter your code here ***** //

	uint16_t hex_1;
	uint16_t hex_2;


	while (1)
	{
		
	
	// scan the terminal for inputs from the user
	
	printf("Enter your first number or enter FFFF to exit: \n");
	scanf("%hX", &hex_1);

	printf("Enter your second number or enter FFFF to exit: \n");
	scanf(" %hX", &hex_2);

	

	// break the loop
	if (hex_1 == 0XFFFF && hex_2== 0xFFFF){
		printf("Exited loop\n");
		break;
		}

	uint32_t merged = bit_merge(hex_1, hex_2);

	printf("merging 0x%hx and 0x%hx results in 0x%hx\n", hex_1, hex_2, merged);

	
	uint16_t sum_numbers = hex_1 + hex_2;

	printf("The sum is ");

	print_bits(sum_numbers);



	// use the function bit_merge() to merge the numbers

	// use the function print_bits to print the sum to the terminal

	// ***** end of your code ***** //

	
}
	return 0;
}