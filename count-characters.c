//write a program to read character until a * is encountered. Also count the numbr of uppercase , lowercase, and numbered entered

#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	int lowers = 0, uppers = 0, numbers = 0;
	printf("\n Enter any character: ");
	scanf("%c",&ch);
	
	do{
		if(ch>='A' && ch <='Z')
		uppers++;
		if(ch>='a' && ch <='z')
		lowers++;
		if(ch>= '0' && ch <='9')
		numbers++;
		fflush(stdin);
		printf("\n Enter another character. Enter * to exit.");
		scanf("%c",&ch);
	}while(ch != '*');
	
	printf("\n Total count of lower case characters entered = %d ",lowers);
	printf("\n Total count of upper case characters entered = %d ",uppers);
	printf("\n Total count of numbers characters entered = %d ",numbers);
	return 0;
}
