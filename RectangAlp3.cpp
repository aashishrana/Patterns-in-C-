//A B C D E
//F G H I J
//K L M N O
//P Q R S T
//U V W X Y

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	char start = 'A';
	
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			//char ch = 'A' + j - 1;
			cout << start <<" ";
			 start++;
		}
		cout << endl;
	}
}
