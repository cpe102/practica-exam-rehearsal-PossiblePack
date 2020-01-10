#include <iostream>
#include <cmath>
using namespace std;

double sumSqrt(float N){
    double i=1, x, sum = 0;
    if(N<=0){
    	sum = sum + 0.00000;
	}else{
		while(i<=N){
    	x = 1/sqrt(i);
        sum = sum + x;
        i++;
    }
    }
    return sum;
}

int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
