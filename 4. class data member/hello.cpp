#include <boost/python.hpp>
#include <string>
using namespace boost::python;
using namespace std;

class Var
{
  public:
    Var(string name) : m_name(name), m_value(0.0f) {}
    string const m_name;
    float m_value;
};

BOOST_PYTHON_MODULE(hello)
{
  class_<Var>("Var", init<string>())
    .def_readonly("name", &Var::m_name)
    .def_readwrite("value", &Var::m_value)
    ;
}
