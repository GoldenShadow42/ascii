#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int znak1,znak2,znak3;
    ofstream plik("moj_plik.txt");
    
    for (znak1 = 33; znak1 <= 126; znak1++)
    {

        plik << static_cast<char>(znak1) << endl;

    }

    for (znak1 = 33; znak1 <= 126; znak1++)
    {

        for (znak2 = 33; znak2 <= 126; znak2++)
        {

            plik << static_cast<char>(znak1) << static_cast<char>(znak2) << endl;

        }
    }

    for (znak1 = 33; znak1 <= 126; znak1++)
    {
        for (znak2 = 33; znak2 <= 126; znak2++)
        {
            for (znak3 = 33; znak3 <= 126; znak3++)
            {

                plik << static_cast<char>(znak1) << static_cast<char>(znak2) << static_cast<char>(znak3) << endl;

            }
        }
    }
    
    plik.close();
}


