#include <iostream>
#include <cstdio>
#include <vector>

// Fibonacci without recursive function (Using memoization)

class fibonacci
{
    private:
        std::vector<unsigned long long> memodata;
        
    public:
        fibonacci()
        {
            memodata.push_back(0);
            memodata.push_back(1);
        }
    
        unsigned long long calcFibonacci(const int num)
        {
            for(int i = memodata.size(); i <= num; i++)
                memodata.push_back(memodata[i - 1] + memodata[i - 2]);
            
            return memodata[num];
        }
};

int main(void)
{
    fibonacci f;
    int num = 0;
    
    while(num >= 0)
    {
        std::cin >> num;
        std::cout << f.calcFibonacci(num) << std::endl;
    }
    
    return 0;
}
