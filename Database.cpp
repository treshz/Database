#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{

	/*Th user's first and last name are stored in two separate strings*/

	char FirstName[15];
	char surname[15];
	char FullName[31];

	/*The user is then prompted to enter their first and last name*/

	printf("Enter your first name:");
	gets_s(FirstName);

	printf("Enter your first name:");
	gets_s(surname);

	/*These are then both copied to the third string and are combined with 
	a space between them*/

	strcpy(FullName, FirstName);
	strcat(FullName, " ");
	strcat(FullName, surname);

	/*There are four different strings which will contain the variables for 
	the user's address*/

	char address[50];
	char town[50];
	char county[50];
	char postcode[150];
	char FullAddress[200];

	/*The user is prompted to enter each variable of their address*/

	printf("Address: ");
	gets_s(address);

	printf("Town: ");
	gets_s(town);

	printf("County: ");
	gets_s(county);

	printf("Postcode: ");
	gets_s(postcode);

	/*Each string is copied to a fifth string which will contain the user's full
	address. Relevant commas, spaces and new lines are also copied in to format the
	full address correctly*/

	strcpy(FullAddress, address);
	strcat(FullAddress, ",\n");
	strcat(FullAddress, town);
	strcat(FullAddress, ", ");
	strcat(FullAddress, county);
	strcat(FullAddress, "\n");
	strcat(FullAddress, postcode);

	/*The user's full name and address are then printed out to the screen in the 
	correct format*/

	printf("\n");
	printf("%s", FullName);
	printf("\n\n");
	printf("%s", FullAddress);
	printf("\n\n");

}