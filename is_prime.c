#include <stdio.h>
#include <unistd.h>

int parse(char* argument) {
	char* cpt = argument;
	int result = 0;
	while (*cpt != '\0') {
		result *= 10;
		result += *cpt - '0';
		cpt++;
	}
	return result;
}

int isPrime (int number) { 
    if (number < 2) return 0;
    if (number == 2) return 1;
    if (number % 2 == 0) return 0;
    for (int i=3; (i*i) <= number; i+=2) {
    	  usleep(50 * 1000);
        if (number % i == 0 ) return 0;
    }
    return 1;
}

int main(int argc, char **argv) {
	int number = parse(argv[1]);
	
	printf("%d is prime? %d\n", number, isPrime(number));
	return 0;
}

