// osh_eval.h: translated from Python by mycpp

#ifndef RUNTIME_H
#define RUNTIME_H

#include "mylib.h"
namespace runtime {  // forward declare

}  // forward declare namespace runtime

namespace format {  // forward declare
  class ColorOutput;
  class TextOutput;
  class HtmlOutput;
  class AnsiOutput;
  class _PrettyPrinter;

}  // forward declare namespace format

namespace args {  // forward declare
  class _Attributes;
  class Reader;
  class _Action;
  class _ArgAction;
  class SetToInt;
  class SetToFloat;
  class SetToString;
  class SetAttachedBool;
  class SetToTrue;
  class SetOption;
  class SetNamedOption;
  class SetAction;
  class SetNamedAction;

}  // forward declare namespace args

namespace runtime {  // declare
extern int NO_SPID;
hnode_asdl::hnode__Record* NewRecord(Str* node_type);
hnode_asdl::hnode__Leaf* NewLeaf(Str* s, hnode_asdl::color_t e_color);
extern Str* TRUE_STR;
extern Str* FALSE_STR;

}  // declare namespace runtime

namespace format {  // declare
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
};

class TextOutput : public ColorOutput {
 public:
  TextOutput(mylib::Writer* f);
  virtual format::TextOutput* NewTempBuffer();
  virtual void PushColor(hnode_asdl::color_t e_color);
  virtual void PopColor();
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
};

class AnsiOutput : public ColorOutput {
 public:
  AnsiOutput(mylib::Writer* f);
  virtual format::AnsiOutput* NewTempBuffer();
  virtual void PushColor(hnode_asdl::color_t e_color);
  virtual void PopColor();
};
extern int INDENT;

class _PrettyPrinter {
 public:
  _PrettyPrinter(int max_col);
  bool _PrintWrappedArray(List<hnode_asdl::hnode_t*>* array, int prefix_len, format::ColorOutput* f, int indent);
  bool _PrintWholeArray(List<hnode_asdl::hnode_t*>* array, int prefix_len, format::ColorOutput* f, int indent);
  void _PrintRecord(hnode_asdl::hnode__Record* node, format::ColorOutput* f, int indent);
  void PrintNode(hnode_asdl::hnode_t* node, format::ColorOutput* f, int indent);

  int max_col;
};
bool _TrySingleLineObj(hnode_asdl::hnode__Record* node, format::ColorOutput* f, int max_chars);
bool _TrySingleLine(hnode_asdl::hnode_t* node, format::ColorOutput* f, int max_chars);
void PrintTree(hnode_asdl::hnode_t* node, format::ColorOutput* f);
inline Str* fmt0(Str* a0) {
  gBuf.reset();
  gBuf.write_const("<span class=\"", 13);
  gBuf.format_s(a0);
  gBuf.write_const("\">", 2);
  return gBuf.getvalue();
}

inline Str* fmt1(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.format_s(a1);
  gBuf.write_const(": [", 3);
  return gBuf.getvalue();
}

inline Str* fmt2(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const("]", 1);
  return gBuf.getvalue();
}

inline Str* fmt3(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.format_s(a1);
  gBuf.write_const(": ", 2);
  return gBuf.getvalue();
}

inline Str* fmt4(Str* a0) {
  gBuf.reset();
  gBuf.write_const(" ", 1);
  gBuf.format_s(a0);
  gBuf.write_const(":", 1);
  return gBuf.getvalue();
}


}  // declare namespace format

namespace args {  // declare
extern int String;
extern int Int;
extern int Float;
extern int Bool;

class _Attributes {
 public:
  _Attributes(Dict<Str*, runtime_asdl::value_t*>* defaults);
  void SetTrue(Str* name);
  void Set(Str* name, runtime_asdl::value_t* val);

  List<Str*>* actions;
  Dict<Str*, runtime_asdl::value_t*>* attrs;
  List<Tuple2<Str*, bool>*>* opt_changes;
  bool saw_double_dash;
  List<Tuple2<Str*, bool>*>* shopt_changes;
  bool show_options;
};

class Reader {
 public:
  Reader(List<Str*>* argv, List<int>* spids);
  void Next();
  Str* Peek();
  Tuple2<Str*, int> Peek2();
  Str* ReadRequired(Str* error_msg);
  Tuple2<Str*, int> ReadRequired2(Str* error_msg);
  List<Str*>* Rest();
  Tuple2<List<Str*>*, List<int>*> Rest2();
  bool AtEnd();
  int _FirstSpanId();
  int SpanId();

  List<Str*>* argv;
  int i;
  int n;
  List<int>* spids;
};

class _Action {
 public:
  virtual bool OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out);
};

class _ArgAction : public _Action {
 public:
  _ArgAction(Str* name, bool quit_parsing_flags, List<Str*>* valid);
  virtual runtime_asdl::value_t* _Value(Str* arg, int span_id);
  virtual bool OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out);

  Str* name;
  bool quit_parsing_flags;
  List<Str*>* valid;
};

class SetToInt : public _ArgAction {
 public:
  SetToInt(Str* name);
  virtual runtime_asdl::value_t* _Value(Str* arg, int span_id);
};

class SetToFloat : public _ArgAction {
 public:
  SetToFloat(Str* name);
  virtual runtime_asdl::value_t* _Value(Str* arg, int span_id);
};

class SetToString : public _ArgAction {
 public:
  SetToString(Str* name, bool quit_parsing_flags, List<Str*>* valid);
  virtual runtime_asdl::value_t* _Value(Str* arg, int span_id);
};

class SetAttachedBool : public _Action {
 public:
  SetAttachedBool(Str* name);
  virtual bool OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out);

  Str* name;
};

class SetToTrue : public _Action {
 public:
  SetToTrue(Str* name);
  virtual bool OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out);

  Str* name;
};

class SetOption : public _Action {
 public:
  SetOption(Str* name);
  virtual bool OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out);

  Str* name;
};

class SetNamedOption : public _Action {
 public:
  SetNamedOption(bool shopt);
  void Add(Str* name);
  virtual bool OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out);

  List<Str*>* names;
  bool shopt;
};

class SetAction : public _Action {
 public:
  SetAction(Str* name);
  virtual bool OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out);

  Str* name;
};

class SetNamedAction : public _Action {
 public:
  SetNamedAction();
  void Add(Str* name);
  virtual bool OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out);

  List<Str*>* names;
};
args::_Attributes* Parse(flag_spec::_FlagSpec* spec, args::Reader* arg_r);
args::_Attributes* ParseLikeEcho(flag_spec::_FlagSpec* spec, args::Reader* arg_r);
args::_Attributes* ParseMore(flag_spec::_FlagSpecAndMore* spec, args::Reader* arg_r);
inline Str* fmt50(Str* a0) {
  gBuf.reset();
  gBuf.write_const("got invalid argument to boolean flag: ", 38);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt51(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid action name ", 20);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}


}  // declare namespace args

#endif  // RUNTIME_H
