/*Считает конкретный пример и отображает ответ в научной нотации*/
#include <stdio.h>
int main(void)
{
	printf("%.2e\n", (3.31*10-8*2.01*10-7)/(7.16*10-6+2.01*10-8));
	return 0;
}