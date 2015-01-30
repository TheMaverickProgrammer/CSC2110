#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class WriteFile //Switched to a class
{
    private: // Made Private
    ofstream output_file;
    bool closed;

	public: // Made Public
	WriteFile* createWriteFile(const char* file_name);
	void destroyWriteFile(WriteFile* wf);
	void writeLine(WriteFile* wf, String* line);
	void close(WriteFile* wf);
	WriteFile();  // This is the constructor
};
#endif
