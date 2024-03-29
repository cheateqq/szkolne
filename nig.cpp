#include <iostream>
#include <string>

using namespace std;

const int MAX_USERS = 10;

class Authenticator {
private:
    string usernames[MAX_USERS];
    string passwords[MAX_USERS];
    int num_users;

public:
    Authenticator() {
        num_users = 0;
        registerUser("user1", "pass1");
        registerUser("user2", "pass2");
    }

    char xorEncrypt(char input, char key) {
        return input ^ key;
    }

    char xorDecrypt(char input, char key) {
        return input ^ key;
    }

    void registerUser(const string& username, const string& password) {
        if (num_users == MAX_USERS) {
            cout << "Maksymalna liczba uzytkownikow osiagnieta, nie mozna stworzyc konta.\n";
            return;
        }

        for (int i = 0; i < num_users; ++i) {
            if (usernames[i] == username) {
                cout << "Uzytkownik juz istnieje, nie mozna stworzyc uzytkownika\n";
                return;
            }
        }

        char key = 'X';
        for (int i = 0; i < password.length(); ++i) {
            usernames[num_users] = username;
            passwords[num_users] += xorEncrypt(password[i], key);
        }
        num_users++;
        cout << "Uzytkownik stworzony pomyslnie.\n";
    }

    bool authenticate(const string& username, const string& password) {
        for (int i = 0; i < num_users; ++i) {
            if (usernames[i] == username) {
                char key = 'X';
                string decrypted_password;
                for (int j = 0; j < passwords[i].length(); ++j) {
                    decrypted_password += xorDecrypt(passwords[i][j], key);
                }
                if (decrypted_password == password) {
                    return true;
                }
                break;
            }
        }
        return false;
    }
};

int main() {
    Authenticator auth;
    int choice;
    string input_username, input_password, input_confirm;

    while (true) {
        cout << "1. Rejestracja\n2. Logowanie\n3. Wyjscie\n";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Nazwa uzytkownika: ";
                cin >> input_username;
                cout << "Haslo: ";
                cin >> input_password;
                cout << "Potwierdz haslo: ";
                cin >> input_confirm;

                if (input_password == input_confirm) {
                    auth.registerUser(input_username, input_password);
                } else {
                    cout << "Hasla sie nie zgadzaja.\n";
                }
                break;
            }

            case 2: {
                cout << "Wpisz nazwe uzytkownika: ";
                cin >> input_username;
                cout << "Wpisz haslo: ";
                cin >> input_password;

                if (auth.authenticate(input_username, input_password)) {
                    cout << "Zalogowano!\n";
                } else {
                    cout << "Blad, sprawdz dane i sprobuj ponownie.\n";
                }
                break;
            }

            case 3:
                return 0;

            default:
                cout << "Zly wybor, sprobuj ponownie.\n";
                break;
        }
    }
}
