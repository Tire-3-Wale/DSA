#include<iostream>
using namespace std;
void Update(int **p2){

// p2 = p2+1;
// Kia isse koi change huaa...?---->Nahi

*p2 = *p2+1;
// Kia isse koi change huaa...?-->haa

// **p2 = **p2+1;
// Kia isse koi change huaa...?--->haa

}
int main(){
    int i = 5;
    int *p = &i;
    int ** p2 = &p;

    cout<<"BEFORE"<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
    Update(p2);
    cout<<"AFTER"<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;

return 0;
}