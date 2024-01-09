#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"

#define PI 3.14159

void render_header() {
    printf("---------------------------------------------------\n");
    printf("\t\t   中間テスト\n");
    printf("\t\t名前: かもんちゃい たおくるえ\n");
    printf("---------------------------------------------------\n");
    printf("\t\t   メニューテスト\n");
    printf("1. 円周計算機\n");
    printf("2. 円の面積計算機\n");
    printf("3. 球の表面積計算機\n");
    printf("4. 球の体積計算機\n");
    printf("5. 終了\n");
    printf("メニューテストを選択してください [1-5] = \n");
}

bool awaitConfirm() {
    printf("計算機を使用したい場合は [y/Y] をクリックしてください = \n");

    char isConfirm;

    isConfirm = getch();

    if (isConfirm == 'y' || isConfirm == 'Y') {
        return true;
    }

    return false;
}

bool PasswordChecker(int counter) {
    if (counter == 3) {
        return false;
    }

    if (counter == 0) {
        printf("パスワードが正しくありません、正しいパスワードを入力してください: ");
    } else {
        printf("\nパスワードが正しくありません、正しいパスワードを入力してください: ");
    }

    char password[20];

    scanf("%s", password);

    if (strcmp(password, "kanantem99") == 0) {
        return true;
    }

    counter++;

    PasswordChecker(counter);

    return false;
}

void Circumference_Circle() {
    system("cls");

    printf("1. 円周計算機\n");
    printf("           公式\n");
    printf("    円周 = 2*pi*r\n");
    printf("ここで pi = 3.14159\n");
    printf("     r  = 半径\n");

    if (!awaitConfirm()) {
        return;
    }

    system("cls");
    printf("1. 円周計算機\n");
    printf("           公式\n");
    printf("    円周 = 2*pi*r\n");
    printf("円の半径 = ");

    double radius = 0;

    scanf("%lf", &radius);
    printf("円周 = %.3f\n", 2 * PI * radius);

    if (!awaitConfirm()) {
        return;
    }

    Circumference_Circle();
}

void Area_Circle() {
    system("cls");

    printf("2. 円の面積計算機\n");
    printf("           公式\n");
    printf("         面積 = pi*r^2\n");
    printf("ここで pi = 3.14159\n");
    printf("     r  = 半径\n");

    if (!awaitConfirm()) {
        return;
    }

    system("cls");
    printf("2. 円の面積計算機\n");
    printf("           公式\n");
    printf("         面積 = pi*r^2\n");
    printf("円の半径 = ");

    double radius = 0;

    scanf("%lf", &radius);
    printf("面積 = %.3f\n", PI * radius * radius);

    if (!awaitConfirm()) {
        return;
    }

    Area_Circle();
}

void Surface_Area_Sphere() {
    system("cls");

    printf("3. 球の表面積計算機\n");
    printf("           公式\n");
    printf("    表面積 = 4*pi*r^2\n");
    printf("ここで pi = 3.14159\n");
    printf("     r  = 半径\n");

    if (!awaitConfirm()) {
        return;
    }

    if (!PasswordChecker(0)) {
        return;
    }

    system("cls");
    printf("3. 球の表面積計算機\n");
    printf("           公式\n");
    printf("    表面積 = 4*pi*r^2\n");
    printf("球の半径 = ");

    double radius = 0;

    scanf("%lf", &radius);
    printf("表面積 = %.3f\n", 4 * PI * radius * radius);

    if (!awaitConfirm()) {
        return;
    }

    Surface_Area_Sphere();
}

void Volume_Sphere() {
    system("cls");

    printf("4. 球の体積計算機\n");
    printf("           公式\n");
    printf("    体積 = (4/3)*pi*r^3\n");
    printf("ここで pi = 3.14159\n");
    printf("     r  = 半径\n");

    if (!awaitConfirm()) {
        return;
    }

    if (!PasswordChecker(0)) {
        return;
    }

    system("cls");
    printf("4. 球の体積計算機\n");
    printf("           公式\n");
    printf("    体積 = (4/3)*pi*r^3\n");
    printf("球の半径 = ");

    double radius = 0;

    scanf("%lf", &radius);
    printf("体積 = %.3f\n", (4.0 / 3.0) * PI * radius * radius * radius);

    if (!awaitConfirm()) {
        return;
    }

    Volume_Sphere();
}

void main() {
    system("cls");
    char choice;

    render_header();

    do {
        choice = getch() - '0';

        if (choice == 1) {
            Circumference_Circle();
            
            return;
        } else if (choice == 2) {
            Area_Circle();

            return;            
        } else if (choice == 3) {
            Surface_Area_Sphere();

            return;
        } else if (choice == 4) {
            Volume_Sphere(); 

            return;
        } else if (choice == 5) {
            printf("\n終了してもよろしいですか [y|Y]: ");

            char isConfirm;

            isConfirm = getch();

            if (isConfirm == 'y' || isConfirm == 'Y') {
                return;
            }

            main();
        } else {
            system("cls");

            render_header();

            printf("不正確、メニューテストを選択するには 1 2 3 4 または 5 をクリックしてください: ");
        }
    } while (choice != 5);

    return;
}
