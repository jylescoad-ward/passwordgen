/*This is a simple C++ program that generates a random password*/
/*I have recently modified this code to ensure atleast one number and one special character is included in the password*/
/*The logic behind random strings is derived from http://www.cplusplus.com/forum/windows/88843/*/
/*Edited and Modified by-Amit Mathew*/
/*Don,t forget to upvote the code if you liked it!,😉*/
#include<iostream>
#include<cstdlib> 
#include<ctime> 
using namespace std; 
static const char alphnum[]="0123456789" "!@#$%^&*" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz"; 
int strLen=sizeof(alphnum)-1; 
char GenRand()
{ 
 return alphnum[rand()%strLen]; 
} 
 int main() 
 { 
  int n,c=0,s=0;
  srand(time(0));
  cout<<"Password Length: ";
  cin>>n;
   cout<<endl;
   cout<<endl;
  N:
  char C;
  string D;
  for(int z=0; z < n; z++) 
   { 
     C=GenRand();
     D+=C;
     if(isdigit(C))
     {
         c++;
     }
    if(C=='!' || C=='@' || C=='$' || C=='%' ||  C=='^' || C=='&'|| C=='*'|| C=='#')
    {
        s++;
    }
   }
   if(n>2 && (s==0 || c==0))
   {
      goto N; 
   }
   cout<<D; 
   cout<<endl;
   cout<<endl;
   return 0; 
}
