#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include<ctype.h>

string ari(string n){

  int i,formula=0;
  float letter=0.0,word=0.0,sentance=0.0;
  for(i=0;i<strlen(n);i++){
      if(isalnum(n[i])){
      letter=letter+1;}
       if(n[i]==' '){
      word=word+1;}
       if(n[i]=='?'||n[i]=='.'||n[i]=='!'){
         sentance=sentance+1;}
  }
    
  formula=4.71*(letter/word)+0.5*(word/sentance)-21.43+1;
    
  switch (formula){
    case 1: printf("Kindergarten");
    break;
    case 2: printf("First/Second Grade");
    break;
    case 3: printf("Third Grade");
    break;
    case 4: printf("Fourth Grade");
    break;
    case 5: printf("Fifth Grade");
    break;
    case 6: printf("Sixth Grade");
    break;
    case 7: printf("Seventh Grade");
    break;
    case 8: printf("Eighth Grade");
    break;
    case 9: printf("Ninth Grade");
    break;
    case 10: printf("Tenth Grade");
     break;
     case 11: printf("Eleventh Grade");
     break;
     case 12: printf("Twelfth grade");
     break;
     case 13: printf("College student");
     break;
     case 14: printf("Professor"); 
     break;
    }

}
