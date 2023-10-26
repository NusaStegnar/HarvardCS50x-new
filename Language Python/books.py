books = []

# Add three books to your shelf
for i in range(3):
    book = {}
    book["title"] = input("Title: ").strip().capitalize(
    book["author"] = input("Author: ")
    print(book)
    
    books.append(book)

    for book in books:
        print(book["title"])
