#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

int main(int argc, char **argv){
  
  int i,N,j, checker = 1, tclose = 0;
  Stack s;
  s.top = NULL;
  s.size = 0;
  
  for(i = 1;i < argc;i++){
    checker = 1;
    //push(&s, argv[i][j]);
    checker = 1; tclose = 0;
    for(j = 0;j < strlen(argv[i]); j++){
      switch(argv[i][j]){
        case '{' : 
        case '[' : push(&s, argv[i][j]); break;
        case '}' : if(s.size == 0) tclose = 1;
                   else if(s.size > 0){
                      if(pop(&s) != '{'){
                        checker = 0; //parnathesis doesn't match.
                      }
                   }break;
        case ']' : if(s.size == 0) tclose = 1;
                   else if(s.size > 0){
                      if(pop(&s) != '['){
                        checker = 0; //parnathesis doesn't match.
                      }
                   }break;
        defalut : printf("doesn't match.\n");
      }
      if(!checker) break;
    }
    if(s.size > 0){
      printf("argv %d : Incorect: too many open parenthisis.\n", i);
      pop_all(&s);
    }
    else if(s.size == 0){
      if(!tclose){
        if(!checker) printf("argv %d : Incorrect : mismatch.\n", i);
        else printf("argv %d : Correct\n", i);
      }
      else{
        printf("argv %d : Incorrect: too many closed parenthisis.\n", i);
      }
    }
     
    
  }
  //if(flag) printf("argv %d: Correct\n", i);
  //pop_all(&s);

 /*
 Stack s;
 printf("Checking the parentheses in argv arguments\n");
  for(i=1;i<argc;i++){
   
     for(j=0;j<strlen(argv[i]);j++){
       /* Use stack to help with the parentheses*
         }
         }
*/



   return 0;
}
