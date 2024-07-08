#ifndef VIDEOBLOCK_H
#define VIDEOBLOCK_H

#include <QWidget>

namespace Ui {
class VideoBlock;
}

class VideoBlock : public QWidget
{
    Q_OBJECT

public:
    explicit VideoBlock(QWidget *parent = nullptr);
    ~VideoBlock();

private:
    Ui::VideoBlock *ui;
};

#endif // VIDEOBLOCK_H
