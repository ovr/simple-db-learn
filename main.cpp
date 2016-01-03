#include <iostream>
#include <vector>

using namespace std;

struct Column {
    int index;
    string name;
};

struct Row {
    int *index;
};

class Table {
private:
    vector<Column> *columns = nullptr;
public:
    Table() {
        this->columns = new vector<Column>;
    };

    void addColumn(string columnName) {
        Column column;
        column.name = columnName;

        this->columns->push_back(column);
    };
};

int main() {
    int index = 0;

    auto *columns = new Column[5];
    columns[index].index = index;
    columns[index].name = "id";

    cout << "Hello, World!" << endl;

    for (int i = 0; i < 1; i++) {
        cout << "Column: " << columns[i].name << ", index " << i << endl;
    }

    return 0;
}