#include <iostream>

using namespace std;
void printarray (int arg[], int length){
    for( int n=0; n<length; n++)
    cout<< arg[n]<<" "; cout<<"\n";

    }

int main()
{
    int firstarray[]={5,10,15};
    int secondarray[]={2,4, 6, 8, 10};

    printarray(firstarray,2);
    printarray(secondarray, 5);

    return 0;
}
 the first array outputs only 5 and 10 since it only referred to the first 2 elements.
the second array outputs all the values since it referred to all the 5 elements