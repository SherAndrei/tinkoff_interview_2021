# Задание 1
Недавно Егор нашёл у себя дома две доминошки. Теперь он захотел их соединить. Напомним, что доминошка представляет собой прямоугольную фигуру, состоящую из двух квадратных половинок, причем каждая половинка содержит от нуля до шести точек. По правилам домино, доминошки можно соединить, если у них есть половинки с одинаковым количеством точек.

## Формат входных данных

В первой строке входных данных записаны два целых числа a и b (0≤a,b≤6)— количество точек на левой и правой половинках первой доминошки соответственно. Во строке строке входных данных записаны два целых числа x и y (0≤x,y≤6) — количество точек на левой и правой половинках второй доминошки соответственно. Гарантируется, что доминошки различны.

## Формат выходных данных

Выведите число -1, если доминошки нельзя соединить. Иначе выведите через пробел четыре целых числа — количество точек на половинках доминошек, если соединить их одинаковыми половинками. Если решений несколько — выведите любое из них. 

## Примеры данных
### Пример 1
#### Ввод:
1 2
1 3
#### Вывод:
2 1 1 3

### Пример 2
#### Ввод:
4 5
3 3

#### Вывод:
-1
