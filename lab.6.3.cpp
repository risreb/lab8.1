#include <iostream>
#include <Windows.h>

#include "figure.h"
#include "Exception.h"
#include "triangle.h"
#include "rightTriangle.h"
#include "isoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangley.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

void print_info(const Figure* figure)
{
    figure->print();
    std::cout << '\n';
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    try

    {
        RightTriangle triangle(3, 4, 5, 30, 60);
        std::cout << "Прямоугольный треугольник "
            "(стороны 3, 4, 5; углы 30, 60, 90) создан\n";
        print_info(&triangle);
    }

    catch (const Exception& error)

    {
        std::cout << "Ошибка создания фигуры.Причина: "  << error.what() << '\n';
    }

    try

    {
        Triangle triangle(10, 20, 30, 30, 40, 50);
        std::cout << "Треугольник создан\n";
        print_info(&triangle);
    }

    catch (const Exception& error)

    {
        std::cout << "Ошибка создания фигуры.Причина: " << error.what() << '\n';
    }

    try

    {
        IsoscelesTriangle triangle(10, 20, 50, 60);
        std::cout << "Равнобедренный треугольник создан\n";
        print_info(&triangle);
    }

    catch (const Exception& error)

    {
        std::cout << "Ошибка создания фигуры.Причина: " << error.what() << '\n';
    }

    try

    {
        EquilateralTriangle triangle(30);
        std::cout << "Равносторонний треугольник создан\n";
        print_info(&triangle);
    }

    catch (const Exception& error)

    {
        std::cout << "Ошибка создания фигуры.Причина: " << error.what() << '\n';
    }

    try

    {
        Quadrilateral figure(10, 20, 30, 40, 90, 90, 90, 90);
        std::cout << "Четырёхугольник создан\n";
        print_info(&figure);
    }

    catch (const Exception& error)

    {
        std::cout << "Ошибка создания фигуры.Причина: "  << error.what() << '\n';
    }

    try

    {
        Rectangley rectangle(10, 20);
        std::cout << "Прямоугольник создан\n";
        print_info(&rectangle);
    }

    catch (const Exception& error)

    {
        std::cout << "Ошибка создания фигуры.Причина: " << error.what() << '\n';
    }

    try

    {
        Square square(20);
        std::cout << "Квадрат создан\n";
        print_info(&square);
    }

    catch (const Exception& error)

    {
        std::cout << "Ошибка создания фигуры.Причина: " << error.what() << '\n';
    }

    try

    {
        Parallelogram parallelogram(20, 30, 30, 150);
        std::cout << "Параллелограмм создан\n";
        print_info(&parallelogram);
    }

    catch (const Exception& error)

    {
        std::cout << "Ошибка создания фигуры.Причина: " << error.what() << '\n';
    }

    try

    {
        Rhombus rhombus(30, 30, 150);
        std::cout << "Ромб создан\n";
        print_info(&rhombus);
    }

    catch (const Exception& error)

    {
        std::cout << "Ошибка создания фигуры.Причина: " << error.what() << '\n';
    }
    return 0;
}
