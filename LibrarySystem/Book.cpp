#include "Book.h"

Book::Book()
{
    m_name = "milkfog";
    m_author = "luozihao";
    m_isbn = "114514";
    m_id = "1919810";
    m_publisher = "homopublisher";
    m_state = true;
    m_price = 5.20;
}

Book::Book(string na, string au, string isbn, string id, string pu, bool state, double pri)
{
    m_name = na;
    m_author = au;
    m_isbn = isbn;
    m_id = id;
    m_publisher = pu;
    m_state = state;
    m_price = pri;
}

void Book::showbook()
{
    cout << m_name << endl;
    cout << m_author << endl;
    cout << m_isbn << endl;
    cout << m_id << endl;
    cout << m_publisher << endl;
    cout << m_state << endl;
    cout << m_price << endl;
}

void Book::setstae(bool newstate)
{
    m_state = newstate;
}

double Book::getprice()
{
    return m_price;
}