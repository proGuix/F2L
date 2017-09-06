#ifndef DOCUMENT_LATEX_H
#define DOCUMENT_LATEX_H

#include <string>

using namespace std;

class DocumentLatex
{
 public:
  DocumentLatex();
  virtual string BeginDoc() const;
  virtual string EndDoc() const;
};

#endif
