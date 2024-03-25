#include <iostream>

using namespace std;

int main()
{
    int cont=8;
    int r,a=1;
    int auxl=1,aux2=2,aux3;
    int cons2=9;
    for(int i=1; i<10; i++){
        aux3=auxl*cons2+aux2;
        r=auxl*cont+a;
        cout<<auxl<<"*"<<cont<<"+"<<a<<"="<<r<<endl;
        auxl=auxl+aux3;
        cons2=cons2;
        aux2=aux2+1;
        a=a+1;
    }
    return 0;
}
