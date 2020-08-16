#include<iostream>
using namespace std;
int main()
{
int i,j,n,adr,k;
float a[100],temp,min;
char ans;

cout<<"******Sorting Percentage of First year Students******";
do
{
cout<<"\nEnter the operation which you want to perform\n1.Bubble Sort\n2.Selection Sort";
cin>>k;

switch(k)
{

 case 1:
        cout<<"\n***** Bubble Sort *******";
        cout<<"\nEnter total number of Students:\n";
        cin>>n;
        cout<<"\n Enter percentage of "<<n<<" students";
        for(i=0;i<n;i++)
        {
          cin>>a[i];
        }

       for(i=0;i<n;i++)
      {
        for(j=0;j<n-1;j++)
        {
           if(a[j]>a[j+1])
          {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
          }
       }
     }
    cout<<"\n Percentage of students in Ascending order are given below :-\n";

   for(i=0;i<n;i++)
   {
      cout<<"\t"<<a[i];
   }
    break;

case 2:

    cout<<"\nEnter How many students are there???\n";
    cin>>n;
    cout<<"\nEnter percentage of "<<n<<" students";
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
  
    for(j=0;j<n;j++)
    {
       min=a[j];
       adr=j;
       for(i=j+1;i<n;i++)
        {
            if(min>a[i])
            {
                min=a[i];
                 adr=i;
            }
        }
         temp=a[j];
         a[j]=a[adr];
         a[adr]=temp;
        
    }
    cout<<"\n Percentage of students in Ascending order are given below :-\n";
    for(i=0;i<n;i++)
      cout<<a[i]<<"   ";
    break;

  default:cout<<"\nYou have select wrong option";
return 0;     
}
  cout<<"\nDo you want to perform again?????";
  cin>>ans;
}
while(ans=='y'||ans=='Y');
}
/* OUTPUT:- 
student@admin1-OptiPlex-760:~$ g++ sort.cpp
student@admin1-OptiPlex-760:~$ ./a.out
******Sorting Percentage of First year Students******
Enter the operation which you want to perform
1.Bubble Sort
2.Selection Sort
1

***** Bubble Sort *******
Enter total number of Students:
5

 Enter percentage of 5 students
92 63 86 45 78.45

 Percentage of students in Ascending order are given below :-
	45	63	78.45	86	92
Do you want to perform again?????y

Enter the operation which you want to perform
1.Bubble Sort
2.Selection Sort
2
***** Selection Sort *******
Enter How many students are there???
5

Enter percentage of 5 students 
74 56 89.45 86 75 

 Percentage of students in Ascending order are given below :-
56   74   75   86   89.45   
Do you want to perform again?????no
student@admin1-OptiPlex-760:

*/





