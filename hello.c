#include <stdio.h>
int main(){
char lol[20] = "Abhra Ghosh";
printf("%s\n",lol);
//printf("Display Time is %S\n",system("date > out.txt"));
printf("Date: %s %s\n",__DATE__,__TIME__);
return 0;
}
