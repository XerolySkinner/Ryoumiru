#include "videoblock.h"
#include "ui_videoblock.h"

VideoBlock::VideoBlock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VideoBlock)
{
    ui->setupUi(this);
}

VideoBlock::~VideoBlock()
{
    delete ui;
}
