#include <stdio.h>
#include <iostream>


namespace matr{
    int random(int min,int max){
        return min + rand() % (max - min);
    };

    class matriza {
    private:
        int _s;
        int _c;
        int** m ;
    public:
        matriza() { _s = 0; _c = 0; m = 0; }
        matriza(int s, int c) {
            _s = s;
            _c = c;
            m = new int* [s];
            for (int i = 0; i < s; i++) { m[i] = new int[c]; }
            for (int i = 0; i < s; i++) {
                for (int j = 0; j < c; j++) {
                    std::cout << "Insert matriz member [" << i << "] [" << j << "]\n";
                    std::cin >> m[i][j];
                }
            }
        }
        matriza(int s, int c, int min, int max) {
            _s = s;
            _c = c;
            m = new int *[s];
            for (int i = 0; i < s; i++) { m[i] = new int[c]; }
            for (int i = 0; i < s; i++) {
                for (int j = 0; j < c; j++) {
                    m[i][j] = random(min,max);
                }
            }
        }
    };
}
