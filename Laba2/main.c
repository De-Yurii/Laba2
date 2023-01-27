#include <stdio.h>
#include <math.h>
#include <conio.h>
// The program to check how many exact numbers are in some positive number
int main() {
	long long int number;
	scanf_s("%lld", &number);
	int chars = 0;
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0, n9 = 0, n0 = 0;
	if (number < 0) {
		printf("Chyslo vidyemne\n");
		number = abs(number);
	}
	while ((pow(10, chars)) <= number) chars++;
	chars--;
	if (number == 0) {
		n0++;
	}

	while (chars >= 0) {
		int ostacha;
		
		
		ostacha = number % 10;

		number = number - ostacha;
		number = number / 10;

		switch (ostacha) {
			case 0: 
				n0++;
				break;
			case 1:
				n1++;
				break;
			case 2:
				n2++;
				break;
			case 3:
				n3++;
				break;
			case 4:
				n4++;
				break;
			case 5:
				n5++;
				break;
			case 6:
				n6++;
				break;
			case 7:
				n7++;
				break;
			case 8:
				n8++;
				break;
			case 9:
				n9++;
				break;
		}
		chars--;
	}
	printf("N0 = %d\nN1 = %d \nN2 = %d \nN3 = %d \nN4 = %d \nN5 = %d \nN6 = %d \nN7 = %d \nN8 = %d \nN9 = %d", n0, n1, n2, n3, n4, n5, n6, n7, n8, n9);
}
