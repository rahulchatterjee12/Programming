#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int maxand=0,maxor=0,maxXor=0;
  for (int i = 1;i<=n;i++){
      for(int j = i+1;j<=n;j++){
          if (maxand<(i&j) && (i&j)<k){
              maxand = i&j;
          }
          if (maxor<(i|j) && (i|j)<k){
              maxor = i|j;
          }
          if (maxXor<(i^j) && (i^j)<k){
              maxXor = j^j;
          }
      }
  }
  printf("%d\n%d\n%d",maxand,maxor,maxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
