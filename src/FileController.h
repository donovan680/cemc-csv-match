#ifndef FILECONTROLLER_H_
#define FILECONTROLLER_H_

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

#include "HelperMethods.h"

using namespace utility;

#include "ValueTable.h"

using namespace model;

namespace controller
{
    class FileController
    {
    private:
        bool validateFileName(const string& fileName);
        vector<string>* getHeaders(string input);
    public:
        FileController();
        virtual ~FileController();
        
        void insertValues(const string& fileName, ValueTable* valueTable, int keyIndex);
        void writeValue(const string& fileName, const string& value);
    };
}

#endif
