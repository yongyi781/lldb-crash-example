#include <iostream>

struct S
{
    int x;
};

int main()
{
    // Pointer to member causes LLDB to crash.
    auto y = (&S::x);
    std::cout << "Bye world\n";
}
