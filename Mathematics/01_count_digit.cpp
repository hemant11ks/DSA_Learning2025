#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

  int x= 123;
  int count = 0;

  while(x!=0){
    x = x/10;
    count++;
  } 

  cout<<count<<endl;
}