#include <iostream>
#include <string>

int main() {

    std::string word;
    std::cin >> word;

    //сохраняем первую букву и заменяем в остальной части слова буквы a, e, h, i, o, u, w и y на пробелы
    for (size_t i = 1; i != word.size(); ++i) {
        if ((word[i] == 'a') || (word[i] == 'e') || (word[i] == 'h') || (word[i] == 'i') || (word[i] == 'o') || (word[i] == 'u') || (word[i] == 'w') || (word[i] == 'y'))
        {
            word[i] = ' ';
        }
        
    }

    //убираем пробелы
    std::string clear_word;
    for (size_t i = 0; i != word.size(); ++i) {
        if (word[i] != ' ')
        {
            clear_word.push_back(word[i]);
        }
    }
    
    //обратно присваиваем для удобности
    word = clear_word;

   

    //заменяем буквы на цифры
    for (size_t i = 1; i != word.size(); ++i) {
        if ((word[i] == 'b') || (word[i] == 'f') || (word[i] == 'p') || (word[i] == 'v'))
        {
            word[i] = '1';
        }
        
    }

    for (size_t i = 1; i != word.size(); ++i) {
        if ((word[i] == 'c') || (word[i] == 'g') || (word[i] == 'j') || (word[i] == 'k') || (word[i] == 'q') || (word[i] == 's') || (word[i] == 'x') || (word[i] == 'z'))
        {
            word[i] = '2';
        }
        
    }

    for (size_t i = 1; i != word.size(); ++i) {
        if ((word[i] == 'd') || (word[i] == 't'))
        {
            word[i] = '3';
        }
        
    }

    for (size_t i = 1; i != word.size(); ++i) {
        if (word[i] == 'l')
        {
            word[i] = '4';
        }
        
    }

    for (size_t i = 1; i != word.size(); ++i) {
        if ((word[i] == 'm') || (word[i] == 'n'))
        {
            word[i] = '5';
        }
        
    }

    for (size_t i = 1; i != word.size(); ++i) {
        if (word[i] == 'r')
        {
            word[i] = '6';
        }
        
    }

 

    //сокращаем последовательно стоящие цифры
    std::string ap_word;
    ap_word = word[0];
    for (size_t i = 1; i != word.size(); ++i) {
        if ((word[i+1] != word[i]) && ((word[i] == '1') || (word[i] == '2') || (word[i] == '3') || (word[i] == '4') || (word[i] == '5') || (word[i] == '6')))
        {
            ap_word.push_back(word[i]);
        }
    }

    
    word = ap_word;

    
   
    //обрезка и добавление

    while (word.size() < 4) {
        word.push_back('0');
    }
    word.resize(4);

    

    std::cout << word << '\n';

}