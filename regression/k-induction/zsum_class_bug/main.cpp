#include <cassert>

#define a (2)
int nondet_int();

class Sum
{
  public:
    int res;

    Sum(int N)
    {
      int i, n=N, sn=0;

      for(i=1; i<=n; i++)
        if(i<20)
          sn = sn + a;

      res = sn;
    }
};

int nondet_int();
int N=nondet_int();

int main() 
{
  Sum s(N);
  assert(s.res==N*a || s.res == 0);

  return 0;
}
