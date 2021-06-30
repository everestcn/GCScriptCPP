#include <iostream>
#include <string>


int main(void) {



    using namespace std;

    string::size_type idx;
    string input;
    string users_i;
    string opf = "outprint";
    string ifn = "input";
    int pos;
    int normal_opf = 11;
    int normal_ifn = 8;
    bool while_tf = true;
    float version = 0.1;

    string name = "GCScript C++ Version";

    //init_start;

    cout << name << endl << "Ver." << version << endl;


    //init_end;

    while (while_tf) {

        cout << endl << "[control]>>>";
        getline(cin, input);
        idx = input.find(opf);
        if (input == "exit()") {
            cout << "exit GCScript";
            while_tf = false;

        }


        else if (idx == string::npos) {
            idx = input.find(ifn);

            if (idx == string::npos) {
                continue;
            }

            else {
                pos = input.length()-normal_ifn;

                cout << input.substr(7, pos);
                getline(cin, users_i);
                cout << users_i;
            };
        }

        else{

            //cout << ">>>";
            //cin >> input;



            //if (input == "outprint 'hello, world!'") {
                //cout << input.substr(0, 2);
            //cout << input.length();
            //cout << input.length()-1;

            cout << idx;

            pos = input.length()-normal_opf;

            cout << input.substr(10, pos);
            //};
        };
    };
    return 0;

}
