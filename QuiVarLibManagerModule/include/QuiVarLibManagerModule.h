#ifndef QuiVarLibManagerModule_h__
#define QuiVarLibManagerModule_h__


#include "IQuiVarLibManagerModule.h"
#include <QtWidgets/QWidget>
#include "PublicMarco.h"
namespace Ui
{
	class QuiVarLibManagerModule;
}
class CQuiVarLibManagerModule : public QWidget,public IQuiVarLibManagerModule
{
    Q_OBJECT

public:
    CQuiVarLibManagerModule(QWidget *parent = Q_NULLPTR);
	~CQuiVarLibManagerModule();
public:
	/**
	* @fn       GetName
	* @author   Crack
	* @brief    获取模块名称
	* @date     2021/4/11 22:10
	* @param
	* @return
	*/
    virtual std::string GetName() const;
	/**
	 * @fn       GetCompany
	 * @author   Crack
	 * @brief    获取公司名称
	 * @date     2021/7/29 9:57
	 * @param
	 * @return
	*/
	virtual std::string GetCompany() const;
	/**
	 * @fn       GetVersion
	 * @author   Crack
	 * @brief     获取版本号
	 * @date     2021/7/29 9:57
	 * @param
	 * @return
	*/
	virtual std::string GetVersion() const;
	/**
	 * @fn       GetDescription
	 * @author   Crack
	 * @brief    描述信息
	 * @date     2021/7/29 9:58
	 * @param
	 * @return
	*/
	virtual std::string GetDescription() const;
	/**
	 * @fn       Initialise
	 * @author   Crack
	 * @brief    初始化
	 * @date     2021/7/29 9:58
	 * @param
	 * @return
	*/
	virtual bool Initialise();
	/**
	 * @fn       Uninitialise
	 * @author   Crack
	 * @brief    卸载信息
	 * @date     2021/7/29 9:59
	 * @param
	 * @return
	*/
	virtual bool Uninitialise();
private:
    Ui::QuiVarLibManagerModule *ui;
};
DECLARE_MODULE(QuiVarLibManager, extern)
#endif // QuiVarLibManagerModule_h__