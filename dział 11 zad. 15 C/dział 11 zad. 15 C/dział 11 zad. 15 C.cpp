#include <stdio.h>
#include "pch.h"
#include <iostream>
#include <ctype.h>
#define size 11
int myatoi(char[]);  //if theres only digit in string returens the digit lese returns 0
int main(void)
{
	int digit;
	char ar1[size];
	while (scanf("%s",ar1)) {
	 digit =myatoi(ar1);
		printf("%d\n", digit);
	}
	return 0;
}
int myatoi(char ar1[]) {
	int counter1 = 0, intele = 0, counter2 = 0,c1;
	int digits[size],mnoznik=1,main_dig=0;
	for (int i = 0; i < strlen(ar1); i++) {
		if (isdigit(ar1[i])) {
			counter1++;
			digits[intele++] = ar1[i]-48;
		}
		else
			counter2++;
	}
	c1 = counter1;
	for (int i = 0; i < c1; i++) {
		for (int j = counter1-(counter1-1); j < counter1&&counter1 !=1; j++)
			mnoznik *= 10;
		main_dig += (digits[i] * mnoznik);
		mnoznik = 1;
		counter1--;
	}
	if (c1 == strlen(ar1))
		return main_dig;
	else
		return 0;
}