#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char str1[50],str2[50];
	printf("\n Enter the string to check for Palindrome : ");
	scanf("%s",&str1);
	strcpy(str2,str1);
	strrev(str2);
	if(strcmp(str1,str2)==0){
		printf("String is Palindrome");
	}
	else{
		printf("String is not Palindrome");
	}
	getch();
}
