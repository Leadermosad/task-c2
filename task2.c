#include<stdio.h>



#include<stdbool.h>



#include<string.h>

/*Declarationofstructure*/

struct user

{

char name[50];

char password[15];

char email[15];

union u{

    bool active_b;

    int active_d;

}u1;

};

int main()

{

/*Declarationofarrayofstructure*/

struct user s[100];

int next=2;

char name[50],password[15],email[15];

strcpy(s[0].name,"a");

strcpy(s[0].password,"1");

s[0].u1.active_d=1;

strcpy(s[1].name,"b");



strcpy(s[1].password,"2");

s[1].u1.active_d=0;

printf("Youenteredintotheloginpage:\n");

printf("Enteryourname:\n");

scanf("%s",name);

printf("Enteryourpassword:\n");

scanf("%s",password);

int i=0;



while(true)

{

   

if(s[i].password[0]=='\0'&&s[i].name[0]=='\0')

{

printf("First,youmustregister:\n");

break;

}

else if((strcmp(s[i].password,password)!=0&&strcmp(s[i].name,name)==0)||

(strcmp(s[i].password,password)==0&&strcmp(s[i].name,name)!=0))

{

printf("Nameandpasswordnotidentical,pleasere-enter:\n");

printf("Enteryourname:\n");

scanf("%s",name);

printf("Enteryourpassword:\n");

scanf("%s",password);

i=0;



break;

}

else if(strcmp(s[i].password,password)==0&&strcmp(s[i].name,name)==0)

{ 

    if(s[i].u1.active_b==true)

printf("Successfully,youareentered:\nactivated\n");

else printf("not activated ");

return 0;

}

i++;

}

printf("Youenteredintotheregisterpage:\n");



printf("Enteryourname:\n");



scanf("%s",name);

printf("Enteryourpassword:\n");

scanf("%s",password);

printf("Enteryouremail:\n");

scanf("%s",email);

strcpy(s[next].name,name);

strcpy(s[next].password,password);

strcpy(s[next].email,email);

next++;

printf("Youareregisteredsuccessfully:\n");

return 0;

}



