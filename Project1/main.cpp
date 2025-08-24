#include <iostream>
#include "is_k_periodic.h"
using namespace std;

int main()
{
    cout << is_k_periodic("abcabcabcabc", 3) << endl;
    cout << is_k_periodic("aabaacaabaa", 5) << endl; 
    cout << is_k_periodic("aaaa", 2) << endl;        
    cout << is_k_periodic("aaaa", 4) << endl;                 
    cout << is_k_periodic("hehehehe", 4) << endl;                 
    cout << is_k_periodic("gogo", 5) << endl;                 
    cout << is_k_periodic("goga", 2) << endl;                 
}