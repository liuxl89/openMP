#include <iostream>
#include <cstdlib>
using namespace std;

const int N= 20;
int main()
{
   srand(time(NULL));
   double array[N];

   for(int j=0; j<N; j++)
   array[j]= double(rand())/ RAND_MAX- 0.5;

   return 1;
}
