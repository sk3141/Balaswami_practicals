#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <map>

class Book
{
    private:
    std::string bookName;
    std::string authorName;
    std::string publisherName;
    int price;

    public:
    Book(std::string bookName, std::string authorName,
        std::string publisherName)
    {
        this->bookName = bookName;
        this->authorName = authorName;
        this->publisherName = publisherName;
    }

    void updatePrice(float amount)
    {
        price = amount;
    }
    bool operator == (Book &B)
    {
        if (this->bookName == B.bookName
            && this->authorName == B.authorName)
        {
            return true;
        }
        return false;
    }
    friend class BookShop;
};

class BookShop
{
    private:
    std::map<Book*, int> inventory;
    public:
    static int noOfTransactions;

    void store(Book &book)
    {
        auto itr = inventory.find(&book);
        if (itr == inventory.end())
        {
            inventory.insert({&book, 1});
            return;
        }

        itr->second += 1;
    }

    void fetch(std::string bookName, std::string authorName, int numberOfCopies)
    {
        try
        {
            for (auto itr = inventory.begin(); itr != inventory.end(); itr++)
            {
                if (itr->first->bookName == bookName && 
                itr->first->authorName == authorName &&
                itr->second >= numberOfCopies)
                {
                    std::cout << "Copies found \n";
                    noOfTransactions++;
                    return;
                }
            }
            throw std::runtime_error("Copies not found");

        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
};
int BookShop::noOfTransactions = 0;

int main()
{
    BookShop shop;
    Book b1("The art of computer programming vol 1", "Donald Knuth", "MIT Press");
    b1.updatePrice(2000);
    Book b2("The art of computer programming vol 1", "Donald Knuth", "MIT Press");
    b2.updatePrice(2000);
    Book b3("The art of computer programming vol 2", "Donald Knuth", "MIT Press");
    b3.updatePrice(1000);
    shop.store(b1);
    shop.store(b2);
    shop.store(b3);

    shop.fetch("The art of computer programming vol 1", "Donald Knuth", 1);
    return 0;
}