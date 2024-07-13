/*#include<bits/stdc++.h>
using namespace std;

int main(){
 string s="ram";
 if(iswalnum(s))
   cout<<"YES";
  else
   cout<<"NO";
 } */
 
 // Program to illustrate
// iswalnum() function
#include <cwctype>
#include <iostream>
using namespace std;

int main()
{

	string ch1 = "3";
	wchar_t ch2 = '&';

	// Function to check if the character
	// is alphanumeric or not
	if (iswalnum(ch1))
		wcout << ch1 << " is alphanumeric ";
	else
		wcout << ch1 << " is not alphanumeric ";
	wcout << endl;

	if (iswalnum(ch2))
		wcout << ch2 << " is alphanumeric ";
	else
		wcout << ch2 << " is not alphanumeric ";

	return 0;
}

