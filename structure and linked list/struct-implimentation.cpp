#include <bits/stdc++.h>
using namespace std;
struct Teacher
{

    string name;
    int age;
    int salary;
    bool knows_eng;
    string gender;

    void teachers_details()
    {
        cout << "Teacher name :-- " << name << endl;
        cout << "Teacher age :-- " << age << endl;
        cout << "Teacher salary :-- " << salary << endl;
        cout << "Teacher knows english or not ?  " << knows_eng << endl;
        cout << "Teacher gender :-- " << gender << endl;
    }
};

int main()
{

    Teacher tea[10] = {{"x1", 1, 1, false, "male"},
                       {"x2", 2, 2, true, "female"},
                       {"x3", 3, 3, false, "male"},
                       {"x4", 4, 4, true, "female"},
                       {"x5", 5, 5, false, "male"},
                       {"x6", 6, 6, true, "female"},
                       {"x7", 7, 7, false, "male"},
                       {"x8", 8, 8, true, "female"},
                       {"x9", 9, 9, false, "male"},
                       {"x10", 10, 10, true, "female"}};

    for (int i = 0; i < 10; i++)
    {
        tea[i].teachers_details();
        cout << endl;
    }
}
