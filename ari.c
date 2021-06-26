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
    default :return "-1";
    case 1: return "Kindergarten";
    case 2: return "First/Second Grade";
    case 3: return "Third Grade";
    case 4: return "Fourth Grade";
    case 5: return "Fifth Grade";
    case 6: return "Sixth Grade";
    case 7: return "Seventh Grade";
    case 8:return "Eighth Grade";
    case 9:return"Ninth Grade";
    case 10:return"Tenth Grade";
    case 11:return"Eleventh Grade";
    case 12:return"Twelfth grade";
    case 13:return"College student";
    case 14: return"Professor"; 
    }

}
