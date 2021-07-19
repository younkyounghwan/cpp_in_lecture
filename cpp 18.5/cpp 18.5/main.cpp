
#include <iostream>

#include <regex> // regular expression from c11

using namespace std;

int main()

{ // To refer reference manual 



    regex re("\\d+");

    //regex re("[ab]");

    //regex re("[[:digit:]]{3}") // digit 중 3개를 받아라

    //regex re("[A-Z]+"); 

    //regex re("[A-Z]{1,5}"); // 최소 1개, 최대 5개

    //regex re("([0-9]{1})([-]?)([0-9]{1,4})");

    string str;

    while (true)

    {

        getline(cin, str);

        if (regex_match(str, re))

            cout << "Match" << endl;

        else

            cout << "No match" << endl;

        // print matches

        {

            auto begin = sregex_iterator(str.begin(), str.end(), re);

            auto end = sregex_iterator();

            for (auto itr = begin; itr != end; ++itr)

            {

                smatch match = *itr;

                cout << match.str() << " ";

            }

            cout << endl;

        }

        cout << endl;

    }

    return 0;

}




