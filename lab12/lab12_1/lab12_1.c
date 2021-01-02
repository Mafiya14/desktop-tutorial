//ƒан номер дн€ Ц целое число от 1 до 31 и мес€ца Ч целое число в диапазоне 1Ц12 (1 Ч €нварь, 2 Ч февраль и т. д.). 
//¬ывести дату в виде текста (например, Ђп€тое €нвар€ї).
#include <stdio.h>
#include <locale.h>
int main() {
	int d, m;
	setlocale(LC_ALL, "Rus");
	printf("введите дату в формате номер день и номер мес€ца>>"); scanf_s("%d%d", &d, &m);
	switch (d) {
	case 1: printf("первое"); break;
	case 2: printf("второе"); break;
	case 3: printf("третье"); break;
	case 4: printf("четвертое"); break;
	case 5: printf("п€тое"); break;
	case 6: printf("шестое"); break;
	case 7: printf("седьмое"); break;
	case 8: printf("восьмое"); break;
	case 9: printf("дев€тое"); break;
	case 10: printf("дес€тое"); break;
	case 11: printf("одиннадцатое"); break;
	case 12: printf("двенадцатое"); break;
	case 13: printf("тринадцатое"); break;
	case 14: printf("четырнадцатое"); break;
	case 15: printf("п€тнадцатое");break;
	case 16: printf("шестнадцатое"); break;
	case 17: printf("семнадцатое"); break;
	case 18: printf("восемнадцатое"); break;
	case 19: printf("дев€тнадцатое"); break;
	case 20: printf("дватцатое"); break;
	case 21: printf("двадцать первое"); break;
	case 22: printf("двадцать второе"); break;
	case 23: printf("двадцать третье"); break;
	case 24: printf("двадцать четвертое"); break;
	case 25: printf("двадцать п€тое"); break;
	case 26: printf("двадцать шестое"); break;
	case 27: printf("двадцать седьмое"); break;
	case 28: printf("двадцать восьмое"); break;
	case 29: printf("двадцать дев€тое"); break;
	case 30: printf("тридцатое"); break;
	case 31: printf("тридцать первое"); break;
	default: printf("нет соответствий, введена некорректна€ дата");
	}
	switch (m) {
	case 1: printf(" €нвар€"); break;
	case 2: printf(" феврал€"); break;
	case 3: printf(" марта"); break;
	case 4: printf(" апрел€"); break;
	case 5: printf(" ма€"); break;
	case 6: printf(" июн€"); break;
	case 7: printf(" июл€"); break;
	case 8: printf(" августа"); break;
	case 9: printf(" сент€бр€"); break;
	case 10: printf(" окт€бр€"); break;
	case 11: printf(" но€бр€"); break;
	case 12: printf(" декабр€"); break;
	default: printf(" нет соответствий, введена некорректна€ дата");
	}
	return 0;
}