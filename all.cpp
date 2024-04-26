#include "ks.h"
using namespace std;
int main(void){
	string input_file = "data.txt";
	Parser parser(input_file);
	parser.read();
	
	Solver solver(&parser);
	cout << solver.get_profit() << endl;
	return 0;
}
