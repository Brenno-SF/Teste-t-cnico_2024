#include <stdio.h>
enum {false, true};

int isFibonacci(int n){
  int first = 0, second = 1, result;

  for (int i = 0; i < n; i++)
  {
    if (i <= 1)
      result = i;
    else
    {
      result = first + second;
      first = second;
      second = result;
    }
    if (n == result)
    {
        return true;
    }else if (result > n)
    {
        return false;
    }
  }
  return false;
}

int main()
{
  int n, response;
  scanf("%d", &n); 

  response = isFibonacci(n);   

  if (response)
  {
    printf("Este numero pertence a sequencia de fibonacci");
  }else 
  {
   printf("Este numero nao pertence a sequencia de fibonacci");
  }
     
  return 0;
} 