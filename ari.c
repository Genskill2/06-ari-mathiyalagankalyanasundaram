#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>


int main(){
string n;
int i,letter=0,word=0,sentance=0,formula;
printf("enter");
scanf("%s",&n);
  for(i=0;i<strlen(n);i++){
      if(isalnum(n[i])==1){
      letter=letter+1;}
      }
    
  for(i=0;i<strlen(n);i++){
      if(n[i]==' '){
      word=word+1;}
      }
    
  for(i=0;i<strlen(n);i++){
      if(n[i]=='?'||n[i]=='.'||n[i]==','){
         sentance=sentance+1;}
      }    

    formula=4.71*(letter/word)+0.5*(word/sentance)-21.43+1;

    switch (formula){
        case 1: printf("kindergarden");
        case 2: printf("first or second class");
        case 3: printf("third grade");
        case 4: printf("fourth grade");
        case 5: printf("fiveth grade");
        case 6: printf("sixth grade");
        case 7: printf("seventh grade");
        case 8: printf("eighth grade");
        case 9: printf("ningth grade");
        case 10: printf("tenth grade");
        case 11: printf("eleventh grade");
        case 12: printf("twelth grade");
        case 13: printf("college student");
        case 14: printf("professor"); 
    }



}
