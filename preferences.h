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

#ifndef PREFERENCES_H
#define PREFERENCES_H

#include <QDialog>
#include <QSettings>

namespace Ui {
class Preferences;
}

class Preferences : public QDialog
{
    Q_OBJECT

public:
    explicit Preferences(QWidget *parent = nullptr);
    ~Preferences();

public slots:
    void receivePreferences(int textInputFontSize, bool rememberTextInputFontSize, bool rememberMainFont, bool rememberPosition, bool rememberWindowDimensions, int jumpBackChunks, int jumpForwardChunks,
                         bool rememberWPMSpeed, bool rememberChunkSize, bool startWithEmptyTextField, bool variableSpeedEnabled, int threshold, int reducedSpeedPercentage);

private slots:

    void on_cancelButton_clicked();

    void on_variableSpeedCheckBox_stateChanged(int arg1);

    void on_applyButton_clicked();

    void on_clearAllSavedButton_clicked();

private:
    Ui::Preferences *ui;

signals:
    void preferencesChanged(int textInputFontSize, bool rememberTextInputFontSize, bool rememberMainFont, bool rememberPosition, bool rememberWindowDimensions, int jumpBackChunks, int jumpForwardChunks,
                            bool rememberWPMSpeed, bool rememberChunkSize, bool startWithEmptyTextField, bool variableSpeedEnabled, int threshold, int reducedSpeedPercentage);
};

#endif // PREFERENCES_H
