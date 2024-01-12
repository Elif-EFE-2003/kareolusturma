#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class ciz{
 public:
	int en;
	int boy;
	ciz(int _x=1,int _y=1){
		en=_x;
		boy=_y;
	}
	int basla(int);
};
int ciz::basla(int n){
	for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                std::cout << "* ";
            } else {
                std::cout << "  "; 
            }
        }
        std::cout << std::endl;
    }
	cout<<endl;
	if(n>1){
		return ciz::basla((n/2));
	}
	else if(n==1){
		return 0;
	}
}
int main(int argc, char** argv) {
	ciz dortgen(12,12);
	dortgen.basla(12);
	return 0;
}
