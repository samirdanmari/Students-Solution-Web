#include <iostream>

main(){

void another_function()
{
int v1[10];
int v2[10];
for(int i=0;i<10;++i) v1[i]=v2[i];
}

bool accept3 ()
{
int tries = 1 ;
while (tries < 4){
cout << "Do you want to proceed (yorn)?\n"; // write question
char answer = 0 ;
cin >> answer; // read answer
switch (answer) {
case ´y ´:
return true ;
case ´n ´:
return false;
default :
cout << "Sorry , Idon't understand that.\ n ";
tries = tries +1;
}
}
cout << "I´ll take that for a no.\ n";
return false;
}
}