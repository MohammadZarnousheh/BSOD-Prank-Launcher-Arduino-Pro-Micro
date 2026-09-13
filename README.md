# BSOD Prank Launcher (Arduino Pro Micro)  
**🎭 USB HID prank that simulates a fake Blue Screen of Death**

## 📝  Description

This project uses an **Arduino Pro Micro** to act as a USB keyboard and launch a fake BSOD (Blue Screen of Death) in full-screen mode on a Windows PC.

### 🔹 How it works:
- Sends `Win + R` to open the **Run** dialog.
- Types a command to open a prank URL in the browser.
- Presses `F11` to make the browser go full-screen.
- The website mimics a Windows crash screen visually — **no actual harm is done**.

🔧 It works only on **Windows** and relies on the HID (keyboard emulation) capability of **ATmega32u4-based boards**.

> ⚠️ Use for **educational or entertainment purposes only**.  

---

## 📝 توضیحات فارسی

این پروژه با استفاده از **برد Arduino Pro Micro** (یا هر برد دارای ATmega32u4) طراحی شده و با شبیه‌سازی کیبورد، صفحه‌ای را باز می‌کند که نمایی جعلی از **صفحه آبی مرگ (BSOD)** ویندوز را نشان می‌دهد.

### 🔹 نحوه عملکرد:
- کلیدهای `Win + R` را برای باز کردن پنجره Run ارسال می‌کند.
- یک دستور CMD می‌فرستد تا مرورگر باز شود و به سایت شوخی هدایت شود.
- با زدن `F11`، مرورگر را تمام‌صفحه می‌کند تا ظاهری واقعی‌تر پیدا کند.
- این صفحه کاملاً جعلی است و هیچ آسیبی به سیستم وارد نمی‌کند.

⚠️ استفاده فقط برای اهداف **آموزشی یا سرگرمی** توصیه می‌شود.  

---
## 💻 Requirements 

### 🔹 Hardware:
- Arduino Pro Micro (or any board with ATmega32u4, e.g. Leonardo, Beetle)
- USB cable for connection

### 🔹 Software:
- Arduino IDE (latest version recommended)
- Built-in `Keyboard.h` library

### 🔹 Target System:
- A Windows PC
- Internet connection (to open the prank webpage)

## 💻 نیازمندی‌ها 

### 🔹 سخت‌افزار:
- برد Arduino Pro Micro یا هر برد دارای چیپ ATmega32u4 (مثل Leonardo یا Beetle)
- کابل USB برای اتصال برد به کامپیوتر

### 🔹 نرم‌افزار:
- نرم‌افزار Arduino IDE (ترجیحاً نسخه به‌روز)
- کتابخانه `Keyboard.h` (به‌صورت پیش‌فرض در Arduino IDE وجود دارد)

### 🔹 سیستم هدف:
- یک کامپیوتر ویندوزی
- اتصال به اینترنت (برای باز شدن صفحه شوخی)


---

## 🔗 Demo URL

The prank opens this link:  
🌐 [https://www.ravbug.com/bsod/bsod10/](https://www.ravbug.com/bsod/bsod10/)  
(Not dangerous — just a fullscreen fake crash page)

