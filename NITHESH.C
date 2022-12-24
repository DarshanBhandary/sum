#include<string.h>
#include<stdlib.h>
#include <stdio.h>
#include<windows.h>
//hello nithesh

void red () {
  printf("\033[1;31m");
}
void green(){
   printf("\033[0;32m");
}
void yellow(){
   printf("\033[0;33m");
}
void reset() {
  printf("\033[0m");
}
void blue(){
   printf("\033[0;34m");
}
void purple(){
   printf("\033[0;35m");
}
void cyan(){
   printf("\033[0;36m");
}

int login();
int main_menu();
void withdrawal(){}
void deposit(){}
void balanceenquiry(){}
void banking(){}
void security(){}
void costumerservice(){}
int main()
{
login();
}
//login function

int login()
{
	system("cls");
	char username[15],password[10];
	char uname[]="nithesh";
	char pass[]="enigma";
	int x,y,n=1;
	
	yellow();
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	cyan();
	printf("\t\t\t\t    WELCOME\t\t\n\t\t\t\t  USER  LOGIN\n");
	yellow();
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    reset();
	
	do{
		
		printf("\n\t\tENTER THE USERNAME :");
		scanf("%s",username);
		
		printf("\n\t\tENTER YOUR PASSWORD: ");
		scanf("%s",password);
		x=strcmp(username,uname);
		y=strcmp(password,pass);
		
		if(x==0){
			if(y==0){
                green();			
				printf("YOU HAVE SUCCESSFULLY LOGGED IN..............\n");
				reset();
				main_menu();
				break;
			
				
			}else{
			    red();
				printf("INCORRECT PASSWORD!!!!!!\n");
			}
		}else{
		    red();
			printf("USERNAME DOES NOT EXIST!!!!!\n");
		}
		reset();
		n++;
		
		if(n>5)
        {
            red();
        	printf("\n*****ACCESS DENIED*****\n");
        	reset();
        	purple();
        	printf("\n PLEASE VISIT THE NEAR BY BRANCH FOR MORE DETAILS....  ");
	
		}		
		
		
	}while(n<=5);
	return 0;
}


//menu
int main_menu(){

blue();
printf("=====================================================================================\n");
printf("                                                                              \n");
yellow();
printf("                        WELCOME TO THE BANKING SUPER APP\n");
blue();
printf("                                                                              \n");
printf("=====================================================================================\n");

red();
printf("_____________________________________________________________________________________\n");
printf("*************************************************************************************\n");
yellow();
printf("                           1.WITHDRAWAL..\n");
printf("                           2.DEPOSIT\n");
printf("                           3.BALANCE ENQUIRY\n");
printf("                           4.BANKING\n");
printf("                           5.SECURITY\n");
printf("                           6.COSTUMER SERVICE\n");
printf("                           7.EXIT\n");
red();
printf("*************************************************************************************\n");
printf("_____________________________________________________________________________________\n");
reset();

int ch;
printf("Enter your choice:");
scanf("%d",&ch);

switch(ch)
{
  case 1: withdrawal();break;
  case 2: deposit();break;
  case 3: balanceenquiry();break;
  case 4: banking();break;
  case 5: security();break;
  case 6: costumerservice();break;
  case 7: exit ;   
  default: printf("INVALID CHOICE........\n"); break;
}

return 0;
}
