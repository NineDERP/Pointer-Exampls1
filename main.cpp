#include <iostream>
#define SIZE 10
#include <string.h>
using namespace std;
#include <iomanip>
int main(void){

  /*int a;
  double d;
  cout<<&a<<" size "<<sizeof(a) <<endl;
  cout<<&d<<" size "<<sizeof(d) <<endl; 
  
  int x,*p;
    p=&x;
    x=5;

    cout<< x  <<" "<< *p <<endl;
    cout<< &x <<" "<<  p <<endl;
    cout<< &p <<endl;*/

/*Example Array*/
/*
int *ip;
int a[ ] = {31415, 21828};
ip = a;
// alternative:	ip = &a[0];

cout<<a<<endl;			
cout<<ip<<" "<<*ip<<endl;	
  
(*ip)++; 
cout<<a<<" "<<a[0]<<endl;		
cout<<ip<<" "<<*ip<<endl; 	
  
ip++; 
cout<<a<<endl;		
cout<<ip<<" "<<*ip<<endl;*/ 	// print 

 /*the address is 4324, not 4321
 because the pointer is incremented 						
 by the size of an integer (4 bytes) */

char *pa, *pb, temp, i;
  char a[SIZE] ;
  cout<<"Input string:";
  cin>>a;
  int len=strlen(a);
  pa = &a[0];
  cout<< "Original: ";
  for (i = 0; i < len - 1; i++,pa++)
   cout<<setw(3)<<*pa<<" " ;//<<endl;
  //cout<<pa<<endl
cout<<setw(3)<<*pa<<endl;
  
  pa = &a[0]; pb = &a[len - 1];
cout<<"Reverse : ";
for (i = 0; i < len / 2; i++) {
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    pa++; pb--;
}
pa = &a[0];
for (i = 0; i < len - 1; i++,pa++)
cout<<setw(3)<<*pa<<" ";
  
cout<<setw(3)<<*pa<<endl;
return 0;
}
