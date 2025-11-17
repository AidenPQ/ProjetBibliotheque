# ProjetBibliotheque — C++ OOP mini library simulator

Small C++ introduction project simulating a **library**:
a **polymorphic** catalog (base `Livre` + derived types: `Roman`, `BandeDessinee`,
`RecueilPoesie`, `PieceDeTheatre`, `Album`), **members** (`Adherent`), and
a **custom linked list** for the catalog (`NoeudLivre`, `ListeNoeudlivre`).
Central management lives in `Bibliotheque`. Console-based.

> Educational focus: **class design**, **headers/sources split**, **inheritance/polymorphism**,
> and a simple **borrow/return** workflow.

---

## ✨ Main features

- **Book hierarchy**: common interface in `Livre`, specializations per genre/type.
- **Members**: `Adherent` (basic user info / operations).
- **Catalog**: custom singly linked list (`NoeudLivre`, `ListeNoeudlivre`) instead of STL,
  to practice pointers & ownership.
- **Library manager**: `Bibliotheque` orchestrates add/search/borrow/return (and basic prints).
- **CLI** (console) via `main.cpp`.

*(Classes and filenames come from the repository tree.)*

---

## 🧱 Project structure

```text
include/   # headers (*.h)
src/       # sources (*.cpp) incl. main.cpp
Key headers: livre.h, roman.h, bandeDessinee.h, recueilPoesie.h,
pieceDeTheatre.h, album.h, adherent.h, noeudLivre.h, listeNoeudlivre.h,
bibliotheque.h.
```

---

## 🚀 Build & run (CMake)

```bash
# From repo root
cmake -S . -B build
cmake --build build --config Release
./build/projet_biblio
```

**One-liner (no CMake, quick check)**
```bash
g++ -std=c++17 -Iinclude \
  src/*.cpp -o projet_biblio && ./projet_biblio
```

If your OS requires it, replace ./build/projet_biblio with build\\projet_biblio.exe

---

## 🧪 What to test (manually)

Create a few Adherent and several Livre subtypes.

Add books to the linked-list catalog and print them.

Search by title/author (as implemented).

Borrow a book, then return it; check state changes and list contents.

Edge cases: empty list, double-borrow, return of a non-borrowed item.

---

## 🛠️ Possible improvements

Replace raw pointers with smart pointers (or switch to std::list).

Input validation (CLI), simple persistence (CSV/JSON).

Unit tests (e.g., Catch2) for borrow/return & list operations.

Split responsibilities more clearly between Bibliotheque and list classes.

Add a Makefile target for formatting (clang-format).
