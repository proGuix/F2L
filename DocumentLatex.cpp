#include "DocumentLatex.h" 

DocumentLatex::DocumentLatex()
{
}

string DocumentLatex::BeginDoc() const
{
  return "\\begin{document} \n";
}

string DocumentLatex::EndDoc() const
{
  return "\\end{document}";
}

