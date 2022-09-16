using namespace std;

int string_to_number(const std::string& s) {
  int result;
  stringstream (s) >> result;
  cout<< result;
  return result;
}
