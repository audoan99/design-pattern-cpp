/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Template method example
*/

#include "template_class.h"

int main()
{
    RobotA a;
    RobotB b;

    cout << a.getName() << endl;
    a.go();

    cout << "================================\n";

    cout << b.getName() << endl;
    b.go();

    return 0;
}
