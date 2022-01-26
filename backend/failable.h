#pragma once

#include <QString>

#include "backenderror.h"

class Failable
{
public:
    Failable();

    bool isError() const;

    BackendError::ErrorType error() const;
    void setError(BackendError::ErrorType error);

    const QString &errorString() const;
    void setErrorString(const QString &errorMessage);

    void resetError();

private:
    bool m_isError;
    BackendError::ErrorType m_error;
    QString m_errorString;
};

