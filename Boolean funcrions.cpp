#include <iostream>
#include <string>
using namespace std;

bool No(bool a) {
    a = !(a);
    return a;
}

bool con(bool a, bool b) { // conjunction
    return (a && b);
}

bool dis(bool a, bool b) { // disjunction
    return (a || b);
}

bool equivalent(bool a, bool b) {
    return (a == b);
}

bool off(bool a, bool b) { // Excluded or
    if ((a == 1 && b == 0) || (a == 0 && b == 1)) {
        return 1;
    }
    else {
        return 0;
    }
}

class BooleanExpression {
public:
    bool value;
    string expression;
    int space;
    BooleanExpression() {
        value = false;
        expression = "";
        space = 0;
    }
    BooleanExpression(bool value, const string& expression, int space = 0) {
        this->value = value;
        this->expression = expression;
        this->space = space;
    }
};

string s(BooleanExpression& obj) {
    string n = "|";
    for (int i = 0; i < obj.space / 2; i++) {
        n += " ";
    }
    n += to_string(obj.value);

    if (obj.space % 2 == 0) {

        for (int i = 0; i < obj.space / 2 - 1; i++) {
            n += " ";
        }
    }
    else {
        for (int i = 0; i < (obj.space / 2); i++) {
            n += " ";
        }
    }
    return n;
}

class Rows {
public:
    bool a, b, c, d;
    BooleanExpression e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32,
        e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48, e49, e50, e51, e52, e53, e54, e55, e56, e57, e58, e59, e60, e61, e62, e63, e64, e65, e66,
        e67, e68, e69, e70, e71, e72, e73, e74, e75, e76, e77, e78, e79, e80, e81, e82, e83, e84, e85, e86, e87, e88, e89, e90, e91, e92, e93, e94, e95, e96, e97, e98, e99;

    Rows(bool a, bool b, bool c, bool d) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;

        e0 = BooleanExpression(No(a), " !A |", (string(" !A |").length() - 1));
        e1 = BooleanExpression(No(b), " !B |", (string(" !B |").length() - 1));
        e2 = BooleanExpression(No(c), " !C |", (string(" !C |").length() - 1));
        e3 = BooleanExpression(No(d), " !D |", (string(" !D |").length() - 1));
        e4 = BooleanExpression(off(dis(a, b), c), " (AvB)+C |", (string(" (AvB)+C |").length() - 1));
        e5 = BooleanExpression(con(a, c), " A^C |", (string(" A^C |").length() - 1));
        e6 = BooleanExpression(con(a, d), " A^D |", (string(" A^D |").length() - 1));
        e7 = BooleanExpression(con(b, c), " B^C |", (string(" B^C |").length() - 1));
        e8 = BooleanExpression(con(b, d), " B^D |", (string(" B^D |").length() - 1));
        e9 = BooleanExpression(con(c, d), " C^D |", (string(" C^D |").length() - 1));
        e10 = BooleanExpression(dis(a, b), " AvB |", (string(" AvB |").length() - 1));
        e11 = BooleanExpression(dis(a, c), " AvC |", (string(" AvC |").length() - 1));
        e12 = BooleanExpression(dis(a, d), " AvD |", (string(" AvD |").length() - 1));
        e13 = BooleanExpression(dis(b, c), " BvC |", (string(" BvC |").length() - 1));
        e14 = BooleanExpression(dis(b, d), " BvD |", (string(" BvD |").length() - 1));
        e15 = BooleanExpression(dis(c, d), " CvD |", (string(" CvD |").length() - 1));
        e16 = BooleanExpression(off(a, b), " A+B |", (string(" A+B |").length() - 1));
        e17 = BooleanExpression(off(a, c), " A+C |", (string(" A+C |").length() - 1));
        e18 = BooleanExpression(off(a, d), " A+D |", (string(" A+D |").length() - 1));
        e19 = BooleanExpression(off(b, c), " B+C |", (string(" B+C |").length() - 1));
        e20 = BooleanExpression(off(b, d), " B+D |", (string(" B+D |").length() - 1));
        e21 = BooleanExpression(off(c, d), " C+D |", (string(" C+D |").length() - 1));
        e22 = BooleanExpression(con(a, con(b, c)), " A^(B^C) |", (string(" A^(B^C) |").length() - 1));
        e23 = BooleanExpression(con(con(a, b), c), " (A^B)^C |", (string(" (A^B)^C |").length() - 1));
        e24 = BooleanExpression(dis(a, dis(b, c)), " Av(BvC) |", (string(" Av(BvC) |").length() - 1));
        e25 = BooleanExpression(con(dis(a, b), d), " (AvB)^D |", (string(" (AvB)^D |").length() - 1));
        e26 = BooleanExpression(con(dis(a, c), d), " (AvC)^D |", (string(" (AvC)^D |").length() - 1));
        e27 = BooleanExpression(con(dis(b, c), d), " (BvC)^D |", (string(" (BvC)^D |").length() - 1));
        e28 = BooleanExpression(off(dis(a, b), c), " (AvB)+C |", (string(" (AvB)+C |").length() - 1));
        e29 = BooleanExpression(off(dis(a, b), d), " (AvB)+D |", (string(" (AvB)+D |").length() - 1));
        e30 = BooleanExpression(off(dis(a, c), d), " (AvC)+D |", (string(" (AvC)+D |").length() - 1));
        e31 = BooleanExpression(off(dis(b, c), d), " (BvC)+D |", (string(" (BvC)+D |").length() - 1));

        e32 = BooleanExpression(con(dis(a, b), dis(c, d)), " (AvB)^(CvD) |", (string(" (AvB)^(CvD) |").length() - 1));
        e33 = BooleanExpression(con(con(dis(a, b), dis(c, d)), dis(dis(a, c), d)), " (AvB)^(CvD)^(AvCvD) |", (string(" (AvB)^(CvD)^(AvCvD) |").length() - 1));
        e34 = BooleanExpression(con(dis(dis(a, b), c), d), " (AvBvC)^D |", (string(" (AvBvC)^D |").length() - 1));
        e35 = BooleanExpression(con(dis(a, dis(b, c)), d), " (AvBvC)^D |", (string(" (AvBvC)^D |").length() - 1));
        e36 = BooleanExpression(dis(a, dis(b, dis(c, d))), " Av(BvCvD) |", (string(" Av(BvCvD) |").length() - 1));
        e37 = BooleanExpression(con(dis(a, b), dis(c, dis(a, b))), " (AvB)^(Cv(AvB)) |", (string(" (AvB)^(Cv(AvB)) |").length() - 1));
        e38 = BooleanExpression(con(dis(a, b), dis(c, d)), " (AvB)^(CvD) |", (string(" (AvB)^(CvD) |").length() - 1));
        e39 = BooleanExpression(No(dis(dis(dis(a, b), c), d)), " (AvBvCvD)' |", (string(" (AvBvCvD)' |").length() - 1));
        // New expressions
        e40 = BooleanExpression(dis(dis(a, b), con(c, d)), " (AvB)v(C^D) |", (string(" (AvB)v(C^D) |").length() - 1));
        e41 = BooleanExpression(off(dis(a, b), dis(c, d)), " (AvB)+(CvD) |", (string(" (AvB)+(CvD) |").length() - 1));
        e42 = BooleanExpression(off(con(a, b), con(c, d)), " (A^B)+(C^D) |", (string(" (A^B)+(C^D) |").length() - 1));
        e43 = BooleanExpression(con(dis(a, b), off(c, d)), " (AvB)^(C+D) |", (string(" (AvB)^(C+D) |").length() - 1));
        e44 = BooleanExpression(off(dis(a, b), off(c, d)), " (AvB)+(C+D) |", (string(" (AvB)+(C+D) |").length() - 1));
        e45 = BooleanExpression(off(off(a, b), off(c, d)), " (A+B)+(C+D) |", (string(" (A+B)+(C+D) |").length() - 1));
        e46 = BooleanExpression(con(con(a, b), con(c, d)), " (A^B)^(C^D) |", (string(" (A^B)^(C^D) |").length() - 1));
        e47 = BooleanExpression(dis(dis(a, b), con(c, d)), " (AvB)v(C^D) |", (string(" (AvB)v(C^D) |").length() - 1));
        e48 = BooleanExpression(off(off(a, b), con(c, d)), " (A+B)+(C^D) |", (string(" (A+B)+(C^D) |").length() - 1));
        e49 = BooleanExpression(con(off(a, b), off(c, d)), " (A+B)^(C+D) |", (string(" (A+B)^(C+D) |").length() - 1));

    }
    //table 1
    void table_1() {
        cout << " " << a << " | " << b << " | " << c << " | " << d << " | 0 | 1 "
            << s(e0) << s(e1) << s(e2) << s(e3) << s(e4) << s(e5) << s(e6) << s(e7) << s(e8) << s(e9) << s(e10)
            << s(e11) << s(e12) << s(e13) << s(e14) << s(e15) << "|\n";
    }
    //table 2
    void table_2() {
        cout << " " << a << " | " << b << " | " << c << " | " << d << " " <<
            s(e16) << s(e17) << s(e18) << s(e19) << s(e20) << s(e21) << s(e22) << s(e23) << s(e24) << s(e25) << s(e26) <<
            s(e27) << "|\n";
    }
    void table_3() {
        cout << " " << a << " | " << b << " | " << c << " | " << d << " " <<
            s(e28) << s(e29) << s(e30) << s(e31) << s(e32) << s(e33) << s(e34) << s(e35) << "|\n";
    }
};

int main()
{
    Rows arr[16] = {
        Rows(0, 0, 0, 0),//0
        Rows(1, 0, 0, 0),//1
        Rows(0, 1, 0, 0),//2
        Rows(0, 0, 1, 0),//3
        Rows(0, 0, 0, 1),//4
        Rows(1, 0, 1, 0),//5
        Rows(0, 1, 0, 1),//6
        Rows(1, 1, 0, 0),//7
        Rows(0, 0, 1, 1),//8
        Rows(1, 0, 0, 1),//10
        Rows(0, 1, 1, 0),//11
        Rows(1, 1, 1, 0),//12
        Rows(1, 1, 0, 1),//13
        Rows(1, 0, 1, 1),//14
        Rows(0, 1, 1, 1),//15
        Rows(1, 1, 1, 1)//16
    };
    // table 1 output
    cout << " A | B | C | D | 0 | 1 |" << arr[0].e0.expression << arr[0].e1.expression << arr[0].e2.expression << arr[0].e3.expression << arr[0].e4.expression <<
        arr[0].e5.expression << arr[0].e6.expression << arr[0].e7.expression << arr[0].e8.expression << arr[0].e9.expression << arr[0].e10.expression
        << arr[0].e11.expression << arr[0].e12.expression << arr[0].e13.expression << arr[0].e14.expression << arr[0].e15.expression << "\n";

    for (int i = 0; i < 16; i++) {
        arr[i].table_1();
    }
    cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
    //table 2 output
    cout << " A | B | C | D |" << arr[0].e16.expression << arr[0].e17.expression << arr[0].e18.expression << arr[0].e19.expression <<
        arr[0].e20.expression << arr[0].e21.expression << arr[0].e22.expression << arr[0].e23.expression << arr[0].e24.expression <<
        arr[0].e25.expression << arr[0].e26.expression << arr[0].e27.expression << "\n";

    for (int i = 0; i < 16; i++) {
        arr[i].table_2();
    }
    cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
    //table 3 output
    cout << " A | B | C | D |" << arr[0].e28.expression << arr[0].e29.expression << arr[0].e30.expression << arr[0].e31.expression << arr[0].e32.expression
        << arr[0].e33.expression << arr[0].e34.expression << arr[0].e35.expression << "\n";
    for (int i = 0; i < 16; i++) {
        arr[i].table_3();
    }
    cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
    return 0;
}
