//#include "difference.h"
//
//void difference()
//{
//    cout << persons[0].birthday;
//    int num = 1;
//    int y = 2023 , m = 1, d = 13;
//    //int Y = 2023 , M = persons[0].birthday, D = persons[0].birthday;
//
//    while (y * 10000 + m * 100 + d < persons[0].birthday)
//    {
//        if (m == 12 && d == 32)
//        {
//            y++;
//            m = 1;
//            d = 1;
//            continue;
//        }
//        if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10) && d == 32)
//        {
//            d = 1;
//            m++;
//            continue;
//        }
//        if ((m == 4 || m == 6 || m == 9 || m == 11) && d == 31)
//        {
//            d = 1;
//            m++;
//            continue;
//        }
//        if (m == 2 && (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) && d == 30)
//        {
//            d = 1;
//            m++;
//            continue;
//        }
//        if (m == 2 && !(y % 4 == 0 && y % 100 != 0 || y % 400 == 0) && d == 29)
//        {
//            d = 1;
//            m++;
//            continue;
//        }
//        d++;
//        num++;
//    }    
//    cout << "????????????????" << num << "??" << endl;
//}