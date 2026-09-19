#include<iostream>
using namespace std;

class Book {
private:
    string m_name;
    string m_author;
    string m_isbn;
    string m_id;
    string m_publisher;
    bool m_state;
    double m_price;
public:
    Book();
    Book(string na, string au, string isbn, string id, string pu, bool state, double pri);
    void showbook();
    void setstae(bool newstate);
    double getprice();
};
