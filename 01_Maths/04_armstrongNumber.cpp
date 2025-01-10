// 371 = 3^3 + 7^3 + 1^3 = 371


#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
    int dup=n;
	int sum = 0;
	while(n > 0){
		int ld = n % 10;
		sum =  sum + (ld*ld*ld);
		n = n / 10;
	}
    if(dup==sum){
        cout<<"armstrong number !";
    }else{
        cout<<"not a armstrong number !";
    }


}