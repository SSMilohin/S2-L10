/*
* Лабораторная работа №10 (2 семестр)
*  
* Воспользуйтесь кодом, который рассматривали на лекции, и осуществите поворот изображения на произвольный угол. 
* В полученном изображении будут присутствовать артефакты. Они возникают из-за ошибок округления.
* Ваша задача заключается в том, чтобы эти артефакты убрать.
*/

#include <bmp.hpp>
#include <iostream>

using namespace sm::images;

int main()
{
    try
    {
        BMP image(200, 100);
        image.Fill({ 0,255,0 });
        image.Rotate(acos(-1) / 8);
        image.Save("../non-interpolated.bmp");
        image.Interpolate();
        image.Save("../interpolated.bmp");
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
