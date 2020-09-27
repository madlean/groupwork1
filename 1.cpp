#include <iostream>

using std :: cout;
using std:: cin;
using std ::endl;

int main()
{
    int grade;
     int  aCount=0;
      int bCount=0;
      int cCount=0;
       int dCount=0;
       int fCount=0;
       char EOF;
    cout <<"Enter the letter grades" << endl
        <<"Enter the EOF character to end input"<<endl;

    while( (grade= cin.get())!=EOF){
        if ((grade= 'A') &&(EOF='a') ){
            aCount=++aCount;
    } else if(( grade='B') && (EOF = 'b') ) {
        bCount= ++bCount;
    }else if((grade='C') && (EOF ='c')){
        cCount=++ cCount;
    }else if((grade='D') && (EOF= 'd')){
        dCount= ++dCount;
    }else if((grade= 'F') && (EOF ='f')){
         fCount= ++fCount;
    }else{
        cout<< "Incorrect letter grade are entered"
            << " Enter a new grade"<<endl;
    }
    }
        cout<<"\n\nTotals for each letter grade are:"
             << "\nA: " << aCount
             << "\nB: " << bCount
             << "\nC: " << cCount
             << "\nD: " << dCount
             << "\nF: " << fCount << endl;


return 0;
}
















