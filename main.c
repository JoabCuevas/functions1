#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 30


//#1
int reverse_string(char string[MAX]){
  int i;
  int len=strlen(string);
  for(i=len-1; i>=0; i--){
    printf("%c",string[i]);
  }

  printf("\n");
  return 0;
}

//#2
int leng(char string1[MAX], char string2[MAX]){
  if (strlen(string1)==strlen(string2)){
    return 0;
  }
  else{
    return 1;
  }
}

//#3
char comparestrings(char string1[MAX],char string2[MAX]){
  char var = '0';
  int i;
  for(i=0;i<MAX;i++)
  {
    if ( string1[i]!= string2[i]){
      var = string1[i];
      break;
    }
  }
  return var;
}

//#4
int palindrome(char string[MAX]){
  int i;
  int len=strlen(string);
  for(i=len-1; i>=0; i--){
    if(string[len-i-1]!=string[i]){
      return 0;
    }
  }
  return 1;
}

//#5
void delete_vowels(char word[], size_t size){
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char letter;
    int flag;

    for(int i = 0; i<size; i++){
        flag = 0;
        letter = word[i];
        for(int j = 0; j<10; j++){
            // printf("Letter => %c", letter);
            if(vowels[j]==letter){
                flag = 1;
            }
        }

        if(flag==0){
            printf("%c", letter);
        }
    }
}



int main(int argc, char** argv) {
  char string1[MAX]= "Good Morning";
  char string2[MAX]= "Hello world";

//#1
reverse_string(string1);
//#2
printf("The length is %d\n", leng("Hello", "Hello"));
//#3
printf("the value of compare is %c\n", comparestrings("hola","hola"));
//#4
printf("the value of palindrome is %d\n",palindrome("01210"));
//#5
delete_vowels("Murcielago", 11);
return 0;
}

