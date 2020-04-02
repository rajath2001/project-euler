#include<bits/stdc++.h>

using namespace std;

int main()
{
    map <int,int> m;
    m[0] = 0;
    m[1] = 3;//one
    m[2] = 3;//two
    m[3] = 5;//three
    m[4] = 4;//four
    m[5] = 4;//five
    m[6] = 3;//six
    m[7] = 5;//seven
    m[8] = 5;//eight
    m[9] = 4;//nine
    m[10] = 3;//ten
    m[11] = 6;//eleven
    m[12] = 6;//twelve
    m[13] = 8;//thirteen
    m[14] = 8;//fourteen
    m[15] = 7;//fifteen
    m[16] = 7;//sixteen
    m[17] = 9;//seventeen
    m[18] = 8;//eighteen
    m[19] = 8;//nineteen
    m[20] = 6;//twenty
    m[30] = 6;//thirty
    m[40] = 5;//forty
    m[50] = 5;//fifty
    m[60] = 5;//sixty
    m[70] = 7;//seventy
    m[80] = 6;//eighty
    m[90] = 6;//ninety

long long ans = 0;
int flag = 0;
int i;
for(int k = 1;k <=999;k++)
{
    flag = 0;
  i = k;
  if((i % 100)/10 != 1)
   ans += m[i % 10]; // units
   else{
       if((i % 100)/10 == 1)
       {
           ans += m[i % 100];
       }
   }
   if(i % 10 > 0 || i % 100 > 0)
   flag = 1;
   i = i/10;
   if(i > 0)
   {
       if(i%10 != 1)
       ans +=m[(i%10)*10];
       i /= 10;
        if(i > 0)
        {
            ans+=(m[i] + 7);
            if(flag == 1)
            {
                ans += 3;
            }
        }
   }

}
    
  cout<<(ans + 11);
}