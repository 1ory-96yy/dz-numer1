#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Конструктори
    Fraction();
    Fraction(int num, int denom);

    // Методи для введення та виведення даних
    void inputFraction();
    void displayFraction();

    // Методи для арифметичних операцій
    Fraction add(const Fraction& other);
    Fraction subtract(const Fraction& other);
    Fraction multiply(const Fraction& other);
    Fraction divide(const Fraction& other);
};

#endif // FRACTION_H
