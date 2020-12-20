# Quick Reader

Quick Reader is a program that enables its user to quickly read through text by encouraging the silencing of their subvocalization.
Quick Reader is free/libre open source software released under GPL. The source code is available on GitLab at https://gitlab.com/quickreader/quickreader.
You should have received a copy of the GNU General Public License along with this program. If not, see http://www.gnu.org/licenses/
This is my first piece of free open source software, so I hope it meets your expectations of quality and may it serve you well.

Demo Video:
![](Assets/Demo.mp4)

# Features

This program encourages the silencing of the user's subvocalization by quickly going through the inputted text. The text is displayed below the input field and the words are changed multiple times per second. This will encourage the user to quietly accept the words without pronouncing them silently in their head, resulting in faster comprehension.

- Changeable words per minute speed and chunk size
- Dynamically calculated duration of the time to read all the text inputted
- Saving to and opening from text files
- Changing the font size and style of the displayed words
- Jumping back and forth with the arrow keys and pausing with space
- Configurable text input font size, jumping distance with the arrow keys, remembering and restoring position in text, variable speed to slow down the time until the next word if the current one is too long

# Windows install

1. Download the archive containing the Windows binaries for your version (64bit or 32bit)
2. Extract the archive in a directory of your choosing
3. Run the executable from that directory

# Linux install

An Arch Linux PKGBUILD is available in the AUR at

# Linux manual install

1. Make sure `qt5-base` and `hicolor-icon-theme` are installed in your local distribution as well as the programs `make` and `qmake`
2. Git clone this repo and cd into it
3. Execute
    - `mkdir build && cd build`
    - `qmake -o Makefile ../QuickReader.pro -spec linux-g++`
    - `make -f Makefile`
    - `install -m 755 QuickReader /usr/bin`
    - `install -m 644 ../Assets/quickreader.desktop /usr/share/applications`
    - `install -m 644 ../Assets/quickreader-icon.svg /usr/share/icons/hicolor/scalable/apps`
