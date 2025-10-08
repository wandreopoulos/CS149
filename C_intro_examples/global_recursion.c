#include<stdio.h>
int main()
{
	static int i=5; //global scoped
	if(--i){
		main();
		printf("%d ",i);
	}
}
