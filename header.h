#include <iostream>
#include <cstdlib>
#include <new>
#include <cmath>
using namespace std;
void echange(int &,int &);
void echange(int &x,int &y)
{
    int temp = 0;
    temp = x;
    x = y;
    y = temp;



}


struct essai
{
    int n;
    float x;


}e;
void setValue(struct essai *);
void setValue(struct essai *str)
{
int m,p;
cout << "valeurs de n et x?"<<"\n";
cin >> m;
cin >> p;
str->n = m;
str->x = p;
cout << m << "\t" << p;
}
void raz(struct essai *);
void raz(struct essai *str)
{
cout << "remise a 0 des attributs de l'objet e"<<"\n";
str->n = 0;
str->x = 0;

}
new_handler depassement();
new_handler depassement()
{
    cout << "depassement de memoire!!!";
    exit(1);

}


/*class Point
{
    float x;
    float y;
public:
    void deplace();
    void affiche();
    Point(float,float);


};

void Point::affiche()
{
    cout << x<<"\n"<<y;

}

void Point::deplace()
{
    float x_,y_;
    cout<< "déplacementde l'axe x ?\n";
    cin >> x_;
    x += x_;
    cout << "deplacement de l axe y?\n";
    cin >> y_;
    y += y_;

}

Point::Point(float abscisse,float ordonnee)
{
    x = abscisse;
    y = ordonnee;

}*/

float angle(float,float);
float angle(float x,float y)
{
    int ang = atan(y/x);
    return ang;
}
class Point
{
    float x;
    float y;
public:
    void deplace();
    float get_abscisse();
    float get_ordonnee();
    void homothetie(float);
    void rotation(float);
    float rho();
    float theta();

    Point(float,float);


};
Point::Point(float abscisse,float ordonnee)
{
    x = abscisse;
    y = ordonnee;
}
float Point :: get_abscisse()
{
    return(x);

}

float Point :: get_ordonnee()
{
    return(y);

}

void Point::deplace()
{
    float x_,y_;
    cout<< "déplacementde l'axe x ?\n";
    cin >> x_;
    x += x_;
    cout << "deplacement de l axe y?\n";
    cin >> y_;
    y += y_;

}

void Point :: homothetie(float k)
{
    x *= k;
    y *= k;
}

void Point :: rotation(float angl)
{

float r = sqrt(x*x + y*y);
angl += angle(x,y);
x = r*cos(angl);
y = r*sin(angl);

}

float Point ::rho()
{
    return(sqrt(x*x + y*y));

}

float Point :: theta()
{
    return(atan(y/x));
}






