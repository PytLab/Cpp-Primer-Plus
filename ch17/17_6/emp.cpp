#include "emp.h"

/*******************
 * abstr_emp methods
 *******************/
abstr_emp::abstr_emp()
{
    fname = "none";
    lname = "none";
    job = "none";
}

abstr_emp::abstr_emp(const std::string & fn, const std::string & ln,
                     const std::string & j) : fname(fn), lname(ln), job(j)
{
}

abstr_emp::~abstr_emp() {}

void abstr_emp::ShowAll() const
{
    std::cout << "firstname: " << fname << std::endl;
    std::cout << "lastname: " << lname << std::endl;
    std::cout << "job: " << job << std::endl;
}

void abstr_emp::SetAll()
{
    std::cout << "Enter firstname: ";
    std::getline(std::cin, fname);
    std::cout << "Enter lastname: ";
    std::getline(std::cin, lname);
    std::cout << "Enter job: ";
    std::getline(std::cin, job);
}

std::ofstream & abstr_emp::WriteAll(std::ofstream & fout) const
{
    fout << fname << " " << lname << " " << job;
    return fout;
}

// friend functions
std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
    os << e.lname << " " << e.fname << ", " << e.job;
    return os;
}

/******************
 * employee methods
 ******************/
employee::employee() {}

employee::employee(const std::string & fn, const std::string & ln,
                   const std::string & j)
    : abstr_emp(fn, ln, j)
{
}

void employee::ShowAll() const
{
    abstr_emp::ShowAll();
}

void employee::SetAll()
{
    abstr_emp::SetAll();
}

std::ofstream & employee::WriteAll(std::ofstream & fout) const
{
    fout << Employee << " ";
    abstr_emp::WriteAll(fout);
    return fout;
}


/*****************
 * manager methods
 *****************/
manager::manager()
{
    inchargeof = 0;
}


manager::manager(const std::string & fn, const std::string & ln,
                 const std::string & j, int ico)
    : abstr_emp(fn, ln, j), inchargeof(ico)
{
}

manager::manager(const abstr_emp & e, int ico)
    : abstr_emp(e)
{
    inchargeof = ico;
}

manager::manager(const manager & m)
    : abstr_emp(m)
{
    inchargeof = m.inchargeof;
}

void manager::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "Inchargeof: " << inchargeof << std::endl;
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "Enter inchargeof: ";
    std::cin >> inchargeof;
    std::cin.get();
}

std::ofstream & manager::WriteAll(std::ofstream & fout) const
{
    fout << Manager << " ";
    abstr_emp::WriteAll(fout);
    fout << " " << inchargeof;
    return fout;
}

/**************
 * fink methods
 **************/
fink::fink()
{
    reportsto = "none";
}

fink::fink(const std::string & fn, const std::string ln,
           const std::string & j, const std::string rpo)
    : abstr_emp(fn, ln, j), reportsto(rpo)
{
}

fink::fink(const abstr_emp & e, const std::string & rpo)
    : abstr_emp(e), reportsto(rpo)
{
}

fink::fink(const fink & f)
    : abstr_emp(f)
{
    reportsto = f.reportsto;
}

void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "Reportsto: " << reportsto << std::endl;
}

void fink::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "Enter reportsto: ";
    std::getline(std::cin, reportsto);
}

std::ofstream & fink::WriteAll(std::ofstream & fout) const
{
    fout << Fink << " ";
    abstr_emp::WriteAll(fout);
    fout << " " << reportsto;
    return fout;
}

/******************
 * highfink methods
 ******************/
highfink::highfink() {}

highfink::highfink(const std::string & fn, const std::string & ln,
                   const std::string & j, const std::string & rpo,
                   int ico)
    : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{
}

highfink::highfink(const abstr_emp & e, const std::string rpo, int ico)
    : abstr_emp(e), manager(e, ico), fink(e, rpo)
{
}

highfink::highfink(const fink & f, int ico)
    : abstr_emp(f), fink(f), manager((const abstr_emp &)f, ico)  // ????
{
}

highfink::highfink(const manager & m, const std::string rpo)
    : abstr_emp(m), manager(m), fink((const abstr_emp &)m, rpo)
{
}

highfink::highfink(const highfink & h)
    : abstr_emp(h), manager(h), fink(h)
{
}

void highfink::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "Inchargeof: " << manager::InChargeOf() << std::endl;
    std::cout << "Reportsto: " << fink::ReportsTo() << std::endl;
}

void highfink::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "Enter reportsto: ";
    std::getline(std::cin, fink::ReportsTo());
    std::cout << "Enter Inchargeof: ";
    std::cin >> manager::InChargeOf();
    std::cin.get();
}

std::ofstream & highfink::WriteAll(std::ofstream & fout) const
{
    fout << HighFink << " ";
    abstr_emp::WriteAll(fout);
    fout << " " << manager::InChargeOf() << " " << fink::ReportsTo();
    return fout;
}

