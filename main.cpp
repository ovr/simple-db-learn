#include <iostream>
#include <vector>

using namespace std;

struct Column {
    int index;
    string name;

    Column(string name, int index) {
        this->name = name;
        this->index = index;
    };
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

    void addColumn(Column column) {
        this->columns->push_back(column);
    };

    void printColumns() {
        cout << "Table contains:" << endl;

        for (auto it = this->columns->begin() ; it != this->columns->end(); ++it) {
            std::cout << "Column " << it->name << endl;
        }
    }
};

int main() {
    int index = 0;


    auto *table = new Table;
    table->addColumn(Column("id", 1));
    table->addColumn(Column("firstname", 2));
    table->addColumn(Column("lastname", 2));

    table->printColumns();

    return 0;
}