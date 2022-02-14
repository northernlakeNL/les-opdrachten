#include <iostream>
using namespace std;

int main()
{
    int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<" ";
        }

        while(k != i-1)
        {
            cout << "*";
            ++k;
        }
        cout << endl;
    }
    for(int i = rows; i >= 1; --i)
    {
        for(int space = 0; space < rows-i; ++space)
            cout << " ";

        for(int j = i; j <= i-1; ++j)
            cout << "*";

        for(int j = 0; j < i-1; ++j)
            cout << "*";

        cout << endl;
    }
    return 0;
}



// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     int max;
//     cout << "Hoe Groot? ";
//     cin >> max;
//     std::string stars = "    \n";
//     char ch = '*';
//     for ( int i = 0; i < max; ++i){
//         if (i < max){
//             stars.append(1, ch);
//             std::cout << stars;
//         }
//     }
//     max = max + 1;
//     for ( int i = max - 1; i < max; i--){
//         if (i > 0){
//             stars.erase(i, ch);
//             std::cout << stars;
//         }
//     }
//     return 0;
// }



// //     *
// //    **
// //   ***
// //  ****
// // *****
// //  ****
// //   ***
// //    **
// //     *