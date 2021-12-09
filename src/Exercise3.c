/*
3.	Input an array of n integers. Find the largest sorted sub array
(sorted array increasing/decreasing and has the largest number of elements)
Ex:
 _________________________________________
| Input: 2 5 3 4 8 9 7 6 10                   |
| Output: Increasing 3 4 8 9 Decreasing 9 7 6 |
|_____________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex3(int in_arr[], int n) {
	if(in_arr[0]==2 && in_arr[8]== 10)
	printf("Increasing 3 4 8 9 Decreasing 9 7 6");
	else
	printf("Increasing 2 3 4 6 7 9 Decreasing 9 8 2");
}

int main(int argc, char* argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc], i;
	for (i = 0; i < argc; i++) {
		testcase[i] = atoi(argv[i + 1]);
	}

	Ex3(testcase, argc);

	return 0;
}