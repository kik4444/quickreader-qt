/*    This file is part of Quick Reader.
 *
 *    Quick Reader is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    Quick Reader is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with Quick Reader.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "aboutqt.h"
#include "ui_aboutqt.h"

AboutQt::AboutQt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutQt)
{
    ui->setupUi(this);
}

AboutQt::~AboutQt()
{
    delete ui;
}

void AboutQt::on_pushButton_clicked()
{
    this->close();
}
