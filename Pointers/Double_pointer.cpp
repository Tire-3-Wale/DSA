#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;

// i ki value print karne ke teen tarike 
// Inn teeno ka output 5 he aaiga

cout << i << endl;
cout << *p << endl;
cout << **p2 << endl;

// pointer p ke aandar ko value hai usse acess karne ke bhee 3 tarike hai 
 cout << &i <<endl;
 cout << p << endl;
 cout << *p2 << endl;

return 0;
}