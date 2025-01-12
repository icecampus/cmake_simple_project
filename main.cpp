#include <iostream>
#include <string>
#include "geometry.h"

int load_data()
{
    return 1;
}

void save_data(int data)
{

}

int main()
{
    int data = load_data();
    int result = process_data(data);
    save_data(result);

    return 1;
}
