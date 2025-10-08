#include<stdio.h>
int main()
{
	static int i=5;
	if(--i){
		printf("\n%d \n",i);
                main();
	}
}

