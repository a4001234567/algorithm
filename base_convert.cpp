#include <cstdio>
#include <stack>
//convert decimal integer to other bases including 2, 4, 8, 16, -2 and so on.
using namespace std;
const int p = -2;
void convert(int ori){
    stack<int> digits;
    while (ori) {
        if (ori%p >= 0){
            digits.push(ori%p);
            ori/=p;
        }
        else {
            digits.push(-p+(ori%p));
            ori/=p;ori++;
        }
    }
    while (!digits.empty()){
        printf("%d ",digits.top());
        digits.pop();
    }
}
int main(){
    convert(-7);
    puts("\n");
    convert(14);
    return 0;
}
