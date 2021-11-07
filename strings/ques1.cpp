#include<bits/stdc++.h>
using namespace std;
 // Given a sentence, count the number of alphabets ,digits and spaces
int main() {
   
    char ch;
    int digit=0,alpha=0,space=0;
    do{
        ch = cin.get();
        if(ch>= '0' && ch<='9')
        {
            digit++;
        }
        else if(ch>='a' && ch<='z')
        {
            alpha++;
        }
        else if(ch==' ')
        {
            space++;
        }
    }while(ch!='\n');
    
    cout<<"number of alpha is "<<alpha<<" number of dig is "<<digit<<" number of space is "<<space;

    return 0;
}