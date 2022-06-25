#include <stdio.h>

int main() {
   char keyword[32][10]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"
   } ;
   char str[20];
   puts("Enter a string");
   gets(str);
   int check=0;
   for(int i = 0; i < 32; i++) {
      if(strcmp(str,keyword[i])==0) {
         check=1;
      }
   }
   if(check==1)
      printf("%s is a keyword",str);
   else
      printf("%s is not a keyword",str);
}
