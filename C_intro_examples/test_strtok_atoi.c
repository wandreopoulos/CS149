#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
char str[80]= "1 3 4 5 66";
//const char s[2] = " ";
const char s[] = " \t\r\n";

char *token;
int tokeni;

/* get the first token */ 
token = strtok(str, s); 
tokeni = atoi(token);
/* walk through other tokens */ 
while( token != NULL) { 
	printf( "%s\n", token ); 
	printf("%d\n", tokeni );
	token = strtok (NULL, s); 
	//tokeni = atoi(token);
	if (token != NULL) tokeni = atoi(token);
}
return(0);
}
