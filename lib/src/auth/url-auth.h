#ifndef URL_AUTH_H
#define URL_AUTH_H

#include <QList>
#include <QString>
#include "auth/field-auth.h"


class AuthField;

class UrlAuth : public FieldAuth
{
	public:
		UrlAuth(QString type, QList<AuthField*> fields);
};

#endif // URL_AUTH_H
