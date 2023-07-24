#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string password;
    std::cin >> password;

    //проверка 1го условия
    size_t ascii = 0;
    for (size_t i = 0; i != password.size(); ++i)
    {
        if (((int)(password[i])>32) && ((int)(password[i])<127))
        {
            ascii += 1;
        }
        
    }

    bool first;
    if (ascii == password.size())
    {
        first = true;
    }
    else
    {
        first = false;
    }
    
   
    //проверка 2го условия
    bool second;
    if ((password.size() > 7) && (password.size() < 15))
    {
        second = true;
    }
    else
    {
       second = false;
    }
    
   

    //проверка 3го условия
    int up = 0;
    for (size_t i = 0; i != password.size(); ++i)
    {
        if (isupper(password[i]))
        {
            up += 1;
        }
        
    }
    bool cl1 = false;
    if (up > 0)
    {
        cl1 = true;
    }

    int low = 0;
    for (size_t i = 0; i != password.size(); ++i)
    {
        if (islower(password[i]))
        {
            low += 1;
        }
        
    }
    bool cl2 = false;
    if (low > 0)
    {
        cl2 = true;
    }
    
    int dig = 0;
    for (size_t i = 0; i != password.size(); ++i)
    {
        if (isdigit(password[i]))
        {
            dig += 1;
        }
        
    }
    bool cl3 = false;
    if (dig > 0)
    {
        cl3 = true;
    }

    int an = 0;
    for (size_t i = 0; i != password.size(); ++i)
    {
        if ((!isupper(password[i])) && (!islower(password[i])) && (!isdigit(password[i])))
        {
            an += 1;
        }
        
    }
    bool cl4 = false;
    if (an > 0)
    {
        cl4 = true;
    }

    bool third;
    if ((cl1 && cl2 && cl3) || (cl1 && cl2 && cl4) || (cl1 && cl3 && cl4) || (cl2 && cl3 && cl4))
    {
        third = true;
    }
    else
    {
        third = false;
    }

    
    if (first && second && third)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    
    
    

    
    


    

}