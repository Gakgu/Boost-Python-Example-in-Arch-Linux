#include <boost/python.hpp>
#include <string>
using namespace boost::python;
using namespace std;

class World
{
  public:
    World(string msg) : m_msg(msg) {}
    World(double val1, double val2) : m_val1(val1), m_val2(val2) {}

    void set(string msg) { m_msg = msg; }
    string greet() { return m_msg; }
    double sum() { return m_val1 + m_val2; }

    string m_msg;
    double m_val1, m_val2;
};

BOOST_PYTHON_MODULE(hello)
{
  //
  // expose 0 constructor
  class_<World>("expose_0_constructor", no_init)
    .def("greet", &World::greet)
  ;

  // expose 1 constructor
  class_<World>("expose_1_constructor", init<string>())
    .def("greet", &World::greet)
  ;

  // expose 2 constructor
  class_<World>("expose_2_constructor", init<string>())
    .def(init<double, double>())
    .def("sum", &World::sum)
  ;
}
