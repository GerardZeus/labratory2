#include <iostream>
#include <cmath> //Для использвание математических операций(в данном случае sqrt)


class Square //Создаём класс "Квадрат"
{
    //Поля
    int m_a; // Переменная дял стороны квадрата
public:
    //Конструктор
    Square(int a) 
    {
        setA(a); //Устанавливаем длину стороны квадрата
    }
    //Методы
    void setA(int a) 
    {
        if (a < 0) 
        {
            std::cout << "Negative side" << std::endl; //Если сторона меньше нуля - ошибка
            exit(-1);// Завершаем программу 
        }
        m_a = a; // Значение стороны квдрата 
    }
    int area() // Функция для подсчёта площади
    {
        return m_a * m_a;
    }
    int perimetr() // Функция для подсчётра периметра 
    {
        return 4 * m_a;
    }
    float diagonal() //Функия для подсчёта диагонали
    {
        return m_a * sqrt(2);
    }
};

int main()
{
    setlocale(LC_ALL, "RU"); // Для вывода кириллицы 
    int side; //Переменная для стороны квадрата

    std::cout << "Введите длину стороны квадрата: ";
    std::cin >> side; //Получаем ввод 

    Square sq(side);// Создаём объект класса sq, которому передаём сторону

    std::cout << "Площадь: " << sq.area() << std::endl; // Площадь
    std::cout << "Периметр: " << sq.perimetr() << std::endl; // Периметр
    std::cout << "Диагональ: " << sq.diagonal() << std::endl;// Диагональ

    return 0;
}

