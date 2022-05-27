/*By::Cebastian Santiago
* Leetcode 509
*/
#include<iostream>


int fib(int n) {
	//1.Base case if n == 1 or n == 0
	if (n == 0){
		return 0;
	}
	if (n == 1){
		return 1;
	}

	return fib(n - 1) + fib(n - 2);

}





int main(int argv, char* argc[]) {
	std::cout << fib(3) << std::endl;
}