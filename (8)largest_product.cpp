#include<bits/stdc++.h>
#include <fstream> 
#include<string>


using namespace std;

int main()
{
    string myText;

// Read from the text file
ifstream MyReadFile("text.txt");

int num[20][20];
int j =0;

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
    
   for ( int i = 0 ; i < myText.length(); i+=3)
    {
     num[j][i/3] = 10*((myText[i] - 48)) +   (myText[i+1] - 48) ;       
    }
    j+=1;
}


long long int max = 0;
int k,h;
     for( k = 0; k <= 16;k++)
     {
         for( h = 0; h <20; h ++)
         {
             if(max < num[k][h] * num[k+1][h] * num[k+2][h] * num[k+3][h])
             {
                 max = num[k][h] * num[k+1][h] * num[k+2][h] * num[k+3][h];
             }

         }
     }

      for( k = 0; k < 20;k++)
     {
         for( h = 0; h <=16; h ++)
         {
             if(max < num[k][h] * num[k][h+1] * num[k][h+2] * num[k][h+3])
             {
                 max =  num[k][h] * num[k][h+1] * num[k][h+2] * num[k][h+3];
             }

         }
     }

     for(k = 0; k <= 16;k++)
     {
         for(h = 0; h <=16; h ++)
         {
             if(max < num[k][h] * num[k+1][h+1] * num[k+2][h+2] * num[k+3][h+3])
             {
                 max = num[k][h] * num[k+1][h+1] * num[k+2][h+2] * num[k+3][h+3];
             }

         }
     }

      for(k = 3; k <= 19;k++)
     {
         for(h = 0; h <=16; h ++)
         {
             if(max < num[k][h] * num[k-1][h+1] * num[k-2][h+2] * num[k-3][h+3])
             {
                 max = num[k][h] * num[k-1][h+1] * num[k-2][h+2] * num[k-3][h+3];
             }

         }
     }

     cout<<max;

    
  
}