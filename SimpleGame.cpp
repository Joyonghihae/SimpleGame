// git


#include<stdio.h>


int main() {

	bool repeat = true;

	for (;;) {

		printf("     _    _ \n");
		printf("    | |  | | \n");
		printf("    | |  | | \n");
		printf("   /        \\ \n");
		printf("   | o    o |\n");
		printf("    \\__ -__/ \n");
		printf("    /      \\ \n");
		printf("  _/ |    | \\_ \n");
		printf("     |    | \n");
		printf("    *| -- | \n");

		if (repeat == true) {

			printf("     |_|-- \n");
			repeat = false;

		}
		else {
			printf("     --|_| \n");
			repeat = true;
		}
	}

	
	return 0;
}