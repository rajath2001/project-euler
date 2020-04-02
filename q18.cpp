#include<bits/stdc++.h>
#include <fstream> 
#include <string>

using namespace std;

int main()
{

    string myText;


    ifstream MyReadFile("pyramid.txt");
    int i = 0;
    int j = 0;
    int num[15][15];

    while (getline (MyReadFile, myText))
    {
        
      for ( int i = 0 ; i < myText.length(); i+=3)
    {
     num[j][i/3] = 10*((myText[i] - 48)) +   (myText[i+1] - 48) ;       
    }
    
        j++;

    }

    


    for(int n = 14;n >= 1;n--)
    {
        int j = n;

        for(int l = 0; l < j; l++)
        {
            num[n-1][l] += max(num[n][l] , num[n][l+1]);
        }

    }

    cout<<num[0][0];




    
  
}