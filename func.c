#include <stdio.h>

int g (int a) {
	return a*2;
}

int f(int a, int b){
	return g(a)+g(b);
}

int main() {
	printf("%d\n", f(1,2));
	return 0;
}
