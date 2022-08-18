#include <stdio.h>
int main() {
	// default exitcode
	int exitcode;
	exitcode = 0;
	if (exitcode < 1) {
		printf("Program will exit with error code 0\n");
	}
	else {
		printf("Program will exit with error code : %d", exitcode);
		printf("\n");
	}
	// prints Hello World!!!!
	printf("Numbers |\n");
	printf("        v\n");
	//getMonth();
	incNum(0);
	return exitcode;
}
int getMonth() {
	int month = 8;

	switch (month) {
	case 1:
		printf("January");
		break;
	case 2:
		printf("Febuary");
		break;
	case 3:
		printf("March");
		break;
	case 4:
		printf("April");
		break;
	case 5:
		printf("May");
		break;
	case 6:
		printf("June");
		break;
	case 7:
		printf("July");
		break;

	case 8:
		printf("August");
		break;
	case 9:
		printf("September");
		break;
	case 10:
		printf("October");
		break;
	case 11:
		printf("November");
		break;
	case 12:
		printf("December");
		break;

	default:
		printf("No such month!!!");
	}
}
int incNum(num) {
	while (num < 101) {
		printf("\n%d\n", num);
		num++;
}


}