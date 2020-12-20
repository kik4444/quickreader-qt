# Quick Reader

Quick Reader is a program that enables its user to quickly read through text by encouraging the silencing of their subvocalization.
Quick Reader is free/libre open source software released under GPL. The source code is available on GitLab at https://gitlab.com/quickreader/quickreader.
You should have received a copy of the GNU General Public License along with this program. If not, see http://www.gnu.org/licenses/
This is my first piece of free open source software, so I hope it meets your expectations of quality and may it serve you well.

Demo Video:
![](Assets/Demo.mp4)

# Windows install

1. Download the archive containing the Windows binaries for your version
2. Extract the archive in a directory of your choosing
3. Run the executable

# Linux install

An Arch Linux build is available in the AUR at

# Linux manual install

1. Install `qt5-base` and `hicolor-icon-theme` for your local distribution
2. Git clone this repo and cd into it
3. Execute
    - `mkdir build && cd build`
    - `qmake -o Makefile ../QuickReader.pro -spec linux-g++`
    - `make -f Makefile`
    - `install -m 755 QuickReader /usr/bin`
    - `install -m 644 ../Assets/quickreader.desktop /usr/share/applications`
    - `install -m 644 ../Assets/quickreader-icon.svg /usr/share/icons/hicolor/scalable/apps`