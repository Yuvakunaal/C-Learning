#include <iostream>
using namespace std;

int main()
{
    // Pattern - 1 :-  (square pattern)
    // for n = 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    int n1 = 5;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout << (j + 1) << " ";
        }
        cout << "\n";
    }

    cout << "------------------------" << "\n";

    // Pattern - 2 :-  (square pattern)
    // for n = 4
    // A B C D
    // A B C D
    // A B C D
    // A B C D
    for (int i = 0; i < n1; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n1; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << "\n";
    }

    cout << "------------------------" << "\n";

    // Pattern - 3 :-  (square pattern)
    // for n = 4
    // 1 2 3 4
    // 5 6 7 8
    // 9 10 11 12
    // 13 14 15 16
    int num1 = 1;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout << num1 << " ";
            num1++;
        }
        cout << "\n";
    }

    cout << "------------------------" << "\n";

    // Pattern - 4 :-  (square pattern)
    // for n = 4
    // A B C D
    // E F G H
    // I J K L
    // M N O P
    char alp1 = 'A';
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout << alp1 << " ";
            alp1 = alp1 + 1;
        }
        cout << "\n";
    }

    cout << "------------------------" << "\n";

    // Pattern - 5 :-  (triangle pattern)
    // for n = 4
    // *
    // * *
    // * * *
    // * * * *
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << "\n";
    }

    cout << "------------------------" << "\n";

    // Pattern - 6 :-  (triangle pattern)
    // for n = 4
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << (i + 1) << " ";
        }
        cout << "\n";
    }

    cout << "------------------------" << "\n";

    // Pattern - 7 :-  (triangle pattern)
    // for n = 4
    // A
    // B B
    // C C C
    // D D D D
    char alp2 = 'A';
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << alp2 << " ";
        }
        cout << "\n";
        alp2 += 1;
    }

    cout << "------------------------" << "\n";

    // Pattern - 8 :-  (triangle pattern)
    // for n = 4
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << (j + 1) << " ";
        }
        cout << "\n";
    }

    cout << "------------------------" << "\n";

    // Pattern - 9 :-  (triangle pattern)
    // for n = 4
    // A
    // A B
    // A B C
    // A B C D
    for (int i = 0; i < n1; i++)
    {
        char alp3 = 'A';
        for (int j = 0; j < i + 1; j++)
        {
            cout << alp3 << " ";
            alp3 = alp3 + 1;
        }
        cout << "\n";
    }

    cout << "------------------------" << "\n";

    // Pattern - 10 :-  (reverse triangle pattern)
    // for n = 4
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    for (int i = 0; i < n1; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    cout << "------------------------" << "\n";

    // Pattern - 11 :-  (floyd's triangle pattern)
    // for n = 4;
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    int num2 = 1;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num2 << " ";
            num2++;
        }
        cout << "\n";
    }

    cout << "------------------------" << "\n";

    // Pattern - 12 :-  (inverted triangle pattern)
    // for n = 4
    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " " << " ";
        }
        for (int k = 0; k < n1 - i; k++)
        {
            cout << i + 1 << " ";
        }
        cout << "\n";
    }

    cout << "------------------------" << "\n";

    // Pattern - 13 :-  (pyramid pattern)
    // for n = 4
    //        1
    //      1 2 1
    //    1 2 3 2 1
    //  1 2 3 4 3 2 1
    for (int i = 0; i < n1; i++)
    {
        for (int space = 0; space < n1 - i - 1; space++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1 << " ";
        }
        for (int k = i; k > 0; k--)
        {
            cout << k << " ";
        }
        cout << "\n";
    }

    cout << "------------------------" << "\n";

    // Pattern - 14 :-  (hallow diamond pattern)
    // for n = 4
    //        *
    //      *   *
    //    *       *
    //  *           *
    //    *       *
    //      *   *
    //        *
    for (int i = 0; i < n1; i++)
    {
        for (int outspace1 = 0; outspace1 < n1 - i - 1; outspace1++)
        {
            cout << " " << " ";
        }
        cout << "*" << " ";
        if (i != 0)
        {
            for (int inspace1 = 0; inspace1 < 2 * i - 1; inspace1++)
            {
                cout << " " << " ";
            }
            cout << "*" << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n1 - 1; i++)
    {
        for (int outspace2 = 0; outspace2 < i + 1; outspace2++)
        {
            cout << " " << " ";
        }
        cout << "*" << " ";
        if (i != n1 - 2)
        {
            for (int inspace2 = 0; inspace2 < 2 * (n1 - 2 - i) - 1; inspace2++)
            {
                cout << " " << " ";
            }
            cout << "*" << " ";
        }
        cout << "\n";
    }

    cout << "------------------------" << "\n";

    // Pattern - 15 :-  (butterfly pattern)
    // for n = 4
    // *             *
    // * *         * *
    // * * *     * * *
    // * * * * * * * *
    // * * * * * * * *
    // * * *     * * *
    // * *         * *
    // *             *
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        for (int space1 = 0; space1 < 2 * (n1 - 1 - i); space1++)
        {
            cout << " " << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << "*" << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1 - i; j++)
        {
            cout << "*" << " ";
        }
        for (int space2 = 0; space2 < 2 * i; space2++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < n1 - i; j++)
        {
            cout << "*" << " ";
        }
        cout << "\n";
    }
    return 0;
}