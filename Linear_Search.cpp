#include<iostream>
using namespace std;
int main ()
{
int a[100],n,x,y,i;
cout<<"\n This is Program of Linear Search \n\n";
cout<<" Enter no. of elements=";
cin>>n;
cout<<"\n Enter the elements=\n";
 for(i=0;i<n;i++)
 {
cin>>a[i];
 }
cout<<"\n Enter the element which you want search=";
cin>>x;
for(i=0;i<n;i++)
{
if(a[i]==x)
{
cout<<"\n Element found at position="<<i+1;
y=1;
break;
}}

if(y==0)
{
cout<<x<<"Number not found in the list";
}
return 0;
}



/*Output:-
student@admin1-OptiPlex-760:~$ g++ lin.cpp
student@admin1-OptiPlex-760:~$ ./a.out

 This is Program of Linear Search 

 Enter no. of elements=5

 Enter the elements=
 4 6 9 8 5 

 Enter the element which you want search=9 

 Element found at position=3
*/


