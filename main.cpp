#include "human.h"

int main()
{
    Student alex("Vaulin", "Alexey", "Alexeevich", 18, true);
    Boss yurchenko("Yurchenko", "Yuri", "Nikolaevich", 24, 28);
    alex.print();
    cout << endl;
    yurchenko.print();
}
