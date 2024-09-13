#include <stdio.h>
#include <limits.h>

int main(void) {
	//char
	char ch = 'A';
	printf("char:\n");
	printf("Vlaue: %c\n", ch);
	printf("Max: %d\n", CHAR_MAX); //limit의 상수 사용
	printf("Min: %d\n", CHAR_MIN);

	//signed short int
	signed short int sshort = 1234;
	printf("signed short int:\n");
	printf("Vlaue: %c\n", sshort);
	printf("Max: %d\n", SHRT_MAX); //limit의 상수 사용
	printf("Min: %d\n", SHRT_MIN);

	//unsigned short
	unsigned short int ushort = 1234U;
	printf("unsigned short int:\n");
	printf("Vlaue: %c\n", ushort);
	printf("Max: %d\n", USHRT_MAX); //limit의 상수 사용

	//signed int
	signed int sint = 1234;
	printf("signed int:\n");
	printf("Vlaue: %c\n", sint);
	printf("Max: %d\n", INT_MAX); //limit의 상수 사용
	printf("Min: %d\n", INT_MIN);

	//unsigned int
	unsigned int uint = 1234U;
	printf("unsigned int:\n");
	printf("Vlaue: %c\n", uint);
	printf("Max: %d\n", UINT_MAX); //limit의 상수 사용

	//signed long int
	signed long int slong = 123456789L;
	printf("signed long int:\n");
	printf("Vlaue: %ld\n", slong);
	printf("Max: %ld\n", LONG_MAX); //limit의 상수 사용
	printf("Min: %ld\n", LONG_MIN);

	//unsigned long int
	unsigned long int ulong = 123456789UL;
	printf("unsigned long int:\n");
	printf("Vlaue: %lu\n", ulong);
	printf("Max: %lu\n", ULONG_MAX); //limit의 상수 사용

	return 0;
}