#include<stdio.h>

//Devlop a program that find the length of a string using a pointer.

void string_of_length(char *ptr)
{
   int length;
    while(*ptr !=NULL)
    {
    	length++;
    	ptr++;
	}
	printf("The length of string : %d\n",length);
	
}

void main()
{
	char name[50];
	
	printf("Enter any string : ");
	gets(name);
	string_of_length(&name); 
}
