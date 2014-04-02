#include <iostream>
#include <cstdlib>
#include <omp.h>
using namespace std;

const int N= 20;
int main()
{
   srand(time(NULL));
   double array[N];

   #pragma omp parallel for default(shared)
   for(int j=0; j<N; j++)
   array[j]= double(rand())/ RAND_MAX- 0.5;

   return 1;
}
