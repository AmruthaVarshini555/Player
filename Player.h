#include"iostream"
using namespace std;
class Player{
        public:
                Player();
                Player(string,int);
                void display();
                void accept();
        private:
                string name;
                int age;
};
