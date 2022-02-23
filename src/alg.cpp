// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
    if (a >= b) {
        for (int i = b; i > 0; i--) {
            if (a % i == 0 && b % i == 0) {
                return i;
            } else {
                continue;
            }
        }
    } else {
        for (int i = a; i > 0; i--) {
            if (a % i == 0 && b % i == 0) {
                return i;
            } else {
                continue;
            }
        }
    }
}
