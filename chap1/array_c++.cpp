#include <iostream>
using namespace std;

void array_test(){
    int foo[] = {16, 2, 77, 40, 12071};
    int n, result = 0;

    for(auto i: foo)
        result += i;

    cout << result << endl;
}

void multiDimensionalArray(){
    int jimmy [3][5] {};
    cout << jimmy[2][4] << endl;   
    
}

int main(){
    array_test();
    multiDimensionalArray();
    return 0;
}
