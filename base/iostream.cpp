#include <fstream>
#include <iostream>
#include <sstream>
#include <string>


int main(){

	std::ifstream inFile;
	std::ofstream outFile;
	std::string currentLine;
	std::stringstream convert;
	std::stringstream ss;

	std::string number;
	std::string word;

	int tempNum;
	int sum;
	int counter = 1;

	inFile.open("input.txt");
	outFile.open("output.txt");

	while(getline(inFile, currentLine)){
		ss.clear();
		convert.clear();
		ss.str("");
		convert.str("");

		ss.str(currentLine);

		if(counter%2 == 1){
			for(int i=0; i<3; i++){
				getline(ss, number, ',');
				convert << number;
				convert >> tempNum;
				sum += tempNum;

				convert.clear();
				convert.str("");
			
			}//end for			

		} else {
			ss >> word;

			for(int i=0; i<sum; i++){
				outFile << word << ",";
			}//end for
			
			outFile << "\n";
			sum = 0;

		
		}//end if chain		

		counter++;
	}//end while
	inFile.close();
	outFile.close();

}//end main

