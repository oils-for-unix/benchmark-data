// prebuilt/asdl/runtime.mycpp.h: GENERATED by mycpp

#ifndef ASDL_RUNTIME_MYCPP_H
#define ASDL_RUNTIME_MYCPP_H

#include "_gen/asdl/hnode.asdl.h"
#include "cpp/qsn.h"
#include "mycpp/runtime.h"

namespace runtime {  // forward declare


}  // forward declare namespace runtime

namespace format {  // forward declare

  class ColorOutput;
  class TextOutput;
  class HtmlOutput;
  class AnsiOutput;
  class _PrettyPrinter;

}  // forward declare namespace format

namespace runtime {  // declare

using hnode_asdl::hnode;
extern int NO_SPID;
hnode::Record* NewRecord(Str* node_type);
hnode::Leaf* NewLeaf(Str* s, hnode_asdl::color_t e_color);
extern Str* TRUE_STR;
extern Str* FALSE_STR;


}  // declare namespace runtime

namespace format {  // declare

using hnode_asdl::hnode;
format::ColorOutput* DetectConsoleOutput(mylib::Writer* f);
class ColorOutput {
 public:
  ColorOutput(mylib::Writer* f);
  virtual format::ColorOutput* NewTempBuffer();
  virtual void FileHeader();
  virtual void FileFooter();
  virtual void PushColor(hnode_asdl::color_t e_color);
  virtual void PopColor();
  virtual void write(Str* s);
  void WriteRaw(Tuple2<Str*, int>* raw);
  int NumChars();
  Tuple2<Str*, int> GetRaw();
  mylib::Writer* f;
  int num_chars;
  
  static constexpr uint32_t field_mask() {
    return maskbit(offsetof(ColorOutput, f));
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(ColorOutput));
  }

  DISALLOW_COPY_AND_ASSIGN(ColorOutput)
};

class TextOutput : public ColorOutput {
 public:
  TextOutput(mylib::Writer* f);
  virtual format::TextOutput* NewTempBuffer();
  virtual void PushColor(hnode_asdl::color_t e_color);
  virtual void PopColor();
  
  static constexpr uint32_t field_mask() {
    return ColorOutput::field_mask();
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(TextOutput));
  }

  DISALLOW_COPY_AND_ASSIGN(TextOutput)
};

class HtmlOutput : public ColorOutput {
 public:
  HtmlOutput(mylib::Writer* f);
  virtual format::HtmlOutput* NewTempBuffer();
  virtual void FileHeader();
  virtual void FileFooter();
  virtual void PushColor(hnode_asdl::color_t e_color);
  virtual void PopColor();
  virtual void write(Str* s);
  
  static constexpr uint32_t field_mask() {
    return ColorOutput::field_mask();
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(HtmlOutput));
  }

  DISALLOW_COPY_AND_ASSIGN(HtmlOutput)
};

class AnsiOutput : public ColorOutput {
 public:
  AnsiOutput(mylib::Writer* f);
  virtual format::AnsiOutput* NewTempBuffer();
  virtual void PushColor(hnode_asdl::color_t e_color);
  virtual void PopColor();
  
  static constexpr uint32_t field_mask() {
    return ColorOutput::field_mask();
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(AnsiOutput));
  }

  DISALLOW_COPY_AND_ASSIGN(AnsiOutput)
};

extern int INDENT;
class _PrettyPrinter {
 public:
  _PrettyPrinter(int max_col);
  bool _PrintWrappedArray(List<hnode_asdl::hnode_t*>* array, int prefix_len, format::ColorOutput* f, int indent);
  bool _PrintWholeArray(List<hnode_asdl::hnode_t*>* array, int prefix_len, format::ColorOutput* f, int indent);
  void _PrintRecord(hnode::Record* node, format::ColorOutput* f, int indent);
  void PrintNode(hnode_asdl::hnode_t* node, format::ColorOutput* f, int indent);
  int max_col;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassScanned(0, sizeof(_PrettyPrinter));
  }

  DISALLOW_COPY_AND_ASSIGN(_PrettyPrinter)
};

bool _TrySingleLineObj(hnode::Record* node, format::ColorOutput* f, int max_chars);
bool _TrySingleLine(hnode_asdl::hnode_t* node, format::ColorOutput* f, int max_chars);
void PrintTree(hnode_asdl::hnode_t* node, format::ColorOutput* f);


}  // declare namespace format

#endif  // ASDL_RUNTIME_MYCPP_H
