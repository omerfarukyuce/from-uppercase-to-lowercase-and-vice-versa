#include <stdio.h>
#include <stdlib.h>

void upperToLower(char*);
void lowerToUpper(char*);
int main() {

  char sentence[100];
  int choice;
  
  puts("Make your choice: ");
  puts("1- Convert from uppercase to lowercase.");
  puts("2- Convert from lowercase to uppercase.");

  scanf("%d",&choice);
  getchar();
  
  switch(choice){
    case 1: puts("Enter your sentence: ");
            gets(sentence);
            upperToLower(sentence);
            break;
      
    case 2: puts("Enter your sentence: ");
           gets(sentence);
           lowerToUpper(sentence);
           break;
    
    default: puts("Wrong choice. You should enter 1 or 2.");
  }
  printf("\n\n");
  
  return 0;
}

void upperToLower(char *ptr){
  for(; *ptr!='\0'; ptr++){
    if(*ptr>='A' && *ptr<='Z'){
      putchar(*ptr+32);//+32 for ASCII
    }else{
      putchar(*ptr);
    }
  }
}

void lowerToUpper(char *ptr){
  for(; *ptr!='\0'; ptr++){
    if(*ptr>='a' && *ptr<='z'){
      putchar(*ptr-32);//-32 for ASCII
    }else{
      putchar(*ptr);
    }
  }
}

