#include<stdio.h>
#include<stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char* str(){
return "122";
}
char* str2(){
return "Hello!";
}
char* str3(){
return "99Hello!";
}
int main() {
	/*Converting a numeric string */
	char str[10];
	char str2[10];
	char str3[10];
	int x;
    	char* str[10] = char* str();
  	x = atoi(str);
	printf("Converting '122': %d\n", x);

	/* Converting an alphanumeric string */
	char* str2[10] = char* str2();
  	x = atoi(str2);
        printf("Converting 'Hello!': %d\n", x);

        /* Converting a partial string */
        char* str3[10] = char* str3();
        x = atoi(str3);
        printf("Converting '99Hello!': %d\n", x);
        return 0;
}
