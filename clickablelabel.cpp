#include "clickablelabel.h"

ClickableLabel::ClickableLabel(QWidget* parent, Qt::WindowFlags f) : QLabel(parent) {
    Q_UNUSED(f);
}

ClickableLabel::~ClickableLabel() {}

void ClickableLabel::mouseDoubleClickEvent(QMouseEvent* event) {
    Q_UNUSED(event);
    emit dblClicked();
}
