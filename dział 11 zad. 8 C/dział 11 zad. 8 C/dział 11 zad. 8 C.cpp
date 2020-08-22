#include <stdio.h>
#include "pch.h"
#include <iostream>
#define SIZE 11
char*zawiera_lan( char[],  char[],int);
int main(void)
{
	char *pt2;
	char s1[SIZE];
	char s2[SIZE];
	puts("Podaj dwa lancuchy:");
	while (fgets(s1, SIZE-1, stdin) && fgets(s2, SIZE-1, stdin)) {
		pt2 = zawiera_lan(s1, s2, SIZE);
		printf("%c\n%p\n", pt2[0], pt2);
	}
	return 0;
}
char *zawiera_lan(char s1[], char s2[], int S) {
	char*wsk=NULL;
	int msc_w_s = 0,el_s1,el_s2=0;
	for ( el_s1 = 0; el_s1 < (strlen(s1));el_s1++) {
		if (s1[el_s1] == s2[el_s2]&&el_s2<(strlen(s2))) {
			wsk = &s1[msc_w_s];
			el_s2++;
		}
		else if(el_s2==strlen(s2)-1) {
			el_s1 = S;
		}
		else {
			wsk = NULL;
			el_s2 = 0;
			msc_w_s++;
		}
	}
	return wsk;
}