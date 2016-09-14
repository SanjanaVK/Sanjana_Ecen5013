
#include <stdio.h>
#include "hw1.h"
int main(void)

{

char word[100];

int length = 0;

printf("Enter a string: ");

gets(word);

printf("String before reverse is:%s\n", word);

while(word[length]!='\0')

{

length++;

}

reverse(word,length);
return 1;

}
