//6) Write a Program to Find GCD or HCF of two numbers entered by user
#include<iostream>
using namespace std;
int main()
//method 1
{
    int n1,n2,hcf;
    cin>>n1>>n2;
    if (n1<n2)
    {
       int temp=n1;
       n1=n2;
       n2=temp; 
    }
    
    for (int i = 1; i <=n2; i++)
    {
        if (n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    cout<<hcf;
    return 0;
}

// method 2

/*
Using while loop
#include <iostream>
using namespace std;
int main() {
int n1, n2;
cout << "Enter two numbers: ";
cin >> n1 >> n2;
while(n1 != n2) {
if(n1 > n2)
n1 -= n2;
else
n2 -= n1;
}
cout << "HCF = " << n1;
return 0;
}
*/

      //concept:----

/*In the above program, the smaller number is subtracted from the larger number and that
number is stored in place of the larger number.
Here, n1 -= n2 is the same as n1 = n1 - n2. Similarly, n2 -= n1 is the same as n2 = n2 -
n1.
This process is continued until the two numbers become equal which will be HCF.
Let us look at how this program works when n1 = 16 and n2 = 76.
n1 n2 n1 > n2 n1 -= n2 n2 -= n1 n1 != n2
16 76 false - 60 true
16 60 false - 44 true
16 44 false - 28 true
16 28 false - 12 true
16 12 true 4 - true
4 12 false - 8 true
4 8 false - 4 false
Here, the loop terminates when n1 != n2 becomes false.
After the final iteration of the loop, n1 = n2 = 4. This is the value of the GCD/HCF since
this is the greatest number that can divide both 16 and 76.*/