// Copyright 2016 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include <QFileDialog>

#include "citra_qt/configuration/configure_camera_individual.h"
#include "core/frontend/camera/factory.cpp"
#include "core/settings.h"
#include "ui_configure_camera_individual.h"



ConfigureCameraIndividual::ConfigureCameraIndividual(QWidget* parent) : QWidget(parent), ui(new Ui::ConfigureCameraIndividual) {
    ui->setupUi(this);
}

ConfigureCameraIndividual::~ConfigureCameraIndividual() {}

void ConfigureCameraIndividual::setConfiguration() {
    int camera_mode_index = 0;
    for (int index = 0; index < ui->camera_mode_combobox->count(); index++) {
        if (ui->camera_mode_combobox->itemText(index).toStdString() == Settings::values.camera_name[m_CameraId]) {
            camera_mode_index = index;
            break;
        }
    }
    ui->camera_mode_combobox->setCurrentIndex(camera_mode_index);
    UpdateCameraMode(camera_mode_index);

    ui->image_path->setText(Settings::values.camera_config[m_CameraId].c_str());
}

void ConfigureCameraIndividual::applyConfiguration() {
    Settings::values.camera_name[m_CameraId] =
        ui->camera_mode_combobox->itemText(ui->camera_mode_combobox->currentIndex()).toStdString();
    Settings::values.camera_config[m_CameraId] =
        ui->image_path->text().toStdString();

    Settings::Apply();
}

void ConfigureCameraIndividual::setCameraId(int cameraId) {
    m_CameraId= cameraId;
    this->setConfiguration();
    connect(ui->camera_mode_combobox,
        static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), this,
        &ConfigureCameraIndividual::UpdateCameraMode);

    connect(ui->image_browse_button, &QPushButton::clicked, this, &ConfigureCameraIndividual::OnBrowseImage);
}

void ConfigureCameraIndividual::setCameraTitle(QString cameraTitle) {
    ui->groupBox1->setTitle(cameraTitle);
}

void ConfigureCameraIndividual::UpdateCameraMode(int camera_mode_index) {
    if (camera_mode_index == 1) { //1 = "image"
        ui->image_path->setEnabled(true);
        ui->image_browse_button->setEnabled(true);
    } else {
        ui->image_path->setEnabled(false);
        ui->image_browse_button->setEnabled(false);
    }
}

void ConfigureCameraIndividual::OnBrowseImage() {
    QString file_filter = tr("PNG (*.png)");
    file_filter += ";;" + tr("All Files (*.*)");

    QString filename = QFileDialog::getOpenFileName(this, tr("Select Image File"),
        ui->image_path->text(), file_filter);
    if (!filename.isEmpty()) {
        ui->image_path->setText(filename);
    }

}

void ConfigureCameraIndividual::retranslateUi() {
    ui->retranslateUi(this);
}
