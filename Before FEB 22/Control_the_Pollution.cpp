// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t > 0)
//     {
//         t--;
//         int n, b, c, bus, car, count = 0, x, y, z;
//         cin >> n >> bus >> car;
//         while (n >= 0)
//         {
//             while (n > 0)
//             {
//                 if (bus <= car)
//                 {
//                     n = n - 100;
//                     count = count + bus;
//                 }
//                 else
//                 {
//                     if (n < bus / car * 4)
//                     {
//                         n = n - 4;
//                         count = count + car;
//                     }
//                     else
//                     {
//                         n = n - 100;
//                         count = count + bus;
//                     }
//                 }

//             }
//             cout << count << endl;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t > 0)
//     {
//         t--;
//         int n, b, c, bus, car, count = 0, x, y, z;
//         cin >> n >> bus >> car;
//         while (n > 0)
//         {
//             if (bus <= car)
//             {
//                 n = n - 100;
//                 count = count + bus;
//             }
//             else
//             {
//                 if (n < bus / car * 4)
//                 {
//                     n = n - 4;
//                     count = count + car;
//                 }
//                 else
//                 {
//                     n = n - 100;
//                     count = count + bus;
//                 }
//             }
//             cout << count << endl;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t > 0)
//     {
//         t--;
//         int n, b, c, bus, car, count = 0, x, y, z;
//         cin >> n >> bus >> car;
//         while (n > 0)
//         {

//             if (n < bus / car * 4)
//             {
//                 n = n - 4;
//                 count = count + car;
//             }
//             else
//             {
//                 n = n - 100;
//                 count = count + bus;
//             }
            
//         }
//         cout << count << endl;
//     }
//     return 0;
// }








#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        t--;
        int n, bus, car, count = 0;
        cin >> n >> bus >> car;
        while (n > 0)
        {
            if (bus <= car)
            {
                n = n - 100;
                count = count + bus;
            }
            else
            {
                if (n < bus / car * 4)
                {
                    n = n - 4;
                    count = count + car;
                }
                else
                {
                    n = n - 100;
                    count = count + bus;
                }
            }
            
        }
        cout << count << endl;
    }
    return 0;
}