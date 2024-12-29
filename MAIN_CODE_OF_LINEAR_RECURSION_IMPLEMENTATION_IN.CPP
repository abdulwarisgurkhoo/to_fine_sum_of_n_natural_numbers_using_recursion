/**************************TO PRINT THE SUM OFN NATURAL NUMBERS USING RECURSION*************************/
#include<iostream>
using namespace std;
//recursive function

int call(int num)
  {
    if(num>0)
      {   
          
          return call(num-1)+num;    
      }
  }

//main function
int main()
  {
      int num;
    cout<<"enter number upto which you want to calulate the sum of numbers \n";
    cin>>num;
    //calling function
    cout<<"the sum is  : "<<call(num);
    return 0;
  }
