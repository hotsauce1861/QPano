#include "GwLabelBtn.h"

GwLabelBtn::GwLabelBtn(QWidget *parent) 
	:QLabel(parent)
{

}


GwLabelBtn::~GwLabelBtn()
{

}

void GwLabelBtn::mouseReleaseEvent(QMouseEvent * event){
	Q_UNUSED(event)
	emit clicked(true);
}
