#include<iostream>
#include<fstream>
using namespace std;


//create page parsed by parameters
void createPage(char* pageName){
	ofstream page;
	page.open(pageName);
	page << "<!DOCTYPE html> \n";
	page << "<html> \n";
	page << "<head> \n";
	page << "<title></title> \n";
	page << "</head> \n";
	page << "<body> \n";
	page << "<!-- body start --> \n";
	page << "</body> \n";
	page << "</html> \n";
	page.close();
}


//main loop
int main(int argv, char* argc[]){

	createPage(argc[1]);

return 0;
}
