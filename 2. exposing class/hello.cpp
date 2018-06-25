#include <boost/python.hpp>
#include <string>
using namespace boost::python;
using namespace std;

class World
{
  public:
    void set(std::string msg) { m_msg = msg; }
    std::string greet() { return m_msg; }

  protected:
    std::string m_msg;
};

BOOST_PYTHON_MODULE(hello)
{
  class_<World>("World")
    .def("greet", &World::greet)
    .def("set", &World::set)
    ;
}
