# Web Fetcher (C++ Console Browser)

## 📌 Description
Web Fetcher is a **C++ console application** that allows users to enter a website URL and either **fetch the HTML content** or **open the website in a browser**. It utilizes **libcurl** for fetching web pages and system commands for redirection.

## 🚀 Features
- ✅ **Fetch HTML Content** of any website.
- ✅ **Redirect to Website** using the system's default browser.
- ✅ **Cross-platform support** (Windows, Linux, macOS).


## 🛠️ Installation & Setup
### 1️⃣ Install Dependencies
Make sure you have `libcurl` installed.

#### **Windows (MSYS2 MinGW-w64)**
```sh
pacman -S mingw-w64-x86_64-curl
```

#### **Linux (Ubuntu/Debian)**
```sh
sudo apt install libcurl4-openssl-dev
```

#### **MacOS (Homebrew)**
```sh
brew install curl
```

### 2️⃣ Compile the Project
```sh
g++ -o web_fetcher src/main.cpp src/http_client.cpp -Iinclude -I/usr/include -L/usr/lib -lcurl
```

### 3️⃣ Run the Application
```sh
./web_fetcher
```

## 🎯 Usage
1️⃣ **Fetch HTML Content:**
```
Enter website URL: https://www.example.com
Fetched HTML Content:
<!DOCTYPE html>
<html>
...
```

2️⃣ **Open Website in Browser:**
```
Enter website URL: https://www.google.com
(Opens in default browser)
```

## 🛠️ Contributing
1. Fork the repository 📌
2. Create a new branch: `git checkout -b feature-branch`
3. Commit changes: `git commit -m "Add new feature"`
4. Push to GitHub: `git push origin feature-branch`
5. Create a pull request ✅


