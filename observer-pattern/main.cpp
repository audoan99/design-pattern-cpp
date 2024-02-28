/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Observer pattern example
*/

#include "base_class.h"

int main()
{
    Database db;
    Client client1, client2, client3;

    db.registerObserver(&client1);
    db.registerObserver(&client2);
    db.registerObserver(&client3);

    cout << "====================\n";
    db.editRecord("delete", "client1");
    db.removeObserver(&client1);

    cout << "====================\n";
    db.editRecord("get", "list record");

    return 0;
}
