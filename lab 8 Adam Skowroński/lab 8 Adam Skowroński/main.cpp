#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "Image.h"
#include "Processor.h"
#include "Invert.h"
#include "Threshold.h"
#include "GammaCorrection.h"

using namespace std;

int main(int argc, char* argv[])
{
	for(int i=0; i<argc; ++i)
	{
		std::cout << argv[i] << std::endl;
	}
	vector <Processor*>filters;
	Image inputImage;
	Image outputImage;

	ifstream inputFile(argv[1]);
	inputFile >> inputImage;
	inputFile.close();
	
	
	outputImage = inputImage;
	
	for (int i = 2;i < argc-1; i++)
	{
		string command = argv[i];
		if (command == "-i")
		{
			filters.push_back(new Invert);
		}
		else if (command == "-p")
		{
			stringstream a(argv[i+1]);
			int number;
			a >> number;
			filters.push_back(new Threshold(number));
			i = i + 1;
		}
		else if (command == "-g")
		{
			stringstream a(argv[i + 1]);
			double number;
			a >> number;
			filters.push_back(new GammaCorrection(number));
			i = i + 1;
		}
		else 
		{
			cout << "blad odczytu lini komend";
		}
	}

	for (Processor* processor : filters)
	{
		outputImage = processor->Process(outputImage);
	}

	ofstream outputFile(argv[argc-1]);
	outputFile << outputImage;
	outputFile.close();

	for (Processor* processor : filters)
	{
		delete processor;
	}
	
}