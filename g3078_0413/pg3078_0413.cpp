#include <bits/stdc++.h>
using namespace std;

class MyClass
{
private:
  string name;
  int score;

public:
  MyClass(string, int);

  MyClass(const MyClass &num);

  ~MyClass();

  void output_data();
};

MyClass::MyClass(string n, int s)
{
  name = n;
  score = s;
  cout << "MyClass �غc���Q�I�s" << endl;
}

MyClass::MyClass(const MyClass &num)
{
  cout << "�����غc���Q�I�s�F" << endl;
  name = num.name;
  score = num.score;
}

MyClass::~MyClass()
{
  cout << "�Ѻc���Q�I�s,MyClass" << this->name << "�Q�P���F.." << endl;
  system("pause");
}

void MyClass::output_data()
{
  cout << "name:" << name << ":"
       << "score=" << score << endl;
}

int main()

{
  srand(time(NULL));
  vector<MyClass> lin;

  for (int i = 0; i < 10; i++)
  {
    string name = "aaaaaa";
    for (int j = 0; j < 6; j++)
    {
      name[j] += rand() % 26;
    }
    int score = 0;
    score += rand() % 101;
    MyClass tmp(name, score);
    lin.push_back(tmp);
  }

  for (int k = 0; k < 10; k++)
  {
    lin[k].output_data();
  }

  /**
    MyClass name1("Sherry", 100);
    MyClass name2("Jerrry", 90);
    MyClass name3("Addcsa", 70);
    MyClass name4("Dherry", 50);
    MyClass name5("Yebrry", 90);
    MyClass copyname2(name1);
    **/

  // name.push_back(name1);
  // name.push_back(copyname2);

  system("pause");
  return 0;
}