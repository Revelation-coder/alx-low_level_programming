#include<stdio.h>
#include<stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main() {
	/*Converting a numeric string */
	char str[10];
	char str2[10];
	char str3[10];
	int x;
    	str[10]* x = "122";
  	x = atoi(str);
	printf("Converting '122': %d\n", x);

	/* Converting an alphanumeric string */
	str2[10]* x= "Hello!";
  	x = atoi(str2);
        printf("Converting 'Hello!': %d\n", x);

        /* Converting a partial string */
        str3[10]* x= "99Hello!";
        x = atoi(str3);
        printf("Converting '99Hello!': %d\n", x);
        return 0;
}
