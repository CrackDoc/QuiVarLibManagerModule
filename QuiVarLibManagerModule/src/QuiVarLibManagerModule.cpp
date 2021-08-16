#include "QuiVarLibManagerModule.h"
#include "ui_QuiVarLibManagerModule.h"

CQuiVarLibManagerModule::CQuiVarLibManagerModule(QWidget *parent)
    : QWidget(parent)
	,ui(new Ui::QuiVarLibManagerModuleClass)
{
    ui->setupUi(this);
}
CQuiVarLibManagerModule::~CQuiVarLibManagerModule()
{
	
}
std::string CQuiVarLibManagerModule::GetName() const
{
	return "";
}

std::string CQuiVarLibManagerModule::GetCompany() const
{
	return "";
}

std::string CQuiVarLibManagerModule::GetVersion() const
{
	return "";
}

std::string CQuiVarLibManagerModule::GetDescription() const
{
	return "";
}

bool CQuiVarLibManagerModule::Initialise()
{
	return true;
}

bool CQuiVarLibManagerModule::Uninitialise()
{
	return true;
}
IMPLEMENT_MODULE(QuiVarLibManager)
