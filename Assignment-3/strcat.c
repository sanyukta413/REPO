//store name in two array like: first_name and last_name and concatenate both arrays into a single string called 'fullname'

#include<stdio.h>
#include<string.h>

int main(){
	
	int i,j;
char first_name[10]={"Sanyukta"};
char last_name[10]={"Shrestha"};

char fullname[20];

for(i=0; first_name[i]!='\0';i++)      //copy 'first_name' into fullname
fullname[i]=first_name[i];

fullname[i]= ' ';                        //end 'first_name' with a white space


for(j=0; last_name[j]!='\0';j++)      //copy 'last_name' into fullname
fullname[i+j+1]=last_name[j];

fullname[i+j+1]='\0';                 // add null character to end fullname string
printf("\n\n");
printf("%s\n",fullname);
		
}
