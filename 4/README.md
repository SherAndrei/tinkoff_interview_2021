# Задача 4
Недавно Диме поручили минимизировать почтовые затраты. Ему предстоит отправить n посылок, пронумерованных от 1 до n, i-я из которых имеет ценность a_i.
Для пересылки необходимо распределить все посылки по коробкам. В каждую коробку можно поместить не более m отправлений, причем эти посылки должны идти подряд. Стоимость пересылки поробки зависит от количества посылок и их ценности. Пусть в коробке было x посылок, и наиболее ценная из них имела ценность a, а наименее ценная - b. Тогда стоимость пересылки этой коробки будет равна (a - b) * x^2 + k, где k - стоимость коробки.
Найдите минимальную суммарную стоимость пересылки всех посылок.

## Формат входных данных
В первой строке входных данных содержится три целых числа n, m, k - количество посылок, максимальное количество посылок в одной коробке и стоимость коробки.
Следующие n строк содержат по одному целому числу a_i - стоимость i-ой посылки.

## Формат выходных данных
Выведите единственное число - минимальную суммарную стоимость пересылки всех посылок.

## Примеры данных
### Пример 1
#### Ввод:
6 3 8
1
2
3
1
2
1

#### Вывод:
37

### Пример 2
#### Ввод:
16 4 10
3
10
13
10
19
9
12
16
11
2
19
9
13
2
13
19

#### Вывод:
160
