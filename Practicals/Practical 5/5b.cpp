#include <iostream.h>
#include <conio.h>
class internal
{
    int n;

public:
    void get()
    {
        cout << "\nEnter n: ";
        cin >> n;
    }
    int n_return()
    {
        return n;
    }
    void show()
    {
        cout << "\n\nInternal marks: " << n;
    }
};
class external
{
    int m;

public:
    void get()
    {
        cout << "\nEnter m: ";
        cin >> m;
    }
    int m_return()
    {
        return m;
    }
    void show()
    {
        cout << "\nM: " << m;
    }
};
class final : public internal, public external
{
    float tot;

public:
    void get()
    {
        internal::get();
        external::get();
    }
    void show()
    {
        tot = internal::n_return() + external::m_return();
        cout << "\nTotal: " << tot;
    }
};
void main()
{
    clrscr();
    final t;
    t.get();
    t.show();
    getch();
}
