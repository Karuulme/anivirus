#ifndef KLIBRARY_H
#define KLIBRARY_H
#include <QObject>
#define Kstring  std::string
#define Kwstring std::wstring
#define Kmap std::map
#define Kprivate private:
#define Kpublic public:
#define Kpaint  System::Drawing
#define Kform System::Windows::Forms
#define Kuse using namespace
#define KstringToText(x) (gcnew System::String(x))
#define Kthread std::thread
#define KToString std::to_string
#define KStringToInt stoi
#define KVector std::vector
#define BUFFER 8192
#define KCharToInt(x) atoi(x)
#define KSpace(x)(memset(x,0,sizeof(x)))
#define KBank   "SOFTWARE\\AntiVirus\\Bank\\"
#define KSecure "SOFTWARE\\AntiVirus\\Secure\\"
struct RegProgramList {
    Kstring pHash;
    Kstring pFile;
    int pRunCount=0;
};
struct RegSecureFile {
    Kstring fPath;
    Kstring fKey;
    Kstring fFile;
};
class KLibrary : public QObject
{
    Q_OBJECT
public:
    explicit KLibrary(QObject *parent = nullptr);

signals:

};

#endif // KLIBRARY_H
