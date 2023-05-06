// WebRtcNativeObjectsWrapper.cpp : Defines the entry point for the application.
//

#include <iostream>

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	return 0;
}

#define EXPORT //// export directive for each platform
class Xxx;

extern "C" EXPORT Xxx * CreateXxxObject()
{
	////return new Xxx();
}
