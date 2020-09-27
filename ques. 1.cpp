#include <stdio.h>
//overflow
using namespace std;

int main()
{
    unsigned char n=250;
    int i=0;
      for(i=0; i<10; i++){
          n=n+1;
        printf("%u", n);
      }


 //the output is up to the number 255. since unsigned char only allows 255 characters thus there is an overflow to a really low value which is 0.
#include <stdio.h>
 using namespace std;


  char m= 120;
  int j=0;
    for(j=0; j<10;j++){
      m= m+1;
    printf("%d", m);
    }
//the output goes to 127 because its the maximum a signed char can give. the rest overflow to -127.


    #include <stdio.h>
    using namespace std;
    //underflow

    unsigned char x =5;
    int y=0;
    for( y=0;y<10; y++){
            x=x-1;
    printf("%u", x);
    }
// the output underflows to 255 from 0

#include <stdio.h>
using namespace std;

char z=5;
int c=0;
for(c=0;c<10;c++){
        z=z-1;
printf("%d",z );}
    return 0;
}






