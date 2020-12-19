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

#include "preferences.h"
#include "ui_preferences.h"

Preferences::Preferences(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Preferences)
{
    ui->setupUi(this);
}

Preferences::~Preferences()
{
    delete ui;
}

void Preferences::receivePreferences(int textInputFontSize, bool rememberTextInputFontSize, bool rememberMainFont, bool rememberPosition, bool rememberWindowDimensions, int jumpBackChunks, int jumpForwardChunks,
                                     bool rememberWPMSpeed, bool rememberChunkSize, bool startWithEmptyTextField, bool variableSpeedEnabled, int threshold, int reducedSpeedPercentage)
{
    ui->textInputFontSizeSpinBox->setValue(textInputFontSize);
    ui->rememberTIFSCheckBox->setChecked(rememberTextInputFontSize);
    ui->rememberMainFontCheckBox->setChecked(rememberMainFont);
    ui->rememberPositionCheckBox->setChecked(rememberPosition);
    ui->rememberWindowDimensionsCheckBox->setChecked(rememberWindowDimensions);
    ui->jumpBackChunksSpinBox->setValue(jumpBackChunks);
    ui->jumpForwardChunksSpinBox->setValue(jumpForwardChunks);
    ui->rememberWPMSpeedCheckBox->setChecked(rememberWPMSpeed);
    ui->rememberChunkSizeCheckBox->setChecked(rememberChunkSize);
    ui->startWithEmptyTextFieldCheckBox->setChecked(startWithEmptyTextField);
    ui->variableSpeedCheckBox->setChecked(variableSpeedEnabled);
    ui->thresholdSpinBox->setValue(threshold);
    ui->reducedSpeedSpinBox->setValue(reducedSpeedPercentage);
}

void Preferences::on_cancelButton_clicked()
{
    this->close();
}

void Preferences::on_variableSpeedCheckBox_stateChanged(int arg1)
{
    ui->thresholdSpinBox->setEnabled(arg1);
    ui->label_2->setEnabled(arg1);
    ui->reducedSpeedSpinBox->setEnabled(arg1);
    ui->label_3->setEnabled(arg1);
}

void Preferences::on_applyButton_clicked()
{
    emit preferencesChanged(ui->textInputFontSizeSpinBox->value(), ui->rememberTIFSCheckBox->isChecked(), ui->rememberMainFontCheckBox->isChecked(),
                            ui->rememberPositionCheckBox->isChecked(), ui->rememberWindowDimensionsCheckBox->isChecked(), ui->jumpBackChunksSpinBox->value(),
                            ui->jumpForwardChunksSpinBox->value(), ui->rememberWPMSpeedCheckBox->isChecked(), ui->rememberChunkSizeCheckBox->isChecked(),
                            ui->startWithEmptyTextFieldCheckBox->isChecked(), ui->variableSpeedCheckBox->isChecked(), ui->thresholdSpinBox->value(), ui->reducedSpeedSpinBox->value());

    this->close();
}

void Preferences::on_clearAllSavedButton_clicked()
{
    QSettings settings(QSettings::IniFormat, QSettings::UserScope, "quickreader", "quickreader");
    settings.remove("LastPositionInText");
}
