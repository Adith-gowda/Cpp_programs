//QUESTION:

/*Underscored PascalCase
PascalCase is a naming convention of variables in programming language in which a variable name is formed from multiple words that are joined together as a single word with the first letter of each of the multiple words capitalized. Underscored PascalCase is an extension of PascalCase where an underscore is introduced between each word. Given ‘n’ words write a C program to form underscored PascalCase name using the given ‘n’ words. For example, if five words counter, for, looping, array, elements then the output should be Counter_For_Looping_Array_Elements.

Note:

(i) Strcat is a built-in function in C (declared in string.h) that takes two arguments, i.e, two strings and stores the resultant concatenated string in the first string specified as first argument to the function.

(ii) It is important to remember that C does not initialize memory and we have to initialize it whenever required and we will get unexpected results otherwise

Boundary Conditions

0<n<=10

Length of each word < 20

Input Format

First line contains the number of Words

Next ‘n’ lines contain words

Output Format

Print the Underscored PascalCase name formed with the given words*/

//SOLUTION IN C++

#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    int n;
    string a[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i][0]=char(toupper(a[i][0]));
        
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i==n-1) break;
        else cout<<"_";
    }
}
