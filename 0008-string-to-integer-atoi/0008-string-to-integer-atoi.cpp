class Solution {
public:
    int myAtoi(string s) {
    string str;
    int i = 0;
    
    // Пропускаем пробелы
    while (i < s.size() && s[i] == ' ') {
        i++;
    }
    
    // Обрабатываем знак (ТОЛЬКО первый значимый символ)
    if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
        str += s[i];  // сохраняем знак
        i++;
    }
    
    // Собираем цифры
    for (; i < s.size(); i++) {
        if (isdigit(s[i])) {
            str += s[i];
        } else {
            break;  // первая же не-цифра прерывает сбор
        }
    }
    
    // Проверка на пустую строку или только знак
    if (str.empty() || str == "+" || str == "-") {
        return 0;
    }
    
    // Проверка на переполнение через исключения
    try {
        int res = stoi(str);
        return res;
    }
    catch (const std::out_of_range& e) {
        // При переполнении возвращаем границы int
        return (str[0] == '-') ? INT_MIN : INT_MAX;
    }
    catch (const std::invalid_argument& e) {
        return 0;
    }
}
};