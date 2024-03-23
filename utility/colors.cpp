#include <string>

class Colors {
public:
    static std::string colorText(const std::string& text, int foreground) {
        return "\033[" + std::to_string(foreground) + "m" + text + "\033[0m";
    }

    static std::string black(const std::string& text) {
        return colorText(text, 30);
    }

    static std::string red(const std::string& text) {
        return colorText(text, 31);
    }

    static std::string green(const std::string& text) {
        return colorText(text, 32);
    }

    static std::string yellow(const std::string& text) {
        return colorText(text, 33);
    }

    static std::string blue(const std::string& text) {
        return colorText(text, 34);
    }

    static std::string magenta(const std::string& text) {
        return colorText(text, 35);
    }

    static std::string cyan(const std::string& text) {
        return colorText(text, 36);
    }

    static std::string white(const std::string& text) {
        return colorText(text, 37);
    }

    static std::string brightBlack(const std::string& text) {
        return colorText(text, 90);
    }

    static std::string brightRed(const std::string& text) {
        return colorText(text, 91);
    }

    static std::string brightGreen(const std::string& text) {
        return colorText(text, 92);
    }

    static std::string brightYellow(const std::string& text) {
        return colorText(text, 93);
    }

    static std::string brightBlue(const std::string& text) {
        return colorText(text, 94);
    }

    static std::string brightMagenta(const std::string& text) {
        return colorText(text, 95);
    }

    static std::string brightCyan(const std::string& text) {
        return colorText(text, 96);
    }

    static std::string brightWhite(const std::string& text) {
        return colorText(text, 97);
    }
};
