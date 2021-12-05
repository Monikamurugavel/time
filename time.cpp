#include<iostream>
#include<iomanip>
using namespace std;
class time
{
  private:
    int seconds;
    int hh,mm,ss;
  public:
    void gettime(void);
    void convertintoseconds(void);
    void displaytime(void);
};
void time::gettime(void)
{
  cout << "enter time:" << end1;
  cout << "hours?";     cin >> hh;
  cout << "minutes?";   cin >> mm;
  cout << "seconds?";   cin >> ss;
}
void time::displaytime(void)
{
   cout << "the time is=" << setw(2) << setfill('0') <<hh<<":"
                          << setw(2) << setfill('0') <<mm<<":"
                          << setw(2) << setfill('0') <<ss<<":"
   cout <"time in total seconds:" << seconds;
}
int main()
{
  time t;
  t.gettime();
  t.convertintoseconds();
  t.displaytime();
  return 0;
}  
