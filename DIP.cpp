#include <iostream>

using namespace std;

class DataSource {
public:
    virtual string getData() const = 0;
};

class FileDataSource : public DataSource {
public:
    string getData() const override {
        return "Data from File";
    }
};

class ConsoleDataOutput {
public:
    void displayData(const DataSource& dataSource) const {
        cout << "Displaying data: " << dataSource.getData() << endl;
    }
};

class DataDisplayer {
    const DataSource& dataSource;
    ConsoleDataOutput consoleDataOutput;
public:
    DataDisplayer(const DataSource& dataSource) : dataSource(dataSource) {}

    void displayData() const {
        consoleDataOutput.displayData(dataSource);
    }

};

int main() {
    return 0;
}
