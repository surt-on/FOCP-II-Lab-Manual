#include <iostream>
using namespace std;

class C{
    int c1;
    int c2;
    public:
    C(){
        c1=0;
        c2=0;
    }
    C(int c1,int c2)
    {
        (*this).c1=c1;
        this->c2=c2;
    
    }
    void display()
    {
        cout<<"the values of c1->"<<c1<<" and c2->"<<c2<<endl;
    }
};
int main()
{
    int A;
    cout<<"enter the numbers";
    cin>>A;
    C C1,*C2=new C[A];
    
    C1.display();
    (*C2).display();

    return 0;
}