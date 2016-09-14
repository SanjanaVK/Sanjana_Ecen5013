#Include “hw.h”

 

char reverse(char *str, int len)

{

int count; int i=0;

char *begin, *last, *k, temp, temp2, *space;

int l=0;

if(len==0)

{

printf("Please enter a string.\n");

return 1;

}

if(*str=="\0")

{

printf("PLease enter a valid string");

return 1;

}

space=str;

while(i<len)

{

if(*space == ' ')

{

count++;

}

i++;

space++;

}

if(count == len)

{

printf("Please enter a valid string");

return 1;

}

begin=str;

last=str+len-1;

k=str;

while(begin<last)

{

temp=*begin;

*begin=*last;

*last=temp;

last--;

begin++;

l++;

}

printf("Reverse is: ");

while(*k!='\0')

{

printf("%c", *k);

k++;

}

return 0;
}
