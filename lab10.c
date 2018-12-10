#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_SIZE  30
#define NUMBER_OF_QUESTIONS 11
#define MAX_RESPONSE_COUNT  11 



/*
* Location: Temple University Computer Science
* Programmer: Alyssa Debrosse
* Class: Introduction to C Programming 1057 Fall 2018 Section 005
* Assignment: 10
* Date: SDeec 9, 2018
* Version: 1
* Description: Help users examine data from file created in Lab 9
*/

int main(){

	FILE *cheatFile = fopen("f.csv","r");
	
	int  id;
	char firstname[30];
	char lastname[30];
	char answers[11];
	//use %[^, ] instead of %s
	fscanf(cheatFile, "%d,%[^, ] %[^, ],%[^, ]", &(id), &firstname, &lastname, &answers);
	printf("%d %s %s %s", id,firstname, lastname,answers);
/*

	typedef struct {
	int id;
	char full_name[ MAX_NAME_SIZE ];
	char responses[ NUMBER_OF_QUESTIONS ];
    } bubble_response;
    typedef bubble_response full_data[ MAX_RESPONSE_COUNT ];

	fscanf(cheatFile, "%d,%[^,],[^,]", &(id),&full_name, &responses);
	printf("%d %s %s",id, fullname, responses);



	while(!feof(cheatFile)&& (fscanf(cheatFile, "%d,%s,%s", &(id))==1)){
		printf("%d \n",id);
	}
*/



return EXIT_SUCCESS;
}




/* Switch Statement

int  user_entered_choice;
printf("Enter choice 1-5:",user_entered_choice);
scanf("%d", &user_entered_choice);

switch(user_entered_choice){
	case 1: // function call for menu 1
		break;
	case 2:// function call for menu 2
		break;
	case 3: // function call for menu 3 
		break;
	case 4:// function call for menu 4
		break;
	case 5: puts("End of program");
		break;
}

*/
