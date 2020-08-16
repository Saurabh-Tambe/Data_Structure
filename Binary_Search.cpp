#include<iostream>
using namespace std;
int main()
{
int n,i,arr[10],search,first,last,middle;
cout<<"Enter total no of elements in list:";
cin>>n;
cout<<"Enter"<< n <<"numbers in accending order:";
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
cout<<"Enter number to be search:";
cin>>search;
first=0;
last=n-1;
middle=(first+last)/2;
while(first<=last)
 {
    if(arr[middle]<search)
    {
       first=middle+1;
    }
    else if(arr[middle]==search)
    {
        cout<< search <<"found at location="<< middle+1 <<"\n";
       break; 
    }
    else
    {
     last=middle-1;
    }
  middle=(first+last)/2;
   }
   if(first>last)
    {
      cout<<"Not found!!!"<< search <<" is not present in the list:";
    }
return 0;
}
     


/*OUTPUT:-
student@admin1-OptiPlex-760:~$ g++ bin.cpp
student@admin1-OptiPlex-760:~$ ./a.out
Enter total no of elements in list:5
Enter5numbers in accending order:4 6 8 9 74
Enter number to be search:9
9found at location=4
student@admin1-OptiPlex-760:~$ 

 
*/

 
