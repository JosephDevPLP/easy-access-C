#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
	char userinput[];
int main(){

	 system("cls");
       
	while(1){
		 printf("Master =>");
           gets(userinput);
		if(strcmp(userinput,"exit")==0){
         system("cls");
         printf("Ok Bye (;-;)\n");
         break;
		}else	if(strcmp(userinput,"hi")==0){
         system("cls");
         printf("hello Master :) \n");
       
		}	else if(strcmp(userinput,"note")==0){
         system("start notepad");
         system("cls");
         printf("Note open\n");
         
		}
		else if(strcmp(userinput,"code")==0){
         system("code");
         system("cls");
         printf("Visual Studio Code open\n");
         
		}else if(strcmp(userinput,"cmd")==0){
         system("start cmd");
         system("cls");
         printf("Comand Prompt open\n");
         
		}
		else if(strcmp(userinput,"google")==0){
         system("start https://google.com.br");
         system("cls");
         printf("Google Open\n");
         
		}	else if(strcmp(userinput,"github")==0){
         system("start https://github.com.br");
         system("cls");
         printf("Github Open\n");
         
		}	else if(strcmp(userinput,"youtube")==0){
         system("start https://youtube.com.br");
         system("cls");
         printf("Youtube Open\n");
         
		}
			else if(strcmp(userinput,"chrome")==0){
         system("start chrome");
         system("cls");
         printf("Google Chrome Open\n");
         
		}
		else if(strcmp(userinput,"time")==0)
     {
         time_t s, val =1 ;
         struct tm* current_time;
         //time in second
         s = time(NULL);
         current_time = localtime(&s);
         //print time in minute
         //print hour and second
         printf("bot ==> %02d:%02d:%02d\n",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);
     }
	}

	return 0;
}
