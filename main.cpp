#include <iostream>


float process_data(int data);

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
    float result = process_data(data);
    save_data(result);

    return 1;
}
