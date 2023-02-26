#include <iostream>
using namespace std;

#define offset "\t\t\t\t\t\t"
#define ELOCHKA

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined ELOCHKA
	cout << offset << "В лесу родилась елочка,\n";
	cout << offset << "В лесу она росла,\n";
	cout << offset << "Зимой и летом стройная,\n";
	cout << offset << "Зеленая была.\n";
	cout << "\n";
	cout << offset << "Метель ей пела песенку:\n";
	cout << offset << "\"Спи, ёлочка, бай - бай!\"\n";
	cout << offset << "Мороз снежком укутывал:\n";
	cout << offset << "\"Смотри, не замерзай!\"\n";
	cout << "\n";
	cout << offset << "Трусишка зайка серенький\n";
	cout << offset << "Под ёлочкой скакал.\n";
	cout << offset << "Порою волк, сердитый волк,\n";
	cout << offset << "Рысцою пробегал.\n";
	cout << "\n";
	cout << offset << "Чу! Снег по лесу частому\n";
	cout << offset << "Под полозом скрипит\n";
	cout << offset << "Лошадка мохноногая\n";
	cout << offset << "Торопится, бежит.\n";
	cout << "\n";
	cout << offset << "Везёт лошадка дровенки\n";
	cout << offset << "А в дровнях мужичок\n";
	cout << offset << "Срубил он нашу ёлочку\n";
	cout << offset << "Под самый корешок.\n";
	cout << "\n";
	cout << offset << "Теперь она, нарядная,\n";
	cout << offset << "На праздник к нам пришла,\n";
	cout << offset << "И много, много радости\n";
	cout << offset << "Детишкам принесла.\n";
	cout << offset << "\t\t\t\t Автор: Кудашёва Р.А.";
#endif
}