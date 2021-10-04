#include <cmath>
#include <iostream>
#include <string>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::stoi;
using std::string;

int main(int argc, char *argv[])
{
    int array_size;
    int wave_height;
    int y_offset;

    if (argc == 1)
    {
        cout << "Array size: ";
        cin >> array_size;
        cout << "Wave height multiplier: ";
        cin >> wave_height;
        cout << "Y offset: ";
        cin >> y_offset;
    }
    else if (argc == 4)
    {
        array_size = stoi(string(argv[1]));
        wave_height = stoi(string(argv[2]));
        y_offset = stoi(string(argv[3]));
    }
    else
    {
        cout << "Usage:" << endl
             << argv[0] << " <array size> <wave height multiplier> <y offset>" << endl;
    }

    cout << "const int kDYPPScrollLimit = " << array_size << ";" << endl
         << "const unsigned char kDYPPScrollArray[" << array_size << "] PROGMEM = {";
    for (int i = 0; i < array_size; i++)
    {
        int pixel_position = round(-sin(i * 2 * 3.14159265 / -array_size) * wave_height + y_offset);
        if (pixel_position != (pixel_position & 0xFF))
        {
            cerr << "Cutting off value at " << i << ": " << pixel_position << " to " << (pixel_position & 0xFF) << endl;
        }
        cout << (pixel_position & 0xFF);
        if (i != array_size - 1)
        {
            cout << ", ";
        }
    }
    cout << "};" << endl;

    return 0;
}