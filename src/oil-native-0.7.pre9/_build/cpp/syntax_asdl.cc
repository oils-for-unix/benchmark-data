#include "id_kind_asdl.h"  // hack
using id_kind_asdl::Id_t;  // hack

#include <assert.h>

#include "asdl_runtime.h"  // generated code uses wrappers here

// Generated code uses these types
using hnode_asdl::hnode__Record;
using hnode_asdl::hnode__Array;
using hnode_asdl::hnode__External;
using hnode_asdl::hnode__Leaf;
using hnode_asdl::field;
using hnode_asdl::color_e;

#include "syntax_asdl.h"

namespace syntax_asdl {

const char* parse_result_str(int tag) {
  switch (tag) {
  case parse_result_e::EmptyLine:
    return "parse_result.EmptyLine";
  case parse_result_e::Eof:
    return "parse_result.Eof";
  case parse_result_e::Node:
    return "parse_result.Node";
  default:
    assert(0);
  }
}

hnode_t* parse_result__EmptyLine::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("parse_result.EmptyLine"));
  return out_node;
}

hnode_t* parse_result__EmptyLine::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("parse_result.EmptyLine"));
  return out_node;
}

hnode_t* parse_result__EmptyLine::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* parse_result__Eof::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("parse_result.Eof"));
  return out_node;
}

hnode_t* parse_result__Eof::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("parse_result.Eof"));
  return out_node;
}

hnode_t* parse_result__Eof::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* parse_result__Node::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("parse_result.Node"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->cmd->PrettyTree();
    L->append(new field(new Str("cmd"), x0));

  return out_node;
}

hnode_t* parse_result__Node::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("parse_result.Node"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->cmd->AbbreviatedTree();
    L->append(new field(new Str("cmd"), x0));

  return out_node;
}

hnode_t* parse_result__Node::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* parse_result_t::PrettyTree() {
  switch (this->tag_()) {
  case parse_result_e::EmptyLine: {
    parse_result__EmptyLine* obj = static_cast<parse_result__EmptyLine*>(this);
    return obj->PrettyTree();
  }
  case parse_result_e::Eof: {
    parse_result__Eof* obj = static_cast<parse_result__Eof*>(this);
    return obj->PrettyTree();
  }
  case parse_result_e::Node: {
    parse_result__Node* obj = static_cast<parse_result__Node*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* parse_result_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case parse_result_e::EmptyLine: {
    parse_result__EmptyLine* obj = static_cast<parse_result__EmptyLine*>(this);
    return obj->_AbbreviatedTree();
  }
  case parse_result_e::Eof: {
    parse_result__Eof* obj = static_cast<parse_result__Eof*>(this);
    return obj->_AbbreviatedTree();
  }
  case parse_result_e::Node: {
    parse_result__Node* obj = static_cast<parse_result__Node*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* parse_result_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case parse_result_e::EmptyLine: {
    parse_result__EmptyLine* obj = static_cast<parse_result__EmptyLine*>(this);
    return obj->AbbreviatedTree();
  }
  case parse_result_e::Eof: {
    parse_result__Eof* obj = static_cast<parse_result__Eof*>(this);
    return obj->AbbreviatedTree();
  }
  case parse_result_e::Node: {
    parse_result__Node* obj = static_cast<parse_result__Node*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}
const char* source_str(int tag) {
  switch (tag) {
  case source_e::Interactive:
    return "source.Interactive";
  case source_e::Unused:
    return "source.Unused";
  case source_e::CFlag:
    return "source.CFlag";
  case source_e::Stdin:
    return "source.Stdin";
  case source_e::MainFile:
    return "source.MainFile";
  case source_e::SourcedFile:
    return "source.SourcedFile";
  case source_e::ArgvWord:
    return "source.ArgvWord";
  case source_e::ArgvCommand:
    return "source.ArgvCommand";
  case source_e::EvalArg:
    return "source.EvalArg";
  case source_e::Trap:
    return "source.Trap";
  case source_e::PromptCommand:
    return "source.PromptCommand";
  case source_e::Variable:
    return "source.Variable";
  case source_e::Alias:
    return "source.Alias";
  case source_e::Backticks:
    return "source.Backticks";
  case source_e::LValue:
    return "source.LValue";
  default:
    assert(0);
  }
}

hnode_t* source__Interactive::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.Interactive"));
  return out_node;
}

hnode_t* source__Interactive::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.Interactive"));
  return out_node;
}

hnode_t* source__Interactive::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* source__Unused::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.Unused"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->comment, color_e::StringConst);
    L->append(new field(new Str("comment"), x0));

  return out_node;
}

hnode_t* source__Unused::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.Unused"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->comment, color_e::StringConst);
    L->append(new field(new Str("comment"), x0));

  return out_node;
}

hnode_t* source__Unused::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* source__CFlag::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.CFlag"));
  return out_node;
}

hnode_t* source__CFlag::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.CFlag"));
  return out_node;
}

hnode_t* source__CFlag::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* source__Stdin::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.Stdin"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->comment, color_e::StringConst);
    L->append(new field(new Str("comment"), x0));

  return out_node;
}

hnode_t* source__Stdin::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.Stdin"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->comment, color_e::StringConst);
    L->append(new field(new Str("comment"), x0));

  return out_node;
}

hnode_t* source__Stdin::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* source__MainFile::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.MainFile"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->path, color_e::StringConst);
    L->append(new field(new Str("path"), x0));

  return out_node;
}

hnode_t* source__MainFile::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.MainFile"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->path, color_e::StringConst);
    L->append(new field(new Str("path"), x0));

  return out_node;
}

hnode_t* source__MainFile::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* source__SourcedFile::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.SourcedFile"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->path, color_e::StringConst);
    L->append(new field(new Str("path"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->spid), color_e::OtherConst);
    L->append(new field(new Str("spid"), x1));

  return out_node;
}

hnode_t* source__SourcedFile::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.SourcedFile"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->path, color_e::StringConst);
    L->append(new field(new Str("path"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->spid), color_e::OtherConst);
    L->append(new field(new Str("spid"), x1));

  return out_node;
}

hnode_t* source__SourcedFile::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* source__ArgvWord::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.ArgvWord"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->word_spid), color_e::OtherConst);
    L->append(new field(new Str("word_spid"), x0));

  return out_node;
}

hnode_t* source__ArgvWord::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.ArgvWord"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->word_spid), color_e::OtherConst);
    L->append(new field(new Str("word_spid"), x0));

  return out_node;
}

hnode_t* source__ArgvWord::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* source__ArgvCommand::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.ArgvCommand"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->first_spid), color_e::OtherConst);
    L->append(new field(new Str("first_spid"), x0));

  return out_node;
}

hnode_t* source__ArgvCommand::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.ArgvCommand"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->first_spid), color_e::OtherConst);
    L->append(new field(new Str("first_spid"), x0));

  return out_node;
}

hnode_t* source__ArgvCommand::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* source__EvalArg::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.EvalArg"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->eval_spid), color_e::OtherConst);
    L->append(new field(new Str("eval_spid"), x0));

  return out_node;
}

hnode_t* source__EvalArg::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.EvalArg"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->eval_spid), color_e::OtherConst);
    L->append(new field(new Str("eval_spid"), x0));

  return out_node;
}

hnode_t* source__EvalArg::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* source__Trap::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.Trap"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->word_spid), color_e::OtherConst);
    L->append(new field(new Str("word_spid"), x0));

  return out_node;
}

hnode_t* source__Trap::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.Trap"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->word_spid), color_e::OtherConst);
    L->append(new field(new Str("word_spid"), x0));

  return out_node;
}

hnode_t* source__Trap::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* source__PromptCommand::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.PromptCommand"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->spid), color_e::OtherConst);
    L->append(new field(new Str("spid"), x0));

  return out_node;
}

hnode_t* source__PromptCommand::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.PromptCommand"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->spid), color_e::OtherConst);
    L->append(new field(new Str("spid"), x0));

  return out_node;
}

hnode_t* source__PromptCommand::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* source__Variable::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.Variable"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->spid), color_e::OtherConst);
    L->append(new field(new Str("spid"), x0));

  return out_node;
}

hnode_t* source__Variable::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.Variable"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->spid), color_e::OtherConst);
    L->append(new field(new Str("spid"), x0));

  return out_node;
}

hnode_t* source__Variable::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* source__Alias::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.Alias"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->argv0, color_e::StringConst);
    L->append(new field(new Str("argv0"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->argv0_spid), color_e::OtherConst);
    L->append(new field(new Str("argv0_spid"), x1));

  return out_node;
}

hnode_t* source__Alias::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.Alias"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->argv0, color_e::StringConst);
    L->append(new field(new Str("argv0"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->argv0_spid), color_e::OtherConst);
    L->append(new field(new Str("argv0_spid"), x1));

  return out_node;
}

hnode_t* source__Alias::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* source__Backticks::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.Backticks"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->left_spid), color_e::OtherConst);
    L->append(new field(new Str("left_spid"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->right_spid), color_e::OtherConst);
    L->append(new field(new Str("right_spid"), x1));

  return out_node;
}

hnode_t* source__Backticks::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.Backticks"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->left_spid), color_e::OtherConst);
    L->append(new field(new Str("left_spid"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->right_spid), color_e::OtherConst);
    L->append(new field(new Str("right_spid"), x1));

  return out_node;
}

hnode_t* source__Backticks::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* source__LValue::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.LValue"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->left_spid), color_e::OtherConst);
    L->append(new field(new Str("left_spid"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->right_spid), color_e::OtherConst);
    L->append(new field(new Str("right_spid"), x1));

  return out_node;
}

hnode_t* source__LValue::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("source.LValue"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->left_spid), color_e::OtherConst);
    L->append(new field(new Str("left_spid"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->right_spid), color_e::OtherConst);
    L->append(new field(new Str("right_spid"), x1));

  return out_node;
}

hnode_t* source__LValue::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* source_t::PrettyTree() {
  switch (this->tag_()) {
  case source_e::Interactive: {
    source__Interactive* obj = static_cast<source__Interactive*>(this);
    return obj->PrettyTree();
  }
  case source_e::Unused: {
    source__Unused* obj = static_cast<source__Unused*>(this);
    return obj->PrettyTree();
  }
  case source_e::CFlag: {
    source__CFlag* obj = static_cast<source__CFlag*>(this);
    return obj->PrettyTree();
  }
  case source_e::Stdin: {
    source__Stdin* obj = static_cast<source__Stdin*>(this);
    return obj->PrettyTree();
  }
  case source_e::MainFile: {
    source__MainFile* obj = static_cast<source__MainFile*>(this);
    return obj->PrettyTree();
  }
  case source_e::SourcedFile: {
    source__SourcedFile* obj = static_cast<source__SourcedFile*>(this);
    return obj->PrettyTree();
  }
  case source_e::ArgvWord: {
    source__ArgvWord* obj = static_cast<source__ArgvWord*>(this);
    return obj->PrettyTree();
  }
  case source_e::ArgvCommand: {
    source__ArgvCommand* obj = static_cast<source__ArgvCommand*>(this);
    return obj->PrettyTree();
  }
  case source_e::EvalArg: {
    source__EvalArg* obj = static_cast<source__EvalArg*>(this);
    return obj->PrettyTree();
  }
  case source_e::Trap: {
    source__Trap* obj = static_cast<source__Trap*>(this);
    return obj->PrettyTree();
  }
  case source_e::PromptCommand: {
    source__PromptCommand* obj = static_cast<source__PromptCommand*>(this);
    return obj->PrettyTree();
  }
  case source_e::Variable: {
    source__Variable* obj = static_cast<source__Variable*>(this);
    return obj->PrettyTree();
  }
  case source_e::Alias: {
    source__Alias* obj = static_cast<source__Alias*>(this);
    return obj->PrettyTree();
  }
  case source_e::Backticks: {
    source__Backticks* obj = static_cast<source__Backticks*>(this);
    return obj->PrettyTree();
  }
  case source_e::LValue: {
    source__LValue* obj = static_cast<source__LValue*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* source_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case source_e::Interactive: {
    source__Interactive* obj = static_cast<source__Interactive*>(this);
    return obj->_AbbreviatedTree();
  }
  case source_e::Unused: {
    source__Unused* obj = static_cast<source__Unused*>(this);
    return obj->_AbbreviatedTree();
  }
  case source_e::CFlag: {
    source__CFlag* obj = static_cast<source__CFlag*>(this);
    return obj->_AbbreviatedTree();
  }
  case source_e::Stdin: {
    source__Stdin* obj = static_cast<source__Stdin*>(this);
    return obj->_AbbreviatedTree();
  }
  case source_e::MainFile: {
    source__MainFile* obj = static_cast<source__MainFile*>(this);
    return obj->_AbbreviatedTree();
  }
  case source_e::SourcedFile: {
    source__SourcedFile* obj = static_cast<source__SourcedFile*>(this);
    return obj->_AbbreviatedTree();
  }
  case source_e::ArgvWord: {
    source__ArgvWord* obj = static_cast<source__ArgvWord*>(this);
    return obj->_AbbreviatedTree();
  }
  case source_e::ArgvCommand: {
    source__ArgvCommand* obj = static_cast<source__ArgvCommand*>(this);
    return obj->_AbbreviatedTree();
  }
  case source_e::EvalArg: {
    source__EvalArg* obj = static_cast<source__EvalArg*>(this);
    return obj->_AbbreviatedTree();
  }
  case source_e::Trap: {
    source__Trap* obj = static_cast<source__Trap*>(this);
    return obj->_AbbreviatedTree();
  }
  case source_e::PromptCommand: {
    source__PromptCommand* obj = static_cast<source__PromptCommand*>(this);
    return obj->_AbbreviatedTree();
  }
  case source_e::Variable: {
    source__Variable* obj = static_cast<source__Variable*>(this);
    return obj->_AbbreviatedTree();
  }
  case source_e::Alias: {
    source__Alias* obj = static_cast<source__Alias*>(this);
    return obj->_AbbreviatedTree();
  }
  case source_e::Backticks: {
    source__Backticks* obj = static_cast<source__Backticks*>(this);
    return obj->_AbbreviatedTree();
  }
  case source_e::LValue: {
    source__LValue* obj = static_cast<source__LValue*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* source_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case source_e::Interactive: {
    source__Interactive* obj = static_cast<source__Interactive*>(this);
    return obj->AbbreviatedTree();
  }
  case source_e::Unused: {
    source__Unused* obj = static_cast<source__Unused*>(this);
    return obj->AbbreviatedTree();
  }
  case source_e::CFlag: {
    source__CFlag* obj = static_cast<source__CFlag*>(this);
    return obj->AbbreviatedTree();
  }
  case source_e::Stdin: {
    source__Stdin* obj = static_cast<source__Stdin*>(this);
    return obj->AbbreviatedTree();
  }
  case source_e::MainFile: {
    source__MainFile* obj = static_cast<source__MainFile*>(this);
    return obj->AbbreviatedTree();
  }
  case source_e::SourcedFile: {
    source__SourcedFile* obj = static_cast<source__SourcedFile*>(this);
    return obj->AbbreviatedTree();
  }
  case source_e::ArgvWord: {
    source__ArgvWord* obj = static_cast<source__ArgvWord*>(this);
    return obj->AbbreviatedTree();
  }
  case source_e::ArgvCommand: {
    source__ArgvCommand* obj = static_cast<source__ArgvCommand*>(this);
    return obj->AbbreviatedTree();
  }
  case source_e::EvalArg: {
    source__EvalArg* obj = static_cast<source__EvalArg*>(this);
    return obj->AbbreviatedTree();
  }
  case source_e::Trap: {
    source__Trap* obj = static_cast<source__Trap*>(this);
    return obj->AbbreviatedTree();
  }
  case source_e::PromptCommand: {
    source__PromptCommand* obj = static_cast<source__PromptCommand*>(this);
    return obj->AbbreviatedTree();
  }
  case source_e::Variable: {
    source__Variable* obj = static_cast<source__Variable*>(this);
    return obj->AbbreviatedTree();
  }
  case source_e::Alias: {
    source__Alias* obj = static_cast<source__Alias*>(this);
    return obj->AbbreviatedTree();
  }
  case source_e::Backticks: {
    source__Backticks* obj = static_cast<source__Backticks*>(this);
    return obj->AbbreviatedTree();
  }
  case source_e::LValue: {
    source__LValue* obj = static_cast<source__LValue*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* line_span::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("line_span"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->line_id), color_e::OtherConst);
    L->append(new field(new Str("line_id"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->col), color_e::OtherConst);
    L->append(new field(new Str("col"), x1));

    hnode_t* x2 = new hnode__Leaf(str(this->length), color_e::OtherConst);
    L->append(new field(new Str("length"), x2));

  return out_node;
}

hnode_t* line_span::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("line_span"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->line_id), color_e::OtherConst);
    L->append(new field(new Str("line_id"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->col), color_e::OtherConst);
    L->append(new field(new Str("col"), x1));

    hnode_t* x2 = new hnode__Leaf(str(this->length), color_e::OtherConst);
    L->append(new field(new Str("length"), x2));

  return out_node;
}

hnode_t* line_span::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* Token::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("Token"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->id)), color_e::UserType);
    L->append(new field(new Str("id"), x0));

    hnode_t* x1 = runtime::NewLeaf(this->val, color_e::StringConst);
    L->append(new field(new Str("val"), x1));

    hnode_t* x2 = new hnode__Leaf(str(this->span_id), color_e::OtherConst);
    L->append(new field(new Str("span_id"), x2));

  return out_node;
}

hnode_t* Token::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("Token"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->id)), color_e::UserType);
    L->append(new field(new Str("id"), x0));

    hnode_t* x1 = runtime::NewLeaf(this->val, color_e::StringConst);
    L->append(new field(new Str("val"), x1));

    hnode_t* x2 = new hnode__Leaf(str(this->span_id), color_e::OtherConst);
    L->append(new field(new Str("span_id"), x2));

  return out_node;
}

hnode_t* Token::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* speck::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("speck"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->id)), color_e::UserType);
    L->append(new field(new Str("id"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->span_id), color_e::OtherConst);
    L->append(new field(new Str("span_id"), x1));

  return out_node;
}

hnode_t* speck::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("speck"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->id)), color_e::UserType);
    L->append(new field(new Str("id"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->span_id), color_e::OtherConst);
    L->append(new field(new Str("span_id"), x1));

  return out_node;
}

hnode_t* speck::AbbreviatedTree() {
  return _AbbreviatedTree();
}
const char* bracket_op_str(int tag) {
  switch (tag) {
  case bracket_op_e::WholeArray:
    return "bracket_op.WholeArray";
  case bracket_op_e::ArrayIndex:
    return "bracket_op.ArrayIndex";
  default:
    assert(0);
  }
}

hnode_t* bracket_op__WholeArray::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("bracket_op.WholeArray"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

  return out_node;
}

hnode_t* bracket_op__WholeArray::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("bracket_op.WholeArray"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

  return out_node;
}

hnode_t* bracket_op__WholeArray::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* bracket_op__ArrayIndex::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("bracket_op.ArrayIndex"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->expr->PrettyTree();
    L->append(new field(new Str("expr"), x0));

  return out_node;
}

hnode_t* bracket_op__ArrayIndex::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("bracket_op.ArrayIndex"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->expr->AbbreviatedTree();
    L->append(new field(new Str("expr"), x0));

  return out_node;
}

hnode_t* bracket_op__ArrayIndex::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* bracket_op_t::PrettyTree() {
  switch (this->tag_()) {
  case bracket_op_e::WholeArray: {
    bracket_op__WholeArray* obj = static_cast<bracket_op__WholeArray*>(this);
    return obj->PrettyTree();
  }
  case bracket_op_e::ArrayIndex: {
    bracket_op__ArrayIndex* obj = static_cast<bracket_op__ArrayIndex*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* bracket_op_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case bracket_op_e::WholeArray: {
    bracket_op__WholeArray* obj = static_cast<bracket_op__WholeArray*>(this);
    return obj->_AbbreviatedTree();
  }
  case bracket_op_e::ArrayIndex: {
    bracket_op__ArrayIndex* obj = static_cast<bracket_op__ArrayIndex*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* bracket_op_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case bracket_op_e::WholeArray: {
    bracket_op__WholeArray* obj = static_cast<bracket_op__WholeArray*>(this);
    return obj->AbbreviatedTree();
  }
  case bracket_op_e::ArrayIndex: {
    bracket_op__ArrayIndex* obj = static_cast<bracket_op__ArrayIndex*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}
const char* suffix_op_str(int tag) {
  switch (tag) {
  case suffix_op_e::Nullary:
    return "suffix_op.Nullary";
  case suffix_op_e::Unary:
    return "suffix_op.Unary";
  case suffix_op_e::PatSub:
    return "suffix_op.PatSub";
  case suffix_op_e::Slice:
    return "suffix_op.Slice";
  default:
    assert(0);
  }
}

hnode_t* suffix_op__Nullary::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("suffix_op.Nullary"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x1));
    }

  return out_node;
}

hnode_t* suffix_op__Nullary::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("suffix_op.Nullary"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

  return out_node;
}

hnode_t* suffix_op__Nullary::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* suffix_op__Unary::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("suffix_op.Unary"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

    hnode_t* x1 = this->arg_word->PrettyTree();
    L->append(new field(new Str("arg_word"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* suffix_op__Unary::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("suffix_op.Unary"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

    hnode_t* x1 = this->arg_word->AbbreviatedTree();
    L->append(new field(new Str("arg_word"), x1));

  return out_node;
}

hnode_t* suffix_op__Unary::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* suffix_op__PatSub::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("suffix_op.PatSub"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->pat->PrettyTree();
    L->append(new field(new Str("pat"), x0));

    if (this->replace) {  // MaybeType
      hnode_t* x1 = this->replace->PrettyTree();
      L->append(new field(new Str("replace"), x1));
    }

    hnode_t* x2 = new hnode__Leaf(new Str(Id_str(this->replace_mode)),
                                  color_e::UserType);
    L->append(new field(new Str("replace_mode"), x2));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i3 = it.Value();
        x3->children->append(new hnode__Leaf(str(i3), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x3));
    }

  return out_node;
}

hnode_t* suffix_op__PatSub::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("suffix_op.PatSub"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->pat->AbbreviatedTree();
    L->append(new field(new Str("pat"), x0));

    if (this->replace) {  // MaybeType
      hnode_t* x1 = this->replace->AbbreviatedTree();
      L->append(new field(new Str("replace"), x1));
    }

    hnode_t* x2 = new hnode__Leaf(new Str(Id_str(this->replace_mode)),
                                  color_e::UserType);
    L->append(new field(new Str("replace_mode"), x2));

  return out_node;
}

hnode_t* suffix_op__PatSub::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* suffix_op__Slice::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("suffix_op.Slice"));
  List<field*>* L = out_node->fields;
    if (this->begin) {  // MaybeType
      hnode_t* x0 = this->begin->PrettyTree();
      L->append(new field(new Str("begin"), x0));
    }

    if (this->length) {  // MaybeType
      hnode_t* x1 = this->length->PrettyTree();
      L->append(new field(new Str("length"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* suffix_op__Slice::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("suffix_op.Slice"));
  List<field*>* L = out_node->fields;
    if (this->begin) {  // MaybeType
      hnode_t* x0 = this->begin->AbbreviatedTree();
      L->append(new field(new Str("begin"), x0));
    }

    if (this->length) {  // MaybeType
      hnode_t* x1 = this->length->AbbreviatedTree();
      L->append(new field(new Str("length"), x1));
    }

  return out_node;
}

hnode_t* suffix_op__Slice::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* suffix_op_t::PrettyTree() {
  switch (this->tag_()) {
  case suffix_op_e::Nullary: {
    suffix_op__Nullary* obj = static_cast<suffix_op__Nullary*>(this);
    return obj->PrettyTree();
  }
  case suffix_op_e::Unary: {
    suffix_op__Unary* obj = static_cast<suffix_op__Unary*>(this);
    return obj->PrettyTree();
  }
  case suffix_op_e::PatSub: {
    suffix_op__PatSub* obj = static_cast<suffix_op__PatSub*>(this);
    return obj->PrettyTree();
  }
  case suffix_op_e::Slice: {
    suffix_op__Slice* obj = static_cast<suffix_op__Slice*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* suffix_op_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case suffix_op_e::Nullary: {
    suffix_op__Nullary* obj = static_cast<suffix_op__Nullary*>(this);
    return obj->_AbbreviatedTree();
  }
  case suffix_op_e::Unary: {
    suffix_op__Unary* obj = static_cast<suffix_op__Unary*>(this);
    return obj->_AbbreviatedTree();
  }
  case suffix_op_e::PatSub: {
    suffix_op__PatSub* obj = static_cast<suffix_op__PatSub*>(this);
    return obj->_AbbreviatedTree();
  }
  case suffix_op_e::Slice: {
    suffix_op__Slice* obj = static_cast<suffix_op__Slice*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* suffix_op_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case suffix_op_e::Nullary: {
    suffix_op__Nullary* obj = static_cast<suffix_op__Nullary*>(this);
    return obj->AbbreviatedTree();
  }
  case suffix_op_e::Unary: {
    suffix_op__Unary* obj = static_cast<suffix_op__Unary*>(this);
    return obj->AbbreviatedTree();
  }
  case suffix_op_e::PatSub: {
    suffix_op__PatSub* obj = static_cast<suffix_op__PatSub*>(this);
    return obj->AbbreviatedTree();
  }
  case suffix_op_e::Slice: {
    suffix_op__Slice* obj = static_cast<suffix_op__Slice*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* double_quoted::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("double_quoted"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->PrettyTree();
    L->append(new field(new Str("left"), x0));

    if (this->parts && len(this->parts)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<word_part_t*>it(this->parts); !it.Done(); it.Next()) {
        word_part_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("parts"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* double_quoted::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("double_quoted"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->AbbreviatedTree();
    L->append(new field(new Str("left"), x0));

    if (this->parts && len(this->parts)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<word_part_t*>it(this->parts); !it.Done(); it.Next()) {
        word_part_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("parts"), x1));
    }

  return out_node;
}

hnode_t* double_quoted::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* single_quoted::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("single_quoted"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->PrettyTree();
    L->append(new field(new Str("left"), x0));

    if (this->tokens && len(this->tokens)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Token*>it(this->tokens); !it.Done(); it.Next()) {
        Token* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("tokens"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* single_quoted::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("single_quoted"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->AbbreviatedTree();
    L->append(new field(new Str("left"), x0));

    if (this->tokens && len(this->tokens)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Token*>it(this->tokens); !it.Done(); it.Next()) {
        Token* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("tokens"), x1));
    }

  return out_node;
}

hnode_t* single_quoted::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* simple_var_sub::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("simple_var_sub"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->token->PrettyTree();
    L->append(new field(new Str("token"), x0));

  return out_node;
}

hnode_t* simple_var_sub::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("simple_var_sub"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->token->AbbreviatedTree();
    L->append(new field(new Str("token"), x0));

  return out_node;
}

hnode_t* simple_var_sub::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* braced_var_sub::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("braced_var_sub"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->token->PrettyTree();
    L->append(new field(new Str("token"), x0));

    if (this->prefix_op) {  // MaybeType
      hnode_t* x1 = this->prefix_op->PrettyTree();
      L->append(new field(new Str("prefix_op"), x1));
    }

    if (this->bracket_op) {  // MaybeType
      hnode_t* x2 = this->bracket_op->PrettyTree();
      L->append(new field(new Str("bracket_op"), x2));
    }

    if (this->suffix_op) {  // MaybeType
      hnode_t* x3 = this->suffix_op->PrettyTree();
      L->append(new field(new Str("suffix_op"), x3));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x4 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i4 = it.Value();
        x4->children->append(new hnode__Leaf(str(i4), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x4));
    }

  return out_node;
}

hnode_t* braced_var_sub::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("braced_var_sub"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->token->AbbreviatedTree();
    L->append(new field(new Str("token"), x0));

    if (this->prefix_op) {  // MaybeType
      hnode_t* x1 = this->prefix_op->AbbreviatedTree();
      L->append(new field(new Str("prefix_op"), x1));
    }

    if (this->bracket_op) {  // MaybeType
      hnode_t* x2 = this->bracket_op->AbbreviatedTree();
      L->append(new field(new Str("bracket_op"), x2));
    }

    if (this->suffix_op) {  // MaybeType
      hnode_t* x3 = this->suffix_op->AbbreviatedTree();
      L->append(new field(new Str("suffix_op"), x3));
    }

  return out_node;
}

hnode_t* braced_var_sub::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command_sub::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command_sub"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left_token->PrettyTree();
    L->append(new field(new Str("left_token"), x0));

    hnode_t* x1 = this->command_list->PrettyTree();
    L->append(new field(new Str("command_list"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* command_sub::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command_sub"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left_token->AbbreviatedTree();
    L->append(new field(new Str("left_token"), x0));

    hnode_t* x1 = this->command_list->AbbreviatedTree();
    L->append(new field(new Str("command_list"), x1));

  return out_node;
}

hnode_t* command_sub::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* sh_array_literal::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("sh_array_literal"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->PrettyTree();
    L->append(new field(new Str("left"), x0));

    if (this->words && len(this->words)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<word_t*>it(this->words); !it.Done(); it.Next()) {
        word_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("words"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* sh_array_literal::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("sh_array_literal"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->AbbreviatedTree();
    L->append(new field(new Str("left"), x0));

    if (this->words && len(this->words)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<word_t*>it(this->words); !it.Done(); it.Next()) {
        word_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("words"), x1));
    }

  return out_node;
}

hnode_t* sh_array_literal::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* arg_list::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("arg_list"));
  List<field*>* L = out_node->fields;
    if (this->positional && len(this->positional)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<expr_t*>it(this->positional); !it.Done(); it.Next()) {
        expr_t* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("positional"), x0));
    }

    if (this->named && len(this->named)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<named_arg*>it(this->named); !it.Done(); it.Next()) {
        named_arg* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("named"), x1));
    }

  return out_node;
}

hnode_t* arg_list::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("arg_list"));
  List<field*>* L = out_node->fields;
    if (this->positional && len(this->positional)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<expr_t*>it(this->positional); !it.Done(); it.Next()) {
        expr_t* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("positional"), x0));
    }

    if (this->named && len(this->named)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<named_arg*>it(this->named); !it.Done(); it.Next()) {
        named_arg* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("named"), x1));
    }

  return out_node;
}

hnode_t* arg_list::AbbreviatedTree() {
  return _AbbreviatedTree();
}
const char* word_part_str(int tag) {
  switch (tag) {
  case word_part_e::ShArrayLiteral:
    return "word_part.ShArrayLiteral";
  case word_part_e::AssocArrayLiteral:
    return "word_part.AssocArrayLiteral";
  case word_part_e::Literal:
    return "word_part.Literal";
  case word_part_e::EscapedLiteral:
    return "word_part.EscapedLiteral";
  case word_part_e::SingleQuoted:
    return "word_part.SingleQuoted";
  case word_part_e::DoubleQuoted:
    return "word_part.DoubleQuoted";
  case word_part_e::SimpleVarSub:
    return "word_part.SimpleVarSub";
  case word_part_e::BracedVarSub:
    return "word_part.BracedVarSub";
  case word_part_e::CommandSub:
    return "word_part.CommandSub";
  case word_part_e::TildeSub:
    return "word_part.TildeSub";
  case word_part_e::ArithSub:
    return "word_part.ArithSub";
  case word_part_e::BracedTuple:
    return "word_part.BracedTuple";
  case word_part_e::BracedRange:
    return "word_part.BracedRange";
  case word_part_e::ExtGlob:
    return "word_part.ExtGlob";
  case word_part_e::Splice:
    return "word_part.Splice";
  case word_part_e::FuncCall:
    return "word_part.FuncCall";
  case word_part_e::ExprSub:
    return "word_part.ExprSub";
  default:
    assert(0);
  }
}

hnode_t* word_part__AssocArrayLiteral::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("word_part.AssocArrayLiteral"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->PrettyTree();
    L->append(new field(new Str("left"), x0));

    if (this->pairs && len(this->pairs)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<compound_word*>it(this->pairs); !it.Done(); it.Next()) {
        compound_word* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("pairs"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* word_part__AssocArrayLiteral::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("word_part.AssocArrayLiteral"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->AbbreviatedTree();
    L->append(new field(new Str("left"), x0));

    if (this->pairs && len(this->pairs)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<compound_word*>it(this->pairs); !it.Done(); it.Next()) {
        compound_word* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("pairs"), x1));
    }

  return out_node;
}

hnode_t* word_part__AssocArrayLiteral::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* word_part__Literal::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word_part.Literal"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->token->PrettyTree();
    L->append(new field(new Str("token"), x0));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x1));
    }

  return out_node;
}

hnode_t* word_part__Literal::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word_part.Literal"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->token->AbbreviatedTree();
    L->append(new field(new Str("token"), x0));

  return out_node;
}

hnode_t* word_part__Literal::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* word_part__EscapedLiteral::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("word_part.EscapedLiteral"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->token->PrettyTree();
    L->append(new field(new Str("token"), x0));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x1));
    }

  return out_node;
}

hnode_t* word_part__EscapedLiteral::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("word_part.EscapedLiteral"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->token->AbbreviatedTree();
    L->append(new field(new Str("token"), x0));

  return out_node;
}

hnode_t* word_part__EscapedLiteral::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* word_part__TildeSub::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word_part.TildeSub"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->token->PrettyTree();
    L->append(new field(new Str("token"), x0));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x1));
    }

  return out_node;
}

hnode_t* word_part__TildeSub::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word_part.TildeSub"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->token->AbbreviatedTree();
    L->append(new field(new Str("token"), x0));

  return out_node;
}

hnode_t* word_part__TildeSub::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* word_part__ArithSub::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word_part.ArithSub"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->anode->PrettyTree();
    L->append(new field(new Str("anode"), x0));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x1));
    }

  return out_node;
}

hnode_t* word_part__ArithSub::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word_part.ArithSub"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->anode->AbbreviatedTree();
    L->append(new field(new Str("anode"), x0));

  return out_node;
}

hnode_t* word_part__ArithSub::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* word_part__BracedTuple::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("word_part.BracedTuple"));
  List<field*>* L = out_node->fields;
    if (this->words && len(this->words)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<compound_word*>it(this->words); !it.Done(); it.Next()) {
        compound_word* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("words"), x0));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x1));
    }

  return out_node;
}

hnode_t* word_part__BracedTuple::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("word_part.BracedTuple"));
  List<field*>* L = out_node->fields;
    if (this->words && len(this->words)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<compound_word*>it(this->words); !it.Done(); it.Next()) {
        compound_word* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("words"), x0));
    }

  return out_node;
}

hnode_t* word_part__BracedTuple::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* word_part__BracedRange::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("word_part.BracedRange"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->kind)),
                                  color_e::UserType);
    L->append(new field(new Str("kind"), x0));

    hnode_t* x1 = runtime::NewLeaf(this->start, color_e::StringConst);
    L->append(new field(new Str("start"), x1));

    hnode_t* x2 = runtime::NewLeaf(this->end, color_e::StringConst);
    L->append(new field(new Str("end"), x2));

    hnode_t* x3 = new hnode__Leaf(str(this->step), color_e::OtherConst);
    L->append(new field(new Str("step"), x3));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x4 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i4 = it.Value();
        x4->children->append(new hnode__Leaf(str(i4), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x4));
    }

  return out_node;
}

hnode_t* word_part__BracedRange::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("word_part.BracedRange"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->kind)),
                                  color_e::UserType);
    L->append(new field(new Str("kind"), x0));

    hnode_t* x1 = runtime::NewLeaf(this->start, color_e::StringConst);
    L->append(new field(new Str("start"), x1));

    hnode_t* x2 = runtime::NewLeaf(this->end, color_e::StringConst);
    L->append(new field(new Str("end"), x2));

    hnode_t* x3 = new hnode__Leaf(str(this->step), color_e::OtherConst);
    L->append(new field(new Str("step"), x3));

  return out_node;
}

hnode_t* word_part__BracedRange::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* word_part__ExtGlob::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word_part.ExtGlob"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->op->PrettyTree();
    L->append(new field(new Str("op"), x0));

    if (this->arms && len(this->arms)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<word_t*>it(this->arms); !it.Done(); it.Next()) {
        word_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("arms"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* word_part__ExtGlob::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word_part.ExtGlob"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->op->AbbreviatedTree();
    L->append(new field(new Str("op"), x0));

    if (this->arms && len(this->arms)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<word_t*>it(this->arms); !it.Done(); it.Next()) {
        word_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("arms"), x1));
    }

  return out_node;
}

hnode_t* word_part__ExtGlob::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* word_part__Splice::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word_part.Splice"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->PrettyTree();
    L->append(new field(new Str("name"), x0));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x1));
    }

  return out_node;
}

hnode_t* word_part__Splice::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word_part.Splice"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->AbbreviatedTree();
    L->append(new field(new Str("name"), x0));

  return out_node;
}

hnode_t* word_part__Splice::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* word_part__FuncCall::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word_part.FuncCall"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->PrettyTree();
    L->append(new field(new Str("name"), x0));

    hnode_t* x1 = this->args->PrettyTree();
    L->append(new field(new Str("args"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* word_part__FuncCall::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word_part.FuncCall"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->AbbreviatedTree();
    L->append(new field(new Str("name"), x0));

    hnode_t* x1 = this->args->AbbreviatedTree();
    L->append(new field(new Str("args"), x1));

  return out_node;
}

hnode_t* word_part__FuncCall::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* word_part__ExprSub::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word_part.ExprSub"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->PrettyTree();
    L->append(new field(new Str("left"), x0));

    hnode_t* x1 = this->child->PrettyTree();
    L->append(new field(new Str("child"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* word_part__ExprSub::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word_part.ExprSub"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->AbbreviatedTree();
    L->append(new field(new Str("left"), x0));

    hnode_t* x1 = this->child->AbbreviatedTree();
    L->append(new field(new Str("child"), x1));

  return out_node;
}

hnode_t* word_part__ExprSub::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* word_part_t::PrettyTree() {
  switch (this->tag_()) {
  case word_part_e::ShArrayLiteral: {
    sh_array_literal* obj = static_cast<sh_array_literal*>(this);
    return obj->PrettyTree();
  }
  case word_part_e::AssocArrayLiteral: {
    word_part__AssocArrayLiteral* obj =
static_cast<word_part__AssocArrayLiteral*>(this);
    return obj->PrettyTree();
  }
  case word_part_e::Literal: {
    word_part__Literal* obj = static_cast<word_part__Literal*>(this);
    return obj->PrettyTree();
  }
  case word_part_e::EscapedLiteral: {
    word_part__EscapedLiteral* obj =
static_cast<word_part__EscapedLiteral*>(this);
    return obj->PrettyTree();
  }
  case word_part_e::SingleQuoted: {
    single_quoted* obj = static_cast<single_quoted*>(this);
    return obj->PrettyTree();
  }
  case word_part_e::DoubleQuoted: {
    double_quoted* obj = static_cast<double_quoted*>(this);
    return obj->PrettyTree();
  }
  case word_part_e::SimpleVarSub: {
    simple_var_sub* obj = static_cast<simple_var_sub*>(this);
    return obj->PrettyTree();
  }
  case word_part_e::BracedVarSub: {
    braced_var_sub* obj = static_cast<braced_var_sub*>(this);
    return obj->PrettyTree();
  }
  case word_part_e::CommandSub: {
    command_sub* obj = static_cast<command_sub*>(this);
    return obj->PrettyTree();
  }
  case word_part_e::TildeSub: {
    word_part__TildeSub* obj = static_cast<word_part__TildeSub*>(this);
    return obj->PrettyTree();
  }
  case word_part_e::ArithSub: {
    word_part__ArithSub* obj = static_cast<word_part__ArithSub*>(this);
    return obj->PrettyTree();
  }
  case word_part_e::BracedTuple: {
    word_part__BracedTuple* obj = static_cast<word_part__BracedTuple*>(this);
    return obj->PrettyTree();
  }
  case word_part_e::BracedRange: {
    word_part__BracedRange* obj = static_cast<word_part__BracedRange*>(this);
    return obj->PrettyTree();
  }
  case word_part_e::ExtGlob: {
    word_part__ExtGlob* obj = static_cast<word_part__ExtGlob*>(this);
    return obj->PrettyTree();
  }
  case word_part_e::Splice: {
    word_part__Splice* obj = static_cast<word_part__Splice*>(this);
    return obj->PrettyTree();
  }
  case word_part_e::FuncCall: {
    word_part__FuncCall* obj = static_cast<word_part__FuncCall*>(this);
    return obj->PrettyTree();
  }
  case word_part_e::ExprSub: {
    word_part__ExprSub* obj = static_cast<word_part__ExprSub*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* word_part_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case word_part_e::ShArrayLiteral: {
    sh_array_literal* obj = static_cast<sh_array_literal*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_part_e::AssocArrayLiteral: {
    word_part__AssocArrayLiteral* obj =
static_cast<word_part__AssocArrayLiteral*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_part_e::Literal: {
    word_part__Literal* obj = static_cast<word_part__Literal*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_part_e::EscapedLiteral: {
    word_part__EscapedLiteral* obj =
static_cast<word_part__EscapedLiteral*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_part_e::SingleQuoted: {
    single_quoted* obj = static_cast<single_quoted*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_part_e::DoubleQuoted: {
    double_quoted* obj = static_cast<double_quoted*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_part_e::SimpleVarSub: {
    simple_var_sub* obj = static_cast<simple_var_sub*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_part_e::BracedVarSub: {
    braced_var_sub* obj = static_cast<braced_var_sub*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_part_e::CommandSub: {
    command_sub* obj = static_cast<command_sub*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_part_e::TildeSub: {
    word_part__TildeSub* obj = static_cast<word_part__TildeSub*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_part_e::ArithSub: {
    word_part__ArithSub* obj = static_cast<word_part__ArithSub*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_part_e::BracedTuple: {
    word_part__BracedTuple* obj = static_cast<word_part__BracedTuple*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_part_e::BracedRange: {
    word_part__BracedRange* obj = static_cast<word_part__BracedRange*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_part_e::ExtGlob: {
    word_part__ExtGlob* obj = static_cast<word_part__ExtGlob*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_part_e::Splice: {
    word_part__Splice* obj = static_cast<word_part__Splice*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_part_e::FuncCall: {
    word_part__FuncCall* obj = static_cast<word_part__FuncCall*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_part_e::ExprSub: {
    word_part__ExprSub* obj = static_cast<word_part__ExprSub*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* word_part_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case word_part_e::ShArrayLiteral: {
    sh_array_literal* obj = static_cast<sh_array_literal*>(this);
    return obj->AbbreviatedTree();
  }
  case word_part_e::AssocArrayLiteral: {
    word_part__AssocArrayLiteral* obj =
static_cast<word_part__AssocArrayLiteral*>(this);
    return obj->AbbreviatedTree();
  }
  case word_part_e::Literal: {
    word_part__Literal* obj = static_cast<word_part__Literal*>(this);
    return obj->AbbreviatedTree();
  }
  case word_part_e::EscapedLiteral: {
    word_part__EscapedLiteral* obj =
static_cast<word_part__EscapedLiteral*>(this);
    return obj->AbbreviatedTree();
  }
  case word_part_e::SingleQuoted: {
    single_quoted* obj = static_cast<single_quoted*>(this);
    return obj->AbbreviatedTree();
  }
  case word_part_e::DoubleQuoted: {
    double_quoted* obj = static_cast<double_quoted*>(this);
    return obj->AbbreviatedTree();
  }
  case word_part_e::SimpleVarSub: {
    simple_var_sub* obj = static_cast<simple_var_sub*>(this);
    return obj->AbbreviatedTree();
  }
  case word_part_e::BracedVarSub: {
    braced_var_sub* obj = static_cast<braced_var_sub*>(this);
    return obj->AbbreviatedTree();
  }
  case word_part_e::CommandSub: {
    command_sub* obj = static_cast<command_sub*>(this);
    return obj->AbbreviatedTree();
  }
  case word_part_e::TildeSub: {
    word_part__TildeSub* obj = static_cast<word_part__TildeSub*>(this);
    return obj->AbbreviatedTree();
  }
  case word_part_e::ArithSub: {
    word_part__ArithSub* obj = static_cast<word_part__ArithSub*>(this);
    return obj->AbbreviatedTree();
  }
  case word_part_e::BracedTuple: {
    word_part__BracedTuple* obj = static_cast<word_part__BracedTuple*>(this);
    return obj->AbbreviatedTree();
  }
  case word_part_e::BracedRange: {
    word_part__BracedRange* obj = static_cast<word_part__BracedRange*>(this);
    return obj->AbbreviatedTree();
  }
  case word_part_e::ExtGlob: {
    word_part__ExtGlob* obj = static_cast<word_part__ExtGlob*>(this);
    return obj->AbbreviatedTree();
  }
  case word_part_e::Splice: {
    word_part__Splice* obj = static_cast<word_part__Splice*>(this);
    return obj->AbbreviatedTree();
  }
  case word_part_e::FuncCall: {
    word_part__FuncCall* obj = static_cast<word_part__FuncCall*>(this);
    return obj->AbbreviatedTree();
  }
  case word_part_e::ExprSub: {
    word_part__ExprSub* obj = static_cast<word_part__ExprSub*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* compound_word::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("compound_word"));
  List<field*>* L = out_node->fields;
    if (this->parts && len(this->parts)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<word_part_t*>it(this->parts); !it.Done(); it.Next()) {
        word_part_t* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("parts"), x0));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x1));
    }

  return out_node;
}

hnode_t* compound_word::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("compound_word"));
  List<field*>* L = out_node->fields;
    if (this->parts && len(this->parts)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<word_part_t*>it(this->parts); !it.Done(); it.Next()) {
        word_part_t* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("parts"), x0));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x1));
    }

  return out_node;
}

hnode_t* compound_word::AbbreviatedTree() {
  return _AbbreviatedTree();
}
const char* word_str(int tag) {
  switch (tag) {
  case word_e::Empty:
    return "word.Empty";
  case word_e::Token:
    return "word.Token";
  case word_e::Compound:
    return "word.Compound";
  case word_e::BracedTree:
    return "word.BracedTree";
  case word_e::String:
    return "word.String";
  default:
    assert(0);
  }
}

hnode_t* word__Empty::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word.Empty"));
  List<field*>* L = out_node->fields;
    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i0 = it.Value();
        x0->children->append(new hnode__Leaf(str(i0), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x0));
    }

  return out_node;
}

hnode_t* word__Empty::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word.Empty"));
  return out_node;
}

hnode_t* word__Empty::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* word__BracedTree::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word.BracedTree"));
  List<field*>* L = out_node->fields;
    if (this->parts && len(this->parts)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<word_part_t*>it(this->parts); !it.Done(); it.Next()) {
        word_part_t* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("parts"), x0));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x1));
    }

  return out_node;
}

hnode_t* word__BracedTree::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word.BracedTree"));
  List<field*>* L = out_node->fields;
    if (this->parts && len(this->parts)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<word_part_t*>it(this->parts); !it.Done(); it.Next()) {
        word_part_t* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("parts"), x0));
    }

  return out_node;
}

hnode_t* word__BracedTree::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* word__String::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word.String"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->id)), color_e::UserType);
    L->append(new field(new Str("id"), x0));

    hnode_t* x1 = runtime::NewLeaf(this->s, color_e::StringConst);
    L->append(new field(new Str("s"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* word__String::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("word.String"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->id)), color_e::UserType);
    L->append(new field(new Str("id"), x0));

    hnode_t* x1 = runtime::NewLeaf(this->s, color_e::StringConst);
    L->append(new field(new Str("s"), x1));

  return out_node;
}

hnode_t* word__String::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* word_t::PrettyTree() {
  switch (this->tag_()) {
  case word_e::Empty: {
    word__Empty* obj = static_cast<word__Empty*>(this);
    return obj->PrettyTree();
  }
  case word_e::Token: {
    Token* obj = static_cast<Token*>(this);
    return obj->PrettyTree();
  }
  case word_e::Compound: {
    compound_word* obj = static_cast<compound_word*>(this);
    return obj->PrettyTree();
  }
  case word_e::BracedTree: {
    word__BracedTree* obj = static_cast<word__BracedTree*>(this);
    return obj->PrettyTree();
  }
  case word_e::String: {
    word__String* obj = static_cast<word__String*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* word_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case word_e::Empty: {
    word__Empty* obj = static_cast<word__Empty*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_e::Token: {
    Token* obj = static_cast<Token*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_e::Compound: {
    compound_word* obj = static_cast<compound_word*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_e::BracedTree: {
    word__BracedTree* obj = static_cast<word__BracedTree*>(this);
    return obj->_AbbreviatedTree();
  }
  case word_e::String: {
    word__String* obj = static_cast<word__String*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* word_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case word_e::Empty: {
    word__Empty* obj = static_cast<word__Empty*>(this);
    return obj->AbbreviatedTree();
  }
  case word_e::Token: {
    Token* obj = static_cast<Token*>(this);
    return obj->AbbreviatedTree();
  }
  case word_e::Compound: {
    compound_word* obj = static_cast<compound_word*>(this);
    return obj->AbbreviatedTree();
  }
  case word_e::BracedTree: {
    word__BracedTree* obj = static_cast<word__BracedTree*>(this);
    return obj->AbbreviatedTree();
  }
  case word_e::String: {
    word__String* obj = static_cast<word__String*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}
const char* sh_lhs_expr_str(int tag) {
  switch (tag) {
  case sh_lhs_expr_e::Name:
    return "sh_lhs_expr.Name";
  case sh_lhs_expr_e::IndexedName:
    return "sh_lhs_expr.IndexedName";
  case sh_lhs_expr_e::UnparsedIndex:
    return "sh_lhs_expr.UnparsedIndex";
  default:
    assert(0);
  }
}

hnode_t* sh_lhs_expr__Name::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("sh_lhs_expr.Name"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x1));
    }

  return out_node;
}

hnode_t* sh_lhs_expr__Name::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("sh_lhs_expr.Name"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

  return out_node;
}

hnode_t* sh_lhs_expr__Name::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* sh_lhs_expr__IndexedName::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("sh_lhs_expr.IndexedName"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

    hnode_t* x1 = this->index->PrettyTree();
    L->append(new field(new Str("index"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* sh_lhs_expr__IndexedName::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("sh_lhs_expr.IndexedName"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

    hnode_t* x1 = this->index->AbbreviatedTree();
    L->append(new field(new Str("index"), x1));

  return out_node;
}

hnode_t* sh_lhs_expr__IndexedName::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* sh_lhs_expr__UnparsedIndex::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("sh_lhs_expr.UnparsedIndex"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

    hnode_t* x1 = runtime::NewLeaf(this->index, color_e::StringConst);
    L->append(new field(new Str("index"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* sh_lhs_expr__UnparsedIndex::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("sh_lhs_expr.UnparsedIndex"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

    hnode_t* x1 = runtime::NewLeaf(this->index, color_e::StringConst);
    L->append(new field(new Str("index"), x1));

  return out_node;
}

hnode_t* sh_lhs_expr__UnparsedIndex::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* sh_lhs_expr_t::PrettyTree() {
  switch (this->tag_()) {
  case sh_lhs_expr_e::Name: {
    sh_lhs_expr__Name* obj = static_cast<sh_lhs_expr__Name*>(this);
    return obj->PrettyTree();
  }
  case sh_lhs_expr_e::IndexedName: {
    sh_lhs_expr__IndexedName* obj =
static_cast<sh_lhs_expr__IndexedName*>(this);
    return obj->PrettyTree();
  }
  case sh_lhs_expr_e::UnparsedIndex: {
    sh_lhs_expr__UnparsedIndex* obj =
static_cast<sh_lhs_expr__UnparsedIndex*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* sh_lhs_expr_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case sh_lhs_expr_e::Name: {
    sh_lhs_expr__Name* obj = static_cast<sh_lhs_expr__Name*>(this);
    return obj->_AbbreviatedTree();
  }
  case sh_lhs_expr_e::IndexedName: {
    sh_lhs_expr__IndexedName* obj =
static_cast<sh_lhs_expr__IndexedName*>(this);
    return obj->_AbbreviatedTree();
  }
  case sh_lhs_expr_e::UnparsedIndex: {
    sh_lhs_expr__UnparsedIndex* obj =
static_cast<sh_lhs_expr__UnparsedIndex*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* sh_lhs_expr_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case sh_lhs_expr_e::Name: {
    sh_lhs_expr__Name* obj = static_cast<sh_lhs_expr__Name*>(this);
    return obj->AbbreviatedTree();
  }
  case sh_lhs_expr_e::IndexedName: {
    sh_lhs_expr__IndexedName* obj =
static_cast<sh_lhs_expr__IndexedName*>(this);
    return obj->AbbreviatedTree();
  }
  case sh_lhs_expr_e::UnparsedIndex: {
    sh_lhs_expr__UnparsedIndex* obj =
static_cast<sh_lhs_expr__UnparsedIndex*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}
const char* arith_expr_str(int tag) {
  switch (tag) {
  case arith_expr_e::VarRef:
    return "arith_expr.VarRef";
  case arith_expr_e::ArithWord:
    return "arith_expr.ArithWord";
  case arith_expr_e::UnaryAssign:
    return "arith_expr.UnaryAssign";
  case arith_expr_e::BinaryAssign:
    return "arith_expr.BinaryAssign";
  case arith_expr_e::Unary:
    return "arith_expr.Unary";
  case arith_expr_e::Binary:
    return "arith_expr.Binary";
  case arith_expr_e::TernaryOp:
    return "arith_expr.TernaryOp";
  default:
    assert(0);
  }
}

hnode_t* arith_expr__VarRef::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("arith_expr.VarRef"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->token->PrettyTree();
    L->append(new field(new Str("token"), x0));

  return out_node;
}

hnode_t* arith_expr__VarRef::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("arith_expr.VarRef"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->token->AbbreviatedTree();
    L->append(new field(new Str("token"), x0));

  return out_node;
}

hnode_t* arith_expr__VarRef::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* arith_expr__ArithWord::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("arith_expr.ArithWord"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->w->PrettyTree();
    L->append(new field(new Str("w"), x0));

  return out_node;
}

hnode_t* arith_expr__ArithWord::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("arith_expr.ArithWord"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->w->AbbreviatedTree();
    L->append(new field(new Str("w"), x0));

  return out_node;
}

hnode_t* arith_expr__ArithWord::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* arith_expr__UnaryAssign::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("arith_expr.UnaryAssign"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

    hnode_t* x1 = this->child->PrettyTree();
    L->append(new field(new Str("child"), x1));

  return out_node;
}

hnode_t* arith_expr__UnaryAssign::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("arith_expr.UnaryAssign"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

    hnode_t* x1 = this->child->AbbreviatedTree();
    L->append(new field(new Str("child"), x1));

  return out_node;
}

hnode_t* arith_expr__UnaryAssign::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* arith_expr__BinaryAssign::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("arith_expr.BinaryAssign"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

    hnode_t* x1 = this->left->PrettyTree();
    L->append(new field(new Str("left"), x1));

    hnode_t* x2 = this->right->PrettyTree();
    L->append(new field(new Str("right"), x2));

  return out_node;
}

hnode_t* arith_expr__BinaryAssign::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("arith_expr.BinaryAssign"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

    hnode_t* x1 = this->left->AbbreviatedTree();
    L->append(new field(new Str("left"), x1));

    hnode_t* x2 = this->right->AbbreviatedTree();
    L->append(new field(new Str("right"), x2));

  return out_node;
}

hnode_t* arith_expr__BinaryAssign::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* arith_expr__Unary::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("arith_expr.Unary"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

    hnode_t* x1 = this->child->PrettyTree();
    L->append(new field(new Str("child"), x1));

  return out_node;
}

hnode_t* arith_expr__Unary::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("arith_expr.Unary"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

    hnode_t* x1 = this->child->AbbreviatedTree();
    L->append(new field(new Str("child"), x1));

  return out_node;
}

hnode_t* arith_expr__Unary::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* arith_expr__Binary::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("arith_expr.Binary"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

    hnode_t* x1 = this->left->PrettyTree();
    L->append(new field(new Str("left"), x1));

    hnode_t* x2 = this->right->PrettyTree();
    L->append(new field(new Str("right"), x2));

  return out_node;
}

hnode_t* arith_expr__Binary::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("arith_expr.Binary"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

    hnode_t* x1 = this->left->AbbreviatedTree();
    L->append(new field(new Str("left"), x1));

    hnode_t* x2 = this->right->AbbreviatedTree();
    L->append(new field(new Str("right"), x2));

  return out_node;
}

hnode_t* arith_expr__Binary::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* arith_expr__TernaryOp::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("arith_expr.TernaryOp"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->cond->PrettyTree();
    L->append(new field(new Str("cond"), x0));

    hnode_t* x1 = this->true_expr->PrettyTree();
    L->append(new field(new Str("true_expr"), x1));

    hnode_t* x2 = this->false_expr->PrettyTree();
    L->append(new field(new Str("false_expr"), x2));

  return out_node;
}

hnode_t* arith_expr__TernaryOp::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("arith_expr.TernaryOp"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->cond->AbbreviatedTree();
    L->append(new field(new Str("cond"), x0));

    hnode_t* x1 = this->true_expr->AbbreviatedTree();
    L->append(new field(new Str("true_expr"), x1));

    hnode_t* x2 = this->false_expr->AbbreviatedTree();
    L->append(new field(new Str("false_expr"), x2));

  return out_node;
}

hnode_t* arith_expr__TernaryOp::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* arith_expr_t::PrettyTree() {
  switch (this->tag_()) {
  case arith_expr_e::VarRef: {
    arith_expr__VarRef* obj = static_cast<arith_expr__VarRef*>(this);
    return obj->PrettyTree();
  }
  case arith_expr_e::ArithWord: {
    arith_expr__ArithWord* obj = static_cast<arith_expr__ArithWord*>(this);
    return obj->PrettyTree();
  }
  case arith_expr_e::UnaryAssign: {
    arith_expr__UnaryAssign* obj = static_cast<arith_expr__UnaryAssign*>(this);
    return obj->PrettyTree();
  }
  case arith_expr_e::BinaryAssign: {
    arith_expr__BinaryAssign* obj =
static_cast<arith_expr__BinaryAssign*>(this);
    return obj->PrettyTree();
  }
  case arith_expr_e::Unary: {
    arith_expr__Unary* obj = static_cast<arith_expr__Unary*>(this);
    return obj->PrettyTree();
  }
  case arith_expr_e::Binary: {
    arith_expr__Binary* obj = static_cast<arith_expr__Binary*>(this);
    return obj->PrettyTree();
  }
  case arith_expr_e::TernaryOp: {
    arith_expr__TernaryOp* obj = static_cast<arith_expr__TernaryOp*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* arith_expr_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case arith_expr_e::VarRef: {
    arith_expr__VarRef* obj = static_cast<arith_expr__VarRef*>(this);
    return obj->_AbbreviatedTree();
  }
  case arith_expr_e::ArithWord: {
    arith_expr__ArithWord* obj = static_cast<arith_expr__ArithWord*>(this);
    return obj->_AbbreviatedTree();
  }
  case arith_expr_e::UnaryAssign: {
    arith_expr__UnaryAssign* obj = static_cast<arith_expr__UnaryAssign*>(this);
    return obj->_AbbreviatedTree();
  }
  case arith_expr_e::BinaryAssign: {
    arith_expr__BinaryAssign* obj =
static_cast<arith_expr__BinaryAssign*>(this);
    return obj->_AbbreviatedTree();
  }
  case arith_expr_e::Unary: {
    arith_expr__Unary* obj = static_cast<arith_expr__Unary*>(this);
    return obj->_AbbreviatedTree();
  }
  case arith_expr_e::Binary: {
    arith_expr__Binary* obj = static_cast<arith_expr__Binary*>(this);
    return obj->_AbbreviatedTree();
  }
  case arith_expr_e::TernaryOp: {
    arith_expr__TernaryOp* obj = static_cast<arith_expr__TernaryOp*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* arith_expr_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case arith_expr_e::VarRef: {
    arith_expr__VarRef* obj = static_cast<arith_expr__VarRef*>(this);
    return obj->AbbreviatedTree();
  }
  case arith_expr_e::ArithWord: {
    arith_expr__ArithWord* obj = static_cast<arith_expr__ArithWord*>(this);
    return obj->AbbreviatedTree();
  }
  case arith_expr_e::UnaryAssign: {
    arith_expr__UnaryAssign* obj = static_cast<arith_expr__UnaryAssign*>(this);
    return obj->AbbreviatedTree();
  }
  case arith_expr_e::BinaryAssign: {
    arith_expr__BinaryAssign* obj =
static_cast<arith_expr__BinaryAssign*>(this);
    return obj->AbbreviatedTree();
  }
  case arith_expr_e::Unary: {
    arith_expr__Unary* obj = static_cast<arith_expr__Unary*>(this);
    return obj->AbbreviatedTree();
  }
  case arith_expr_e::Binary: {
    arith_expr__Binary* obj = static_cast<arith_expr__Binary*>(this);
    return obj->AbbreviatedTree();
  }
  case arith_expr_e::TernaryOp: {
    arith_expr__TernaryOp* obj = static_cast<arith_expr__TernaryOp*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}
const char* bool_expr_str(int tag) {
  switch (tag) {
  case bool_expr_e::WordTest:
    return "bool_expr.WordTest";
  case bool_expr_e::Binary:
    return "bool_expr.Binary";
  case bool_expr_e::Unary:
    return "bool_expr.Unary";
  case bool_expr_e::LogicalNot:
    return "bool_expr.LogicalNot";
  case bool_expr_e::LogicalAnd:
    return "bool_expr.LogicalAnd";
  case bool_expr_e::LogicalOr:
    return "bool_expr.LogicalOr";
  default:
    assert(0);
  }
}

hnode_t* bool_expr__WordTest::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("bool_expr.WordTest"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->w->PrettyTree();
    L->append(new field(new Str("w"), x0));

  return out_node;
}

hnode_t* bool_expr__WordTest::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("bool_expr.WordTest"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->w->AbbreviatedTree();
    L->append(new field(new Str("w"), x0));

  return out_node;
}

hnode_t* bool_expr__WordTest::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* bool_expr__Binary::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("bool_expr.Binary"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

    hnode_t* x1 = this->left->PrettyTree();
    L->append(new field(new Str("left"), x1));

    hnode_t* x2 = this->right->PrettyTree();
    L->append(new field(new Str("right"), x2));

  return out_node;
}

hnode_t* bool_expr__Binary::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("bool_expr.Binary"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

    hnode_t* x1 = this->left->AbbreviatedTree();
    L->append(new field(new Str("left"), x1));

    hnode_t* x2 = this->right->AbbreviatedTree();
    L->append(new field(new Str("right"), x2));

  return out_node;
}

hnode_t* bool_expr__Binary::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* bool_expr__Unary::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("bool_expr.Unary"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

    hnode_t* x1 = this->child->PrettyTree();
    L->append(new field(new Str("child"), x1));

  return out_node;
}

hnode_t* bool_expr__Unary::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("bool_expr.Unary"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

    hnode_t* x1 = this->child->AbbreviatedTree();
    L->append(new field(new Str("child"), x1));

  return out_node;
}

hnode_t* bool_expr__Unary::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* bool_expr__LogicalNot::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("bool_expr.LogicalNot"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->child->PrettyTree();
    L->append(new field(new Str("child"), x0));

  return out_node;
}

hnode_t* bool_expr__LogicalNot::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("bool_expr.LogicalNot"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->child->AbbreviatedTree();
    L->append(new field(new Str("child"), x0));

  return out_node;
}

hnode_t* bool_expr__LogicalNot::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* bool_expr__LogicalAnd::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("bool_expr.LogicalAnd"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->PrettyTree();
    L->append(new field(new Str("left"), x0));

    hnode_t* x1 = this->right->PrettyTree();
    L->append(new field(new Str("right"), x1));

  return out_node;
}

hnode_t* bool_expr__LogicalAnd::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("bool_expr.LogicalAnd"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->AbbreviatedTree();
    L->append(new field(new Str("left"), x0));

    hnode_t* x1 = this->right->AbbreviatedTree();
    L->append(new field(new Str("right"), x1));

  return out_node;
}

hnode_t* bool_expr__LogicalAnd::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* bool_expr__LogicalOr::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("bool_expr.LogicalOr"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->PrettyTree();
    L->append(new field(new Str("left"), x0));

    hnode_t* x1 = this->right->PrettyTree();
    L->append(new field(new Str("right"), x1));

  return out_node;
}

hnode_t* bool_expr__LogicalOr::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("bool_expr.LogicalOr"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->AbbreviatedTree();
    L->append(new field(new Str("left"), x0));

    hnode_t* x1 = this->right->AbbreviatedTree();
    L->append(new field(new Str("right"), x1));

  return out_node;
}

hnode_t* bool_expr__LogicalOr::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* bool_expr_t::PrettyTree() {
  switch (this->tag_()) {
  case bool_expr_e::WordTest: {
    bool_expr__WordTest* obj = static_cast<bool_expr__WordTest*>(this);
    return obj->PrettyTree();
  }
  case bool_expr_e::Binary: {
    bool_expr__Binary* obj = static_cast<bool_expr__Binary*>(this);
    return obj->PrettyTree();
  }
  case bool_expr_e::Unary: {
    bool_expr__Unary* obj = static_cast<bool_expr__Unary*>(this);
    return obj->PrettyTree();
  }
  case bool_expr_e::LogicalNot: {
    bool_expr__LogicalNot* obj = static_cast<bool_expr__LogicalNot*>(this);
    return obj->PrettyTree();
  }
  case bool_expr_e::LogicalAnd: {
    bool_expr__LogicalAnd* obj = static_cast<bool_expr__LogicalAnd*>(this);
    return obj->PrettyTree();
  }
  case bool_expr_e::LogicalOr: {
    bool_expr__LogicalOr* obj = static_cast<bool_expr__LogicalOr*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* bool_expr_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case bool_expr_e::WordTest: {
    bool_expr__WordTest* obj = static_cast<bool_expr__WordTest*>(this);
    return obj->_AbbreviatedTree();
  }
  case bool_expr_e::Binary: {
    bool_expr__Binary* obj = static_cast<bool_expr__Binary*>(this);
    return obj->_AbbreviatedTree();
  }
  case bool_expr_e::Unary: {
    bool_expr__Unary* obj = static_cast<bool_expr__Unary*>(this);
    return obj->_AbbreviatedTree();
  }
  case bool_expr_e::LogicalNot: {
    bool_expr__LogicalNot* obj = static_cast<bool_expr__LogicalNot*>(this);
    return obj->_AbbreviatedTree();
  }
  case bool_expr_e::LogicalAnd: {
    bool_expr__LogicalAnd* obj = static_cast<bool_expr__LogicalAnd*>(this);
    return obj->_AbbreviatedTree();
  }
  case bool_expr_e::LogicalOr: {
    bool_expr__LogicalOr* obj = static_cast<bool_expr__LogicalOr*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* bool_expr_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case bool_expr_e::WordTest: {
    bool_expr__WordTest* obj = static_cast<bool_expr__WordTest*>(this);
    return obj->AbbreviatedTree();
  }
  case bool_expr_e::Binary: {
    bool_expr__Binary* obj = static_cast<bool_expr__Binary*>(this);
    return obj->AbbreviatedTree();
  }
  case bool_expr_e::Unary: {
    bool_expr__Unary* obj = static_cast<bool_expr__Unary*>(this);
    return obj->AbbreviatedTree();
  }
  case bool_expr_e::LogicalNot: {
    bool_expr__LogicalNot* obj = static_cast<bool_expr__LogicalNot*>(this);
    return obj->AbbreviatedTree();
  }
  case bool_expr_e::LogicalAnd: {
    bool_expr__LogicalAnd* obj = static_cast<bool_expr__LogicalAnd*>(this);
    return obj->AbbreviatedTree();
  }
  case bool_expr_e::LogicalOr: {
    bool_expr__LogicalOr* obj = static_cast<bool_expr__LogicalOr*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}
const char* redir_str(int tag) {
  switch (tag) {
  case redir_e::Redir:
    return "redir.Redir";
  case redir_e::HereDoc:
    return "redir.HereDoc";
  default:
    assert(0);
  }
}

hnode_t* redir__Redir::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("redir.Redir"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->op->PrettyTree();
    L->append(new field(new Str("op"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->fd), color_e::OtherConst);
    L->append(new field(new Str("fd"), x1));

    hnode_t* x2 = this->arg_word->PrettyTree();
    L->append(new field(new Str("arg_word"), x2));

  return out_node;
}

hnode_t* redir__Redir::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("redir.Redir"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->op->AbbreviatedTree();
    L->append(new field(new Str("op"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->fd), color_e::OtherConst);
    L->append(new field(new Str("fd"), x1));

    hnode_t* x2 = this->arg_word->AbbreviatedTree();
    L->append(new field(new Str("arg_word"), x2));

  return out_node;
}

hnode_t* redir__Redir::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* redir__HereDoc::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("redir.HereDoc"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->op->PrettyTree();
    L->append(new field(new Str("op"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->fd), color_e::OtherConst);
    L->append(new field(new Str("fd"), x1));

    hnode_t* x2 = this->here_begin->PrettyTree();
    L->append(new field(new Str("here_begin"), x2));

    hnode_t* x3 = new hnode__Leaf(str(this->here_end_span_id),
                                  color_e::OtherConst);
    L->append(new field(new Str("here_end_span_id"), x3));

    if (this->stdin_parts && len(this->stdin_parts)) {  // ArrayType
      hnode__Array* x4 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<word_part_t*>it(this->stdin_parts); !it.Done(); it.Next()) {
        word_part_t* i4 = it.Value();
        x4->children->append(i4->PrettyTree());
      }
      L->append(new field(new Str("stdin_parts"), x4));
    }

  return out_node;
}

hnode_t* redir__HereDoc::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("redir.HereDoc"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->op->AbbreviatedTree();
    L->append(new field(new Str("op"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->fd), color_e::OtherConst);
    L->append(new field(new Str("fd"), x1));

    hnode_t* x2 = this->here_begin->AbbreviatedTree();
    L->append(new field(new Str("here_begin"), x2));

    hnode_t* x3 = new hnode__Leaf(str(this->here_end_span_id),
                                  color_e::OtherConst);
    L->append(new field(new Str("here_end_span_id"), x3));

    if (this->stdin_parts && len(this->stdin_parts)) {  // ArrayType
      hnode__Array* x4 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<word_part_t*>it(this->stdin_parts); !it.Done(); it.Next()) {
        word_part_t* i4 = it.Value();
        x4->children->append(i4->AbbreviatedTree());
      }
      L->append(new field(new Str("stdin_parts"), x4));
    }

  return out_node;
}

hnode_t* redir__HereDoc::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* redir_t::PrettyTree() {
  switch (this->tag_()) {
  case redir_e::Redir: {
    redir__Redir* obj = static_cast<redir__Redir*>(this);
    return obj->PrettyTree();
  }
  case redir_e::HereDoc: {
    redir__HereDoc* obj = static_cast<redir__HereDoc*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* redir_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case redir_e::Redir: {
    redir__Redir* obj = static_cast<redir__Redir*>(this);
    return obj->_AbbreviatedTree();
  }
  case redir_e::HereDoc: {
    redir__HereDoc* obj = static_cast<redir__HereDoc*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* redir_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case redir_e::Redir: {
    redir__Redir* obj = static_cast<redir__Redir*>(this);
    return obj->AbbreviatedTree();
  }
  case redir_e::HereDoc: {
    redir__HereDoc* obj = static_cast<redir__HereDoc*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}
const char* assign_op_str(assign_op_e tag) {
  switch (tag) {
  case assign_op_e::Equal:
    return "assign_op.Equal";
  case assign_op_e::PlusEqual:
    return "assign_op.PlusEqual";
  default:
    assert(0);
  }
}

hnode_t* assign_pair::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("assign_pair"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->lhs->PrettyTree();
    L->append(new field(new Str("lhs"), x0));

    hnode_t* x1 = new hnode__Leaf(new Str(assign_op_str(this->op)),
                                  color_e::TypeName);
    L->append(new field(new Str("op"), x1));

    if (this->rhs) {  // MaybeType
      hnode_t* x2 = this->rhs->PrettyTree();
      L->append(new field(new Str("rhs"), x2));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i3 = it.Value();
        x3->children->append(new hnode__Leaf(str(i3), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x3));
    }

  return out_node;
}

hnode_t* assign_pair::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("assign_pair"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->lhs->AbbreviatedTree();
    L->append(new field(new Str("lhs"), x0));

    hnode_t* x1 = new hnode__Leaf(new Str(assign_op_str(this->op)),
                                  color_e::TypeName);
    L->append(new field(new Str("op"), x1));

    if (this->rhs) {  // MaybeType
      hnode_t* x2 = this->rhs->AbbreviatedTree();
      L->append(new field(new Str("rhs"), x2));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i3 = it.Value();
        x3->children->append(new hnode__Leaf(str(i3), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x3));
    }

  return out_node;
}

hnode_t* assign_pair::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* env_pair::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("env_pair"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

    hnode_t* x1 = this->val->PrettyTree();
    L->append(new field(new Str("val"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* env_pair::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("env_pair"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

    hnode_t* x1 = this->val->AbbreviatedTree();
    L->append(new field(new Str("val"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* env_pair::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* case_arm::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("case_arm"));
  List<field*>* L = out_node->fields;
    if (this->pat_list && len(this->pat_list)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<word_t*>it(this->pat_list); !it.Done(); it.Next()) {
        word_t* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("pat_list"), x0));
    }

    if (this->action && len(this->action)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->action); !it.Done(); it.Next()) {
        command_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("action"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* case_arm::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("case_arm"));
  List<field*>* L = out_node->fields;
    if (this->pat_list && len(this->pat_list)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<word_t*>it(this->pat_list); !it.Done(); it.Next()) {
        word_t* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("pat_list"), x0));
    }

    if (this->action && len(this->action)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->action); !it.Done(); it.Next()) {
        command_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("action"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* case_arm::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* if_arm::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("if_arm"));
  List<field*>* L = out_node->fields;
    if (this->cond && len(this->cond)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->cond); !it.Done(); it.Next()) {
        command_t* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("cond"), x0));
    }

    if (this->action && len(this->action)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->action); !it.Done(); it.Next()) {
        command_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("action"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* if_arm::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("if_arm"));
  List<field*>* L = out_node->fields;
    if (this->cond && len(this->cond)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->cond); !it.Done(); it.Next()) {
        command_t* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("cond"), x0));
    }

    if (this->action && len(this->action)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->action); !it.Done(); it.Next()) {
        command_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("action"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* if_arm::AbbreviatedTree() {
  return _AbbreviatedTree();
}
const char* command_str(int tag) {
  switch (tag) {
  case command_e::NoOp:
    return "command.NoOp";
  case command_e::Simple:
    return "command.Simple";
  case command_e::ExpandedAlias:
    return "command.ExpandedAlias";
  case command_e::Sentence:
    return "command.Sentence";
  case command_e::ShAssignment:
    return "command.ShAssignment";
  case command_e::ControlFlow:
    return "command.ControlFlow";
  case command_e::Pipeline:
    return "command.Pipeline";
  case command_e::AndOr:
    return "command.AndOr";
  case command_e::DoGroup:
    return "command.DoGroup";
  case command_e::BraceGroup:
    return "command.BraceGroup";
  case command_e::Subshell:
    return "command.Subshell";
  case command_e::DParen:
    return "command.DParen";
  case command_e::DBracket:
    return "command.DBracket";
  case command_e::ForEach:
    return "command.ForEach";
  case command_e::ForExpr:
    return "command.ForExpr";
  case command_e::WhileUntil:
    return "command.WhileUntil";
  case command_e::If:
    return "command.If";
  case command_e::Case:
    return "command.Case";
  case command_e::ShFunction:
    return "command.ShFunction";
  case command_e::TimeBlock:
    return "command.TimeBlock";
  case command_e::CommandList:
    return "command.CommandList";
  case command_e::BareDecl:
    return "command.BareDecl";
  case command_e::VarDecl:
    return "command.VarDecl";
  case command_e::PlaceMutation:
    return "command.PlaceMutation";
  case command_e::Expr:
    return "command.Expr";
  case command_e::Return:
    return "command.Return";
  case command_e::OilCondition:
    return "command.OilCondition";
  case command_e::OilForIn:
    return "command.OilForIn";
  case command_e::Proc:
    return "command.Proc";
  case command_e::Func:
    return "command.Func";
  default:
    assert(0);
  }
}

hnode_t* command__NoOp::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.NoOp"));
  List<field*>* L = out_node->fields;
    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i0 = it.Value();
        x0->children->append(new hnode__Leaf(str(i0), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x0));
    }

  return out_node;
}

hnode_t* command__NoOp::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.NoOp"));
  return out_node;
}

hnode_t* command__NoOp::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__Simple::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.Simple"));
  List<field*>* L = out_node->fields;
    if (this->words && len(this->words)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<word_t*>it(this->words); !it.Done(); it.Next()) {
        word_t* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("words"), x0));
    }

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("redirects"), x1));
    }

    if (this->more_env && len(this->more_env)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<env_pair*>it(this->more_env); !it.Done(); it.Next()) {
        env_pair* i2 = it.Value();
        x2->children->append(i2->PrettyTree());
      }
      L->append(new field(new Str("more_env"), x2));
    }

    if (this->block) {  // MaybeType
      hnode_t* x3 = this->block->PrettyTree();
      L->append(new field(new Str("block"), x3));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x4 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i4 = it.Value();
        x4->children->append(new hnode__Leaf(str(i4), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x4));
    }

  return out_node;
}

hnode_t* command__Simple::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.Simple"));
  List<field*>* L = out_node->fields;
    if (this->words && len(this->words)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<word_t*>it(this->words); !it.Done(); it.Next()) {
        word_t* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("words"), x0));
    }

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("redirects"), x1));
    }

    if (this->more_env && len(this->more_env)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<env_pair*>it(this->more_env); !it.Done(); it.Next()) {
        env_pair* i2 = it.Value();
        x2->children->append(i2->AbbreviatedTree());
      }
      L->append(new field(new Str("more_env"), x2));
    }

    if (this->block) {  // MaybeType
      hnode_t* x3 = this->block->AbbreviatedTree();
      L->append(new field(new Str("block"), x3));
    }

  return out_node;
}

hnode_t* command__Simple::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__ExpandedAlias::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("command.ExpandedAlias"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->child->PrettyTree();
    L->append(new field(new Str("child"), x0));

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("redirects"), x1));
    }

    if (this->more_env && len(this->more_env)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<env_pair*>it(this->more_env); !it.Done(); it.Next()) {
        env_pair* i2 = it.Value();
        x2->children->append(i2->PrettyTree());
      }
      L->append(new field(new Str("more_env"), x2));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i3 = it.Value();
        x3->children->append(new hnode__Leaf(str(i3), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x3));
    }

  return out_node;
}

hnode_t* command__ExpandedAlias::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("command.ExpandedAlias"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->child->AbbreviatedTree();
    L->append(new field(new Str("child"), x0));

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("redirects"), x1));
    }

    if (this->more_env && len(this->more_env)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<env_pair*>it(this->more_env); !it.Done(); it.Next()) {
        env_pair* i2 = it.Value();
        x2->children->append(i2->AbbreviatedTree());
      }
      L->append(new field(new Str("more_env"), x2));
    }

  return out_node;
}

hnode_t* command__ExpandedAlias::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__Sentence::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.Sentence"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->child->PrettyTree();
    L->append(new field(new Str("child"), x0));

    hnode_t* x1 = this->terminator->PrettyTree();
    L->append(new field(new Str("terminator"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* command__Sentence::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.Sentence"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->child->AbbreviatedTree();
    L->append(new field(new Str("child"), x0));

    hnode_t* x1 = this->terminator->AbbreviatedTree();
    L->append(new field(new Str("terminator"), x1));

  return out_node;
}

hnode_t* command__Sentence::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__ShAssignment::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.ShAssignment"));
  List<field*>* L = out_node->fields;
    if (this->pairs && len(this->pairs)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<assign_pair*>it(this->pairs); !it.Done(); it.Next()) {
        assign_pair* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("pairs"), x0));
    }

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("redirects"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* command__ShAssignment::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.ShAssignment"));
  List<field*>* L = out_node->fields;
    if (this->pairs && len(this->pairs)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<assign_pair*>it(this->pairs); !it.Done(); it.Next()) {
        assign_pair* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("pairs"), x0));
    }

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("redirects"), x1));
    }

  return out_node;
}

hnode_t* command__ShAssignment::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__ControlFlow::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.ControlFlow"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->token->PrettyTree();
    L->append(new field(new Str("token"), x0));

    if (this->arg_word) {  // MaybeType
      hnode_t* x1 = this->arg_word->PrettyTree();
      L->append(new field(new Str("arg_word"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* command__ControlFlow::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.ControlFlow"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->token->AbbreviatedTree();
    L->append(new field(new Str("token"), x0));

    if (this->arg_word) {  // MaybeType
      hnode_t* x1 = this->arg_word->AbbreviatedTree();
      L->append(new field(new Str("arg_word"), x1));
    }

  return out_node;
}

hnode_t* command__ControlFlow::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__Pipeline::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.Pipeline"));
  List<field*>* L = out_node->fields;
    if (this->children && len(this->children)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->children); !it.Done(); it.Next()) {
        command_t* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("children"), x0));
    }

    hnode_t* x1 = new hnode__Leaf(this->negated ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("negated"), x1));

    if (this->stderr_indices && len(this->stderr_indices)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->stderr_indices); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("stderr_indices"), x2));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i3 = it.Value();
        x3->children->append(new hnode__Leaf(str(i3), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x3));
    }

  return out_node;
}

hnode_t* command__Pipeline::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.Pipeline"));
  List<field*>* L = out_node->fields;
    if (this->children && len(this->children)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->children); !it.Done(); it.Next()) {
        command_t* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("children"), x0));
    }

    hnode_t* x1 = new hnode__Leaf(this->negated ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("negated"), x1));

    if (this->stderr_indices && len(this->stderr_indices)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->stderr_indices); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("stderr_indices"), x2));
    }

  return out_node;
}

hnode_t* command__Pipeline::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__AndOr::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.AndOr"));
  List<field*>* L = out_node->fields;
    if (this->ops && len(this->ops)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Id_t>it(this->ops); !it.Done(); it.Next()) {
        Id_t i0 = it.Value();
        x0->children->append(new hnode__Leaf(new Str(Id_str(i0)),
                             color_e::UserType));
      }
      L->append(new field(new Str("ops"), x0));
    }

    if (this->children && len(this->children)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->children); !it.Done(); it.Next()) {
        command_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("children"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* command__AndOr::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.AndOr"));
  List<field*>* L = out_node->fields;
    if (this->ops && len(this->ops)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Id_t>it(this->ops); !it.Done(); it.Next()) {
        Id_t i0 = it.Value();
        x0->children->append(new hnode__Leaf(new Str(Id_str(i0)),
                             color_e::UserType));
      }
      L->append(new field(new Str("ops"), x0));
    }

    if (this->children && len(this->children)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->children); !it.Done(); it.Next()) {
        command_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("children"), x1));
    }

  return out_node;
}

hnode_t* command__AndOr::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__DoGroup::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.DoGroup"));
  List<field*>* L = out_node->fields;
    if (this->children && len(this->children)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->children); !it.Done(); it.Next()) {
        command_t* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("children"), x0));
    }

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("redirects"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* command__DoGroup::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.DoGroup"));
  List<field*>* L = out_node->fields;
    if (this->children && len(this->children)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->children); !it.Done(); it.Next()) {
        command_t* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("children"), x0));
    }

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("redirects"), x1));
    }

  return out_node;
}

hnode_t* command__DoGroup::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__BraceGroup::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.BraceGroup"));
  List<field*>* L = out_node->fields;
    if (this->children && len(this->children)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->children); !it.Done(); it.Next()) {
        command_t* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("children"), x0));
    }

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("redirects"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* command__BraceGroup::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.BraceGroup"));
  List<field*>* L = out_node->fields;
    if (this->children && len(this->children)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->children); !it.Done(); it.Next()) {
        command_t* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("children"), x0));
    }

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("redirects"), x1));
    }

  return out_node;
}

hnode_t* command__BraceGroup::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__Subshell::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.Subshell"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->command_list->PrettyTree();
    L->append(new field(new Str("command_list"), x0));

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("redirects"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* command__Subshell::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.Subshell"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->command_list->AbbreviatedTree();
    L->append(new field(new Str("command_list"), x0));

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("redirects"), x1));
    }

  return out_node;
}

hnode_t* command__Subshell::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__DParen::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.DParen"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->child->PrettyTree();
    L->append(new field(new Str("child"), x0));

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("redirects"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* command__DParen::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.DParen"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->child->AbbreviatedTree();
    L->append(new field(new Str("child"), x0));

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("redirects"), x1));
    }

  return out_node;
}

hnode_t* command__DParen::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__DBracket::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.DBracket"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->expr->PrettyTree();
    L->append(new field(new Str("expr"), x0));

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("redirects"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* command__DBracket::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.DBracket"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->expr->AbbreviatedTree();
    L->append(new field(new Str("expr"), x0));

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("redirects"), x1));
    }

  return out_node;
}

hnode_t* command__DBracket::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__ForEach::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.ForEach"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->iter_name, color_e::StringConst);
    L->append(new field(new Str("iter_name"), x0));

    if (this->iter_words && len(this->iter_words)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<word_t*>it(this->iter_words); !it.Done(); it.Next()) {
        word_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("iter_words"), x1));
    }

    hnode_t* x2 = new hnode__Leaf(this->do_arg_iter ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("do_arg_iter"), x2));

    hnode_t* x3 = this->body->PrettyTree();
    L->append(new field(new Str("body"), x3));

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x4 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i4 = it.Value();
        x4->children->append(i4->PrettyTree());
      }
      L->append(new field(new Str("redirects"), x4));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x5 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i5 = it.Value();
        x5->children->append(new hnode__Leaf(str(i5), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x5));
    }

  return out_node;
}

hnode_t* command__ForEach::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.ForEach"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->iter_name, color_e::StringConst);
    L->append(new field(new Str("iter_name"), x0));

    if (this->iter_words && len(this->iter_words)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<word_t*>it(this->iter_words); !it.Done(); it.Next()) {
        word_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("iter_words"), x1));
    }

    hnode_t* x2 = new hnode__Leaf(this->do_arg_iter ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("do_arg_iter"), x2));

    hnode_t* x3 = this->body->AbbreviatedTree();
    L->append(new field(new Str("body"), x3));

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x4 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i4 = it.Value();
        x4->children->append(i4->AbbreviatedTree());
      }
      L->append(new field(new Str("redirects"), x4));
    }

  return out_node;
}

hnode_t* command__ForEach::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__ForExpr::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.ForExpr"));
  List<field*>* L = out_node->fields;
    if (this->init) {  // MaybeType
      hnode_t* x0 = this->init->PrettyTree();
      L->append(new field(new Str("init"), x0));
    }

    if (this->cond) {  // MaybeType
      hnode_t* x1 = this->cond->PrettyTree();
      L->append(new field(new Str("cond"), x1));
    }

    if (this->update) {  // MaybeType
      hnode_t* x2 = this->update->PrettyTree();
      L->append(new field(new Str("update"), x2));
    }

    if (this->body) {  // MaybeType
      hnode_t* x3 = this->body->PrettyTree();
      L->append(new field(new Str("body"), x3));
    }

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x4 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i4 = it.Value();
        x4->children->append(i4->PrettyTree());
      }
      L->append(new field(new Str("redirects"), x4));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x5 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i5 = it.Value();
        x5->children->append(new hnode__Leaf(str(i5), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x5));
    }

  return out_node;
}

hnode_t* command__ForExpr::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.ForExpr"));
  List<field*>* L = out_node->fields;
    if (this->init) {  // MaybeType
      hnode_t* x0 = this->init->AbbreviatedTree();
      L->append(new field(new Str("init"), x0));
    }

    if (this->cond) {  // MaybeType
      hnode_t* x1 = this->cond->AbbreviatedTree();
      L->append(new field(new Str("cond"), x1));
    }

    if (this->update) {  // MaybeType
      hnode_t* x2 = this->update->AbbreviatedTree();
      L->append(new field(new Str("update"), x2));
    }

    if (this->body) {  // MaybeType
      hnode_t* x3 = this->body->AbbreviatedTree();
      L->append(new field(new Str("body"), x3));
    }

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x4 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i4 = it.Value();
        x4->children->append(i4->AbbreviatedTree());
      }
      L->append(new field(new Str("redirects"), x4));
    }

  return out_node;
}

hnode_t* command__ForExpr::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__WhileUntil::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.WhileUntil"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->keyword->PrettyTree();
    L->append(new field(new Str("keyword"), x0));

    if (this->cond && len(this->cond)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->cond); !it.Done(); it.Next()) {
        command_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("cond"), x1));
    }

    hnode_t* x2 = this->body->PrettyTree();
    L->append(new field(new Str("body"), x2));

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i3 = it.Value();
        x3->children->append(i3->PrettyTree());
      }
      L->append(new field(new Str("redirects"), x3));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x4 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i4 = it.Value();
        x4->children->append(new hnode__Leaf(str(i4), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x4));
    }

  return out_node;
}

hnode_t* command__WhileUntil::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.WhileUntil"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->keyword->AbbreviatedTree();
    L->append(new field(new Str("keyword"), x0));

    if (this->cond && len(this->cond)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->cond); !it.Done(); it.Next()) {
        command_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("cond"), x1));
    }

    hnode_t* x2 = this->body->AbbreviatedTree();
    L->append(new field(new Str("body"), x2));

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i3 = it.Value();
        x3->children->append(i3->AbbreviatedTree());
      }
      L->append(new field(new Str("redirects"), x3));
    }

  return out_node;
}

hnode_t* command__WhileUntil::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__If::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.If"));
  List<field*>* L = out_node->fields;
    if (this->arms && len(this->arms)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<if_arm*>it(this->arms); !it.Done(); it.Next()) {
        if_arm* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("arms"), x0));
    }

    if (this->else_action && len(this->else_action)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->else_action); !it.Done(); it.Next()) {
        command_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("else_action"), x1));
    }

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i2 = it.Value();
        x2->children->append(i2->PrettyTree());
      }
      L->append(new field(new Str("redirects"), x2));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i3 = it.Value();
        x3->children->append(new hnode__Leaf(str(i3), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x3));
    }

  return out_node;
}

hnode_t* command__If::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.If"));
  List<field*>* L = out_node->fields;
    if (this->arms && len(this->arms)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<if_arm*>it(this->arms); !it.Done(); it.Next()) {
        if_arm* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("arms"), x0));
    }

    if (this->else_action && len(this->else_action)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->else_action); !it.Done(); it.Next()) {
        command_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("else_action"), x1));
    }

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i2 = it.Value();
        x2->children->append(i2->AbbreviatedTree());
      }
      L->append(new field(new Str("redirects"), x2));
    }

  return out_node;
}

hnode_t* command__If::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__Case::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.Case"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->to_match->PrettyTree();
    L->append(new field(new Str("to_match"), x0));

    if (this->arms && len(this->arms)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<case_arm*>it(this->arms); !it.Done(); it.Next()) {
        case_arm* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("arms"), x1));
    }

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i2 = it.Value();
        x2->children->append(i2->PrettyTree());
      }
      L->append(new field(new Str("redirects"), x2));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i3 = it.Value();
        x3->children->append(new hnode__Leaf(str(i3), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x3));
    }

  return out_node;
}

hnode_t* command__Case::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.Case"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->to_match->AbbreviatedTree();
    L->append(new field(new Str("to_match"), x0));

    if (this->arms && len(this->arms)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<case_arm*>it(this->arms); !it.Done(); it.Next()) {
        case_arm* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("arms"), x1));
    }

    if (this->redirects && len(this->redirects)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<redir_t*>it(this->redirects); !it.Done(); it.Next()) {
        redir_t* i2 = it.Value();
        x2->children->append(i2->AbbreviatedTree());
      }
      L->append(new field(new Str("redirects"), x2));
    }

  return out_node;
}

hnode_t* command__Case::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__ShFunction::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.ShFunction"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

    hnode_t* x1 = this->body->PrettyTree();
    L->append(new field(new Str("body"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* command__ShFunction::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.ShFunction"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

    hnode_t* x1 = this->body->AbbreviatedTree();
    L->append(new field(new Str("body"), x1));

  return out_node;
}

hnode_t* command__ShFunction::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__TimeBlock::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.TimeBlock"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->pipeline->PrettyTree();
    L->append(new field(new Str("pipeline"), x0));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x1));
    }

  return out_node;
}

hnode_t* command__TimeBlock::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.TimeBlock"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->pipeline->AbbreviatedTree();
    L->append(new field(new Str("pipeline"), x0));

  return out_node;
}

hnode_t* command__TimeBlock::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__CommandList::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.CommandList"));
  List<field*>* L = out_node->fields;
    if (this->children && len(this->children)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->children); !it.Done(); it.Next()) {
        command_t* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("children"), x0));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x1));
    }

  return out_node;
}

hnode_t* command__CommandList::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.CommandList"));
  List<field*>* L = out_node->fields;
    if (this->children && len(this->children)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<command_t*>it(this->children); !it.Done(); it.Next()) {
        command_t* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("children"), x0));
    }

  return out_node;
}

hnode_t* command__CommandList::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__BareDecl::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.BareDecl"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->lhs->PrettyTree();
    L->append(new field(new Str("lhs"), x0));

    hnode_t* x1 = this->rhs->PrettyTree();
    L->append(new field(new Str("rhs"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* command__BareDecl::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.BareDecl"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->lhs->AbbreviatedTree();
    L->append(new field(new Str("lhs"), x0));

    hnode_t* x1 = this->rhs->AbbreviatedTree();
    L->append(new field(new Str("rhs"), x1));

  return out_node;
}

hnode_t* command__BareDecl::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__VarDecl::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.VarDecl"));
  List<field*>* L = out_node->fields;
    if (this->keyword) {  // MaybeType
      hnode_t* x0 = this->keyword->PrettyTree();
      L->append(new field(new Str("keyword"), x0));
    }

    if (this->lhs && len(this->lhs)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<name_type*>it(this->lhs); !it.Done(); it.Next()) {
        name_type* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("lhs"), x1));
    }

    hnode_t* x2 = this->rhs->PrettyTree();
    L->append(new field(new Str("rhs"), x2));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i3 = it.Value();
        x3->children->append(new hnode__Leaf(str(i3), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x3));
    }

  return out_node;
}

hnode_t* command__VarDecl::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.VarDecl"));
  List<field*>* L = out_node->fields;
    if (this->keyword) {  // MaybeType
      hnode_t* x0 = this->keyword->AbbreviatedTree();
      L->append(new field(new Str("keyword"), x0));
    }

    if (this->lhs && len(this->lhs)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<name_type*>it(this->lhs); !it.Done(); it.Next()) {
        name_type* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("lhs"), x1));
    }

    hnode_t* x2 = this->rhs->AbbreviatedTree();
    L->append(new field(new Str("rhs"), x2));

  return out_node;
}

hnode_t* command__VarDecl::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__PlaceMutation::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("command.PlaceMutation"));
  List<field*>* L = out_node->fields;
    if (this->keyword) {  // MaybeType
      hnode_t* x0 = this->keyword->PrettyTree();
      L->append(new field(new Str("keyword"), x0));
    }

    if (this->lhs && len(this->lhs)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<place_expr_t*>it(this->lhs); !it.Done(); it.Next()) {
        place_expr_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("lhs"), x1));
    }

    hnode_t* x2 = this->op->PrettyTree();
    L->append(new field(new Str("op"), x2));

    hnode_t* x3 = this->rhs->PrettyTree();
    L->append(new field(new Str("rhs"), x3));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x4 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i4 = it.Value();
        x4->children->append(new hnode__Leaf(str(i4), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x4));
    }

  return out_node;
}

hnode_t* command__PlaceMutation::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("command.PlaceMutation"));
  List<field*>* L = out_node->fields;
    if (this->keyword) {  // MaybeType
      hnode_t* x0 = this->keyword->AbbreviatedTree();
      L->append(new field(new Str("keyword"), x0));
    }

    if (this->lhs && len(this->lhs)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<place_expr_t*>it(this->lhs); !it.Done(); it.Next()) {
        place_expr_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("lhs"), x1));
    }

    hnode_t* x2 = this->op->AbbreviatedTree();
    L->append(new field(new Str("op"), x2));

    hnode_t* x3 = this->rhs->AbbreviatedTree();
    L->append(new field(new Str("rhs"), x3));

  return out_node;
}

hnode_t* command__PlaceMutation::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__Expr::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.Expr"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->keyword->PrettyTree();
    L->append(new field(new Str("keyword"), x0));

    hnode_t* x1 = this->e->PrettyTree();
    L->append(new field(new Str("e"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* command__Expr::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.Expr"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->keyword->AbbreviatedTree();
    L->append(new field(new Str("keyword"), x0));

    hnode_t* x1 = this->e->AbbreviatedTree();
    L->append(new field(new Str("e"), x1));

  return out_node;
}

hnode_t* command__Expr::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__Return::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.Return"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->keyword->PrettyTree();
    L->append(new field(new Str("keyword"), x0));

    hnode_t* x1 = this->e->PrettyTree();
    L->append(new field(new Str("e"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* command__Return::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.Return"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->keyword->AbbreviatedTree();
    L->append(new field(new Str("keyword"), x0));

    hnode_t* x1 = this->e->AbbreviatedTree();
    L->append(new field(new Str("e"), x1));

  return out_node;
}

hnode_t* command__Return::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__OilCondition::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.OilCondition"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->e->PrettyTree();
    L->append(new field(new Str("e"), x0));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x1));
    }

  return out_node;
}

hnode_t* command__OilCondition::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.OilCondition"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->e->AbbreviatedTree();
    L->append(new field(new Str("e"), x0));

  return out_node;
}

hnode_t* command__OilCondition::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__OilForIn::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.OilForIn"));
  List<field*>* L = out_node->fields;
    if (this->lhs && len(this->lhs)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<name_type*>it(this->lhs); !it.Done(); it.Next()) {
        name_type* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("lhs"), x0));
    }

    hnode_t* x1 = this->iterable->PrettyTree();
    L->append(new field(new Str("iterable"), x1));

    hnode_t* x2 = this->body->PrettyTree();
    L->append(new field(new Str("body"), x2));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i3 = it.Value();
        x3->children->append(new hnode__Leaf(str(i3), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x3));
    }

  return out_node;
}

hnode_t* command__OilForIn::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.OilForIn"));
  List<field*>* L = out_node->fields;
    if (this->lhs && len(this->lhs)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<name_type*>it(this->lhs); !it.Done(); it.Next()) {
        name_type* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("lhs"), x0));
    }

    hnode_t* x1 = this->iterable->AbbreviatedTree();
    L->append(new field(new Str("iterable"), x1));

    hnode_t* x2 = this->body->AbbreviatedTree();
    L->append(new field(new Str("body"), x2));

  return out_node;
}

hnode_t* command__OilForIn::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__Proc::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.Proc"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->PrettyTree();
    L->append(new field(new Str("name"), x0));

    hnode_t* x1 = this->sig->PrettyTree();
    L->append(new field(new Str("sig"), x1));

    hnode_t* x2 = this->body->PrettyTree();
    L->append(new field(new Str("body"), x2));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i3 = it.Value();
        x3->children->append(new hnode__Leaf(str(i3), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x3));
    }

  return out_node;
}

hnode_t* command__Proc::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.Proc"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->AbbreviatedTree();
    L->append(new field(new Str("name"), x0));

    hnode_t* x1 = this->sig->AbbreviatedTree();
    L->append(new field(new Str("sig"), x1));

    hnode_t* x2 = this->body->AbbreviatedTree();
    L->append(new field(new Str("body"), x2));

  return out_node;
}

hnode_t* command__Proc::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command__Func::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.Func"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->PrettyTree();
    L->append(new field(new Str("name"), x0));

    if (this->pos_params && len(this->pos_params)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<param*>it(this->pos_params); !it.Done(); it.Next()) {
        param* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("pos_params"), x1));
    }

    if (this->pos_splat) {  // MaybeType
      hnode_t* x2 = this->pos_splat->PrettyTree();
      L->append(new field(new Str("pos_splat"), x2));
    }

    if (this->named_params && len(this->named_params)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<param*>it(this->named_params); !it.Done(); it.Next()) {
        param* i3 = it.Value();
        x3->children->append(i3->PrettyTree());
      }
      L->append(new field(new Str("named_params"), x3));
    }

    if (this->named_splat) {  // MaybeType
      hnode_t* x4 = this->named_splat->PrettyTree();
      L->append(new field(new Str("named_splat"), x4));
    }

    if (this->return_types && len(this->return_types)) {  // ArrayType
      hnode__Array* x5 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<type_expr_t*>it(this->return_types); !it.Done(); it.Next())
           {
        type_expr_t* i5 = it.Value();
        x5->children->append(i5->PrettyTree());
      }
      L->append(new field(new Str("return_types"), x5));
    }

    hnode_t* x6 = this->body->PrettyTree();
    L->append(new field(new Str("body"), x6));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x7 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i7 = it.Value();
        x7->children->append(new hnode__Leaf(str(i7), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x7));
    }

  return out_node;
}

hnode_t* command__Func::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("command.Func"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->AbbreviatedTree();
    L->append(new field(new Str("name"), x0));

    if (this->pos_params && len(this->pos_params)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<param*>it(this->pos_params); !it.Done(); it.Next()) {
        param* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("pos_params"), x1));
    }

    if (this->pos_splat) {  // MaybeType
      hnode_t* x2 = this->pos_splat->AbbreviatedTree();
      L->append(new field(new Str("pos_splat"), x2));
    }

    if (this->named_params && len(this->named_params)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<param*>it(this->named_params); !it.Done(); it.Next()) {
        param* i3 = it.Value();
        x3->children->append(i3->AbbreviatedTree());
      }
      L->append(new field(new Str("named_params"), x3));
    }

    if (this->named_splat) {  // MaybeType
      hnode_t* x4 = this->named_splat->AbbreviatedTree();
      L->append(new field(new Str("named_splat"), x4));
    }

    if (this->return_types && len(this->return_types)) {  // ArrayType
      hnode__Array* x5 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<type_expr_t*>it(this->return_types); !it.Done(); it.Next())
           {
        type_expr_t* i5 = it.Value();
        x5->children->append(i5->AbbreviatedTree());
      }
      L->append(new field(new Str("return_types"), x5));
    }

    hnode_t* x6 = this->body->AbbreviatedTree();
    L->append(new field(new Str("body"), x6));

  return out_node;
}

hnode_t* command__Func::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* command_t::PrettyTree() {
  switch (this->tag_()) {
  case command_e::NoOp: {
    command__NoOp* obj = static_cast<command__NoOp*>(this);
    return obj->PrettyTree();
  }
  case command_e::Simple: {
    command__Simple* obj = static_cast<command__Simple*>(this);
    return obj->PrettyTree();
  }
  case command_e::ExpandedAlias: {
    command__ExpandedAlias* obj = static_cast<command__ExpandedAlias*>(this);
    return obj->PrettyTree();
  }
  case command_e::Sentence: {
    command__Sentence* obj = static_cast<command__Sentence*>(this);
    return obj->PrettyTree();
  }
  case command_e::ShAssignment: {
    command__ShAssignment* obj = static_cast<command__ShAssignment*>(this);
    return obj->PrettyTree();
  }
  case command_e::ControlFlow: {
    command__ControlFlow* obj = static_cast<command__ControlFlow*>(this);
    return obj->PrettyTree();
  }
  case command_e::Pipeline: {
    command__Pipeline* obj = static_cast<command__Pipeline*>(this);
    return obj->PrettyTree();
  }
  case command_e::AndOr: {
    command__AndOr* obj = static_cast<command__AndOr*>(this);
    return obj->PrettyTree();
  }
  case command_e::DoGroup: {
    command__DoGroup* obj = static_cast<command__DoGroup*>(this);
    return obj->PrettyTree();
  }
  case command_e::BraceGroup: {
    command__BraceGroup* obj = static_cast<command__BraceGroup*>(this);
    return obj->PrettyTree();
  }
  case command_e::Subshell: {
    command__Subshell* obj = static_cast<command__Subshell*>(this);
    return obj->PrettyTree();
  }
  case command_e::DParen: {
    command__DParen* obj = static_cast<command__DParen*>(this);
    return obj->PrettyTree();
  }
  case command_e::DBracket: {
    command__DBracket* obj = static_cast<command__DBracket*>(this);
    return obj->PrettyTree();
  }
  case command_e::ForEach: {
    command__ForEach* obj = static_cast<command__ForEach*>(this);
    return obj->PrettyTree();
  }
  case command_e::ForExpr: {
    command__ForExpr* obj = static_cast<command__ForExpr*>(this);
    return obj->PrettyTree();
  }
  case command_e::WhileUntil: {
    command__WhileUntil* obj = static_cast<command__WhileUntil*>(this);
    return obj->PrettyTree();
  }
  case command_e::If: {
    command__If* obj = static_cast<command__If*>(this);
    return obj->PrettyTree();
  }
  case command_e::Case: {
    command__Case* obj = static_cast<command__Case*>(this);
    return obj->PrettyTree();
  }
  case command_e::ShFunction: {
    command__ShFunction* obj = static_cast<command__ShFunction*>(this);
    return obj->PrettyTree();
  }
  case command_e::TimeBlock: {
    command__TimeBlock* obj = static_cast<command__TimeBlock*>(this);
    return obj->PrettyTree();
  }
  case command_e::CommandList: {
    command__CommandList* obj = static_cast<command__CommandList*>(this);
    return obj->PrettyTree();
  }
  case command_e::BareDecl: {
    command__BareDecl* obj = static_cast<command__BareDecl*>(this);
    return obj->PrettyTree();
  }
  case command_e::VarDecl: {
    command__VarDecl* obj = static_cast<command__VarDecl*>(this);
    return obj->PrettyTree();
  }
  case command_e::PlaceMutation: {
    command__PlaceMutation* obj = static_cast<command__PlaceMutation*>(this);
    return obj->PrettyTree();
  }
  case command_e::Expr: {
    command__Expr* obj = static_cast<command__Expr*>(this);
    return obj->PrettyTree();
  }
  case command_e::Return: {
    command__Return* obj = static_cast<command__Return*>(this);
    return obj->PrettyTree();
  }
  case command_e::OilCondition: {
    command__OilCondition* obj = static_cast<command__OilCondition*>(this);
    return obj->PrettyTree();
  }
  case command_e::OilForIn: {
    command__OilForIn* obj = static_cast<command__OilForIn*>(this);
    return obj->PrettyTree();
  }
  case command_e::Proc: {
    command__Proc* obj = static_cast<command__Proc*>(this);
    return obj->PrettyTree();
  }
  case command_e::Func: {
    command__Func* obj = static_cast<command__Func*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* command_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case command_e::NoOp: {
    command__NoOp* obj = static_cast<command__NoOp*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::Simple: {
    command__Simple* obj = static_cast<command__Simple*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::ExpandedAlias: {
    command__ExpandedAlias* obj = static_cast<command__ExpandedAlias*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::Sentence: {
    command__Sentence* obj = static_cast<command__Sentence*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::ShAssignment: {
    command__ShAssignment* obj = static_cast<command__ShAssignment*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::ControlFlow: {
    command__ControlFlow* obj = static_cast<command__ControlFlow*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::Pipeline: {
    command__Pipeline* obj = static_cast<command__Pipeline*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::AndOr: {
    command__AndOr* obj = static_cast<command__AndOr*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::DoGroup: {
    command__DoGroup* obj = static_cast<command__DoGroup*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::BraceGroup: {
    command__BraceGroup* obj = static_cast<command__BraceGroup*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::Subshell: {
    command__Subshell* obj = static_cast<command__Subshell*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::DParen: {
    command__DParen* obj = static_cast<command__DParen*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::DBracket: {
    command__DBracket* obj = static_cast<command__DBracket*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::ForEach: {
    command__ForEach* obj = static_cast<command__ForEach*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::ForExpr: {
    command__ForExpr* obj = static_cast<command__ForExpr*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::WhileUntil: {
    command__WhileUntil* obj = static_cast<command__WhileUntil*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::If: {
    command__If* obj = static_cast<command__If*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::Case: {
    command__Case* obj = static_cast<command__Case*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::ShFunction: {
    command__ShFunction* obj = static_cast<command__ShFunction*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::TimeBlock: {
    command__TimeBlock* obj = static_cast<command__TimeBlock*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::CommandList: {
    command__CommandList* obj = static_cast<command__CommandList*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::BareDecl: {
    command__BareDecl* obj = static_cast<command__BareDecl*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::VarDecl: {
    command__VarDecl* obj = static_cast<command__VarDecl*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::PlaceMutation: {
    command__PlaceMutation* obj = static_cast<command__PlaceMutation*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::Expr: {
    command__Expr* obj = static_cast<command__Expr*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::Return: {
    command__Return* obj = static_cast<command__Return*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::OilCondition: {
    command__OilCondition* obj = static_cast<command__OilCondition*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::OilForIn: {
    command__OilForIn* obj = static_cast<command__OilForIn*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::Proc: {
    command__Proc* obj = static_cast<command__Proc*>(this);
    return obj->_AbbreviatedTree();
  }
  case command_e::Func: {
    command__Func* obj = static_cast<command__Func*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* command_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case command_e::NoOp: {
    command__NoOp* obj = static_cast<command__NoOp*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::Simple: {
    command__Simple* obj = static_cast<command__Simple*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::ExpandedAlias: {
    command__ExpandedAlias* obj = static_cast<command__ExpandedAlias*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::Sentence: {
    command__Sentence* obj = static_cast<command__Sentence*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::ShAssignment: {
    command__ShAssignment* obj = static_cast<command__ShAssignment*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::ControlFlow: {
    command__ControlFlow* obj = static_cast<command__ControlFlow*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::Pipeline: {
    command__Pipeline* obj = static_cast<command__Pipeline*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::AndOr: {
    command__AndOr* obj = static_cast<command__AndOr*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::DoGroup: {
    command__DoGroup* obj = static_cast<command__DoGroup*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::BraceGroup: {
    command__BraceGroup* obj = static_cast<command__BraceGroup*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::Subshell: {
    command__Subshell* obj = static_cast<command__Subshell*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::DParen: {
    command__DParen* obj = static_cast<command__DParen*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::DBracket: {
    command__DBracket* obj = static_cast<command__DBracket*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::ForEach: {
    command__ForEach* obj = static_cast<command__ForEach*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::ForExpr: {
    command__ForExpr* obj = static_cast<command__ForExpr*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::WhileUntil: {
    command__WhileUntil* obj = static_cast<command__WhileUntil*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::If: {
    command__If* obj = static_cast<command__If*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::Case: {
    command__Case* obj = static_cast<command__Case*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::ShFunction: {
    command__ShFunction* obj = static_cast<command__ShFunction*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::TimeBlock: {
    command__TimeBlock* obj = static_cast<command__TimeBlock*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::CommandList: {
    command__CommandList* obj = static_cast<command__CommandList*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::BareDecl: {
    command__BareDecl* obj = static_cast<command__BareDecl*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::VarDecl: {
    command__VarDecl* obj = static_cast<command__VarDecl*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::PlaceMutation: {
    command__PlaceMutation* obj = static_cast<command__PlaceMutation*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::Expr: {
    command__Expr* obj = static_cast<command__Expr*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::Return: {
    command__Return* obj = static_cast<command__Return*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::OilCondition: {
    command__OilCondition* obj = static_cast<command__OilCondition*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::OilForIn: {
    command__OilForIn* obj = static_cast<command__OilForIn*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::Proc: {
    command__Proc* obj = static_cast<command__Proc*>(this);
    return obj->AbbreviatedTree();
  }
  case command_e::Func: {
    command__Func* obj = static_cast<command__Func*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}
const char* proc_sig_str(int tag) {
  switch (tag) {
  case proc_sig_e::Open:
    return "proc_sig.Open";
  case proc_sig_e::Closed:
    return "proc_sig.Closed";
  default:
    assert(0);
  }
}

hnode_t* proc_sig__Open::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("proc_sig.Open"));
  return out_node;
}

hnode_t* proc_sig__Open::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("proc_sig.Open"));
  return out_node;
}

hnode_t* proc_sig__Open::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* proc_sig__Closed::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("proc_sig.Closed"));
  List<field*>* L = out_node->fields;
    if (this->params && len(this->params)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<param*>it(this->params); !it.Done(); it.Next()) {
        param* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("params"), x0));
    }

    if (this->rest) {  // MaybeType
      hnode_t* x1 = this->rest->PrettyTree();
      L->append(new field(new Str("rest"), x1));
    }

    if (this->block) {  // MaybeType
      hnode_t* x2 = this->block->PrettyTree();
      L->append(new field(new Str("block"), x2));
    }

  return out_node;
}

hnode_t* proc_sig__Closed::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("proc_sig.Closed"));
  List<field*>* L = out_node->fields;
    if (this->params && len(this->params)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<param*>it(this->params); !it.Done(); it.Next()) {
        param* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("params"), x0));
    }

    if (this->rest) {  // MaybeType
      hnode_t* x1 = this->rest->AbbreviatedTree();
      L->append(new field(new Str("rest"), x1));
    }

    if (this->block) {  // MaybeType
      hnode_t* x2 = this->block->AbbreviatedTree();
      L->append(new field(new Str("block"), x2));
    }

  return out_node;
}

hnode_t* proc_sig__Closed::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* proc_sig_t::PrettyTree() {
  switch (this->tag_()) {
  case proc_sig_e::Open: {
    proc_sig__Open* obj = static_cast<proc_sig__Open*>(this);
    return obj->PrettyTree();
  }
  case proc_sig_e::Closed: {
    proc_sig__Closed* obj = static_cast<proc_sig__Closed*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* proc_sig_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case proc_sig_e::Open: {
    proc_sig__Open* obj = static_cast<proc_sig__Open*>(this);
    return obj->_AbbreviatedTree();
  }
  case proc_sig_e::Closed: {
    proc_sig__Closed* obj = static_cast<proc_sig__Closed*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* proc_sig_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case proc_sig_e::Open: {
    proc_sig__Open* obj = static_cast<proc_sig__Open*>(this);
    return obj->AbbreviatedTree();
  }
  case proc_sig_e::Closed: {
    proc_sig__Closed* obj = static_cast<proc_sig__Closed*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* param::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("param"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->PrettyTree();
    L->append(new field(new Str("name"), x0));

    if (this->type) {  // MaybeType
      hnode_t* x1 = this->type->PrettyTree();
      L->append(new field(new Str("type"), x1));
    }

    if (this->default_val) {  // MaybeType
      hnode_t* x2 = this->default_val->PrettyTree();
      L->append(new field(new Str("default_val"), x2));
    }

  return out_node;
}

hnode_t* param::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("param"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->AbbreviatedTree();
    L->append(new field(new Str("name"), x0));

    if (this->type) {  // MaybeType
      hnode_t* x1 = this->type->AbbreviatedTree();
      L->append(new field(new Str("type"), x1));
    }

    if (this->default_val) {  // MaybeType
      hnode_t* x2 = this->default_val->AbbreviatedTree();
      L->append(new field(new Str("default_val"), x2));
    }

  return out_node;
}

hnode_t* param::AbbreviatedTree() {
  return _AbbreviatedTree();
}
const char* glob_part_str(int tag) {
  switch (tag) {
  case glob_part_e::Literal:
    return "glob_part.Literal";
  case glob_part_e::Operator:
    return "glob_part.Operator";
  case glob_part_e::CharClass:
    return "glob_part.CharClass";
  default:
    assert(0);
  }
}

hnode_t* glob_part__Literal::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("glob_part.Literal"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->id)), color_e::UserType);
    L->append(new field(new Str("id"), x0));

    hnode_t* x1 = runtime::NewLeaf(this->s, color_e::StringConst);
    L->append(new field(new Str("s"), x1));

  return out_node;
}

hnode_t* glob_part__Literal::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("glob_part.Literal"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->id)), color_e::UserType);
    L->append(new field(new Str("id"), x0));

    hnode_t* x1 = runtime::NewLeaf(this->s, color_e::StringConst);
    L->append(new field(new Str("s"), x1));

  return out_node;
}

hnode_t* glob_part__Literal::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* glob_part__Operator::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("glob_part.Operator"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

  return out_node;
}

hnode_t* glob_part__Operator::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("glob_part.Operator"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

  return out_node;
}

hnode_t* glob_part__Operator::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* glob_part__CharClass::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("glob_part.CharClass"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(this->negated ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("negated"), x0));

    if (this->strs && len(this->strs)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Str*>it(this->strs); !it.Done(); it.Next()) {
        Str* i1 = it.Value();
        x1->children->append(runtime::NewLeaf(i1, color_e::StringConst));
      }
      L->append(new field(new Str("strs"), x1));
    }

  return out_node;
}

hnode_t* glob_part__CharClass::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("glob_part.CharClass"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(this->negated ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("negated"), x0));

    if (this->strs && len(this->strs)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Str*>it(this->strs); !it.Done(); it.Next()) {
        Str* i1 = it.Value();
        x1->children->append(runtime::NewLeaf(i1, color_e::StringConst));
      }
      L->append(new field(new Str("strs"), x1));
    }

  return out_node;
}

hnode_t* glob_part__CharClass::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* glob_part_t::PrettyTree() {
  switch (this->tag_()) {
  case glob_part_e::Literal: {
    glob_part__Literal* obj = static_cast<glob_part__Literal*>(this);
    return obj->PrettyTree();
  }
  case glob_part_e::Operator: {
    glob_part__Operator* obj = static_cast<glob_part__Operator*>(this);
    return obj->PrettyTree();
  }
  case glob_part_e::CharClass: {
    glob_part__CharClass* obj = static_cast<glob_part__CharClass*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* glob_part_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case glob_part_e::Literal: {
    glob_part__Literal* obj = static_cast<glob_part__Literal*>(this);
    return obj->_AbbreviatedTree();
  }
  case glob_part_e::Operator: {
    glob_part__Operator* obj = static_cast<glob_part__Operator*>(this);
    return obj->_AbbreviatedTree();
  }
  case glob_part_e::CharClass: {
    glob_part__CharClass* obj = static_cast<glob_part__CharClass*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* glob_part_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case glob_part_e::Literal: {
    glob_part__Literal* obj = static_cast<glob_part__Literal*>(this);
    return obj->AbbreviatedTree();
  }
  case glob_part_e::Operator: {
    glob_part__Operator* obj = static_cast<glob_part__Operator*>(this);
    return obj->AbbreviatedTree();
  }
  case glob_part_e::CharClass: {
    glob_part__CharClass* obj = static_cast<glob_part__CharClass*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}
const char* printf_part_str(int tag) {
  switch (tag) {
  case printf_part_e::Literal:
    return "printf_part.Literal";
  case printf_part_e::Percent:
    return "printf_part.Percent";
  default:
    assert(0);
  }
}

hnode_t* printf_part__Literal::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("printf_part.Literal"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->token->PrettyTree();
    L->append(new field(new Str("token"), x0));

  return out_node;
}

hnode_t* printf_part__Literal::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("printf_part.Literal"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->token->AbbreviatedTree();
    L->append(new field(new Str("token"), x0));

  return out_node;
}

hnode_t* printf_part__Literal::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* printf_part__Percent::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("printf_part.Percent"));
  List<field*>* L = out_node->fields;
    if (this->flag) {  // MaybeType
      hnode_t* x0 = this->flag->PrettyTree();
      L->append(new field(new Str("flag"), x0));
    }

    if (this->width) {  // MaybeType
      hnode_t* x1 = this->width->PrettyTree();
      L->append(new field(new Str("width"), x1));
    }

    if (this->precision) {  // MaybeType
      hnode_t* x2 = this->precision->PrettyTree();
      L->append(new field(new Str("precision"), x2));
    }

    hnode_t* x3 = this->type->PrettyTree();
    L->append(new field(new Str("type"), x3));

  return out_node;
}

hnode_t* printf_part__Percent::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("printf_part.Percent"));
  List<field*>* L = out_node->fields;
    if (this->flag) {  // MaybeType
      hnode_t* x0 = this->flag->AbbreviatedTree();
      L->append(new field(new Str("flag"), x0));
    }

    if (this->width) {  // MaybeType
      hnode_t* x1 = this->width->AbbreviatedTree();
      L->append(new field(new Str("width"), x1));
    }

    if (this->precision) {  // MaybeType
      hnode_t* x2 = this->precision->AbbreviatedTree();
      L->append(new field(new Str("precision"), x2));
    }

    hnode_t* x3 = this->type->AbbreviatedTree();
    L->append(new field(new Str("type"), x3));

  return out_node;
}

hnode_t* printf_part__Percent::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* printf_part_t::PrettyTree() {
  switch (this->tag_()) {
  case printf_part_e::Literal: {
    printf_part__Literal* obj = static_cast<printf_part__Literal*>(this);
    return obj->PrettyTree();
  }
  case printf_part_e::Percent: {
    printf_part__Percent* obj = static_cast<printf_part__Percent*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* printf_part_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case printf_part_e::Literal: {
    printf_part__Literal* obj = static_cast<printf_part__Literal*>(this);
    return obj->_AbbreviatedTree();
  }
  case printf_part_e::Percent: {
    printf_part__Percent* obj = static_cast<printf_part__Percent*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* printf_part_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case printf_part_e::Literal: {
    printf_part__Literal* obj = static_cast<printf_part__Literal*>(this);
    return obj->AbbreviatedTree();
  }
  case printf_part_e::Percent: {
    printf_part__Percent* obj = static_cast<printf_part__Percent*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}
const char* expr_context_str(expr_context_e tag) {
  switch (tag) {
  case expr_context_e::Load:
    return "expr_context.Load";
  case expr_context_e::Store:
    return "expr_context.Store";
  case expr_context_e::Del:
    return "expr_context.Del";
  case expr_context_e::AugLoad:
    return "expr_context.AugLoad";
  case expr_context_e::AugStore:
    return "expr_context.AugStore";
  case expr_context_e::Param:
    return "expr_context.Param";
  default:
    assert(0);
  }
}
const char* type_expr_str(int tag) {
  switch (tag) {
  case type_expr_e::Simple:
    return "type_expr.Simple";
  case type_expr_e::Compound:
    return "type_expr.Compound";
  default:
    assert(0);
  }
}

hnode_t* type_expr__Simple::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("type_expr.Simple"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->PrettyTree();
    L->append(new field(new Str("name"), x0));

  return out_node;
}

hnode_t* type_expr__Simple::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("type_expr.Simple"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->AbbreviatedTree();
    L->append(new field(new Str("name"), x0));

  return out_node;
}

hnode_t* type_expr__Simple::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* type_expr__Compound::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("type_expr.Compound"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->PrettyTree();
    L->append(new field(new Str("name"), x0));

    if (this->params && len(this->params)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<type_expr_t*>it(this->params); !it.Done(); it.Next()) {
        type_expr_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("params"), x1));
    }

  return out_node;
}

hnode_t* type_expr__Compound::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("type_expr.Compound"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->AbbreviatedTree();
    L->append(new field(new Str("name"), x0));

    if (this->params && len(this->params)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<type_expr_t*>it(this->params); !it.Done(); it.Next()) {
        type_expr_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("params"), x1));
    }

  return out_node;
}

hnode_t* type_expr__Compound::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* type_expr_t::PrettyTree() {
  switch (this->tag_()) {
  case type_expr_e::Simple: {
    type_expr__Simple* obj = static_cast<type_expr__Simple*>(this);
    return obj->PrettyTree();
  }
  case type_expr_e::Compound: {
    type_expr__Compound* obj = static_cast<type_expr__Compound*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* type_expr_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case type_expr_e::Simple: {
    type_expr__Simple* obj = static_cast<type_expr__Simple*>(this);
    return obj->_AbbreviatedTree();
  }
  case type_expr_e::Compound: {
    type_expr__Compound* obj = static_cast<type_expr__Compound*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* type_expr_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case type_expr_e::Simple: {
    type_expr__Simple* obj = static_cast<type_expr__Simple*>(this);
    return obj->AbbreviatedTree();
  }
  case type_expr_e::Compound: {
    type_expr__Compound* obj = static_cast<type_expr__Compound*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* name_type::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("name_type"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->PrettyTree();
    L->append(new field(new Str("name"), x0));

    if (this->typ) {  // MaybeType
      hnode_t* x1 = this->typ->PrettyTree();
      L->append(new field(new Str("typ"), x1));
    }

  return out_node;
}

hnode_t* name_type::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("name_type"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->AbbreviatedTree();
    L->append(new field(new Str("name"), x0));

    if (this->typ) {  // MaybeType
      hnode_t* x1 = this->typ->AbbreviatedTree();
      L->append(new field(new Str("typ"), x1));
    }

  return out_node;
}

hnode_t* name_type::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* comprehension::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("comprehension"));
  List<field*>* L = out_node->fields;
    if (this->lhs && len(this->lhs)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<name_type*>it(this->lhs); !it.Done(); it.Next()) {
        name_type* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("lhs"), x0));
    }

    hnode_t* x1 = this->iter->PrettyTree();
    L->append(new field(new Str("iter"), x1));

    if (this->cond) {  // MaybeType
      hnode_t* x2 = this->cond->PrettyTree();
      L->append(new field(new Str("cond"), x2));
    }

  return out_node;
}

hnode_t* comprehension::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("comprehension"));
  List<field*>* L = out_node->fields;
    if (this->lhs && len(this->lhs)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<name_type*>it(this->lhs); !it.Done(); it.Next()) {
        name_type* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("lhs"), x0));
    }

    hnode_t* x1 = this->iter->AbbreviatedTree();
    L->append(new field(new Str("iter"), x1));

    if (this->cond) {  // MaybeType
      hnode_t* x2 = this->cond->AbbreviatedTree();
      L->append(new field(new Str("cond"), x2));
    }

  return out_node;
}

hnode_t* comprehension::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* named_arg::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("named_arg"));
  List<field*>* L = out_node->fields;
    if (this->name) {  // MaybeType
      hnode_t* x0 = this->name->PrettyTree();
      L->append(new field(new Str("name"), x0));
    }

    hnode_t* x1 = this->value->PrettyTree();
    L->append(new field(new Str("value"), x1));

  return out_node;
}

hnode_t* named_arg::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("named_arg"));
  List<field*>* L = out_node->fields;
    if (this->name) {  // MaybeType
      hnode_t* x0 = this->name->AbbreviatedTree();
      L->append(new field(new Str("name"), x0));
    }

    hnode_t* x1 = this->value->AbbreviatedTree();
    L->append(new field(new Str("value"), x1));

  return out_node;
}

hnode_t* named_arg::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* subscript::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("subscript"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->obj->PrettyTree();
    L->append(new field(new Str("obj"), x0));

    if (this->indices && len(this->indices)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<expr_t*>it(this->indices); !it.Done(); it.Next()) {
        expr_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("indices"), x1));
    }

  return out_node;
}

hnode_t* subscript::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("subscript"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->obj->AbbreviatedTree();
    L->append(new field(new Str("obj"), x0));

    if (this->indices && len(this->indices)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<expr_t*>it(this->indices); !it.Done(); it.Next()) {
        expr_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("indices"), x1));
    }

  return out_node;
}

hnode_t* subscript::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* attribute::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("attribute"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->obj->PrettyTree();
    L->append(new field(new Str("obj"), x0));

    hnode_t* x1 = this->op->PrettyTree();
    L->append(new field(new Str("op"), x1));

    hnode_t* x2 = this->attr->PrettyTree();
    L->append(new field(new Str("attr"), x2));

    hnode_t* x3 = new hnode__Leaf(new Str(expr_context_str(this->ctx)),
                                  color_e::TypeName);
    L->append(new field(new Str("ctx"), x3));

  return out_node;
}

hnode_t* attribute::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("attribute"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->obj->AbbreviatedTree();
    L->append(new field(new Str("obj"), x0));

    hnode_t* x1 = this->op->AbbreviatedTree();
    L->append(new field(new Str("op"), x1));

    hnode_t* x2 = this->attr->AbbreviatedTree();
    L->append(new field(new Str("attr"), x2));

    hnode_t* x3 = new hnode__Leaf(new Str(expr_context_str(this->ctx)),
                                  color_e::TypeName);
    L->append(new field(new Str("ctx"), x3));

  return out_node;
}

hnode_t* attribute::AbbreviatedTree() {
  return _AbbreviatedTree();
}
const char* place_expr_str(int tag) {
  switch (tag) {
  case place_expr_e::Var:
    return "place_expr.Var";
  case place_expr_e::Subscript:
    return "place_expr.Subscript";
  case place_expr_e::Attribute:
    return "place_expr.Attribute";
  default:
    assert(0);
  }
}

hnode_t* place_expr__Var::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("place_expr.Var"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->PrettyTree();
    L->append(new field(new Str("name"), x0));

  return out_node;
}

hnode_t* place_expr__Var::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("place_expr.Var"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->AbbreviatedTree();
    L->append(new field(new Str("name"), x0));

  return out_node;
}

hnode_t* place_expr__Var::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* place_expr_t::PrettyTree() {
  switch (this->tag_()) {
  case place_expr_e::Var: {
    place_expr__Var* obj = static_cast<place_expr__Var*>(this);
    return obj->PrettyTree();
  }
  case place_expr_e::Subscript: {
    subscript* obj = static_cast<subscript*>(this);
    return obj->PrettyTree();
  }
  case place_expr_e::Attribute: {
    attribute* obj = static_cast<attribute*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* place_expr_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case place_expr_e::Var: {
    place_expr__Var* obj = static_cast<place_expr__Var*>(this);
    return obj->_AbbreviatedTree();
  }
  case place_expr_e::Subscript: {
    subscript* obj = static_cast<subscript*>(this);
    return obj->_AbbreviatedTree();
  }
  case place_expr_e::Attribute: {
    attribute* obj = static_cast<attribute*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* place_expr_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case place_expr_e::Var: {
    place_expr__Var* obj = static_cast<place_expr__Var*>(this);
    return obj->AbbreviatedTree();
  }
  case place_expr_e::Subscript: {
    subscript* obj = static_cast<subscript*>(this);
    return obj->AbbreviatedTree();
  }
  case place_expr_e::Attribute: {
    attribute* obj = static_cast<attribute*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}
const char* expr_str(int tag) {
  switch (tag) {
  case expr_e::Var:
    return "expr.Var";
  case expr_e::Const:
    return "expr.Const";
  case expr_e::ShArrayLiteral:
    return "expr.ShArrayLiteral";
  case expr_e::ArrayLiteral:
    return "expr.ArrayLiteral";
  case expr_e::RegexLiteral:
    return "expr.RegexLiteral";
  case expr_e::SimpleVarSub:
    return "expr.SimpleVarSub";
  case expr_e::BracedVarSub:
    return "expr.BracedVarSub";
  case expr_e::CommandSub:
    return "expr.CommandSub";
  case expr_e::SingleQuoted:
    return "expr.SingleQuoted";
  case expr_e::DoubleQuoted:
    return "expr.DoubleQuoted";
  case expr_e::Lambda:
    return "expr.Lambda";
  case expr_e::Unary:
    return "expr.Unary";
  case expr_e::Binary:
    return "expr.Binary";
  case expr_e::Compare:
    return "expr.Compare";
  case expr_e::FuncCall:
    return "expr.FuncCall";
  case expr_e::IfExp:
    return "expr.IfExp";
  case expr_e::Tuple:
    return "expr.Tuple";
  case expr_e::List:
    return "expr.List";
  case expr_e::Dict:
    return "expr.Dict";
  case expr_e::Implicit:
    return "expr.Implicit";
  case expr_e::ListComp:
    return "expr.ListComp";
  case expr_e::DictComp:
    return "expr.DictComp";
  case expr_e::GeneratorExp:
    return "expr.GeneratorExp";
  case expr_e::Range:
    return "expr.Range";
  case expr_e::Slice:
    return "expr.Slice";
  case expr_e::Subscript:
    return "expr.Subscript";
  case expr_e::Attribute:
    return "expr.Attribute";
  case expr_e::Spread:
    return "expr.Spread";
  default:
    assert(0);
  }
}

hnode_t* expr__Var::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Var"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->PrettyTree();
    L->append(new field(new Str("name"), x0));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x1));
    }

  return out_node;
}

hnode_t* expr__Var::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Var"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->AbbreviatedTree();
    L->append(new field(new Str("name"), x0));

  return out_node;
}

hnode_t* expr__Var::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__Const::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Const"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->c->PrettyTree();
    L->append(new field(new Str("c"), x0));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x1));
    }

  return out_node;
}

hnode_t* expr__Const::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Const"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->c->AbbreviatedTree();
    L->append(new field(new Str("c"), x0));

  return out_node;
}

hnode_t* expr__Const::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__ArrayLiteral::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.ArrayLiteral"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->PrettyTree();
    L->append(new field(new Str("left"), x0));

    if (this->items && len(this->items)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<expr_t*>it(this->items); !it.Done(); it.Next()) {
        expr_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("items"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* expr__ArrayLiteral::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.ArrayLiteral"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->AbbreviatedTree();
    L->append(new field(new Str("left"), x0));

    if (this->items && len(this->items)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<expr_t*>it(this->items); !it.Done(); it.Next()) {
        expr_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("items"), x1));
    }

  return out_node;
}

hnode_t* expr__ArrayLiteral::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__RegexLiteral::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.RegexLiteral"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->PrettyTree();
    L->append(new field(new Str("left"), x0));

    hnode_t* x1 = this->regex->PrettyTree();
    L->append(new field(new Str("regex"), x1));

    if (this->flags && len(this->flags)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Token*>it(this->flags); !it.Done(); it.Next()) {
        Token* i2 = it.Value();
        x2->children->append(i2->PrettyTree());
      }
      L->append(new field(new Str("flags"), x2));
    }

    if (this->trans_pref) {  // MaybeType
      hnode_t* x3 = this->trans_pref->PrettyTree();
      L->append(new field(new Str("trans_pref"), x3));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x4 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i4 = it.Value();
        x4->children->append(new hnode__Leaf(str(i4), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x4));
    }

  return out_node;
}

hnode_t* expr__RegexLiteral::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.RegexLiteral"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->AbbreviatedTree();
    L->append(new field(new Str("left"), x0));

    hnode_t* x1 = this->regex->AbbreviatedTree();
    L->append(new field(new Str("regex"), x1));

    if (this->flags && len(this->flags)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Token*>it(this->flags); !it.Done(); it.Next()) {
        Token* i2 = it.Value();
        x2->children->append(i2->AbbreviatedTree());
      }
      L->append(new field(new Str("flags"), x2));
    }

    if (this->trans_pref) {  // MaybeType
      hnode_t* x3 = this->trans_pref->AbbreviatedTree();
      L->append(new field(new Str("trans_pref"), x3));
    }

  return out_node;
}

hnode_t* expr__RegexLiteral::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__Lambda::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Lambda"));
  List<field*>* L = out_node->fields;
    if (this->params && len(this->params)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<name_type*>it(this->params); !it.Done(); it.Next()) {
        name_type* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("params"), x0));
    }

    hnode_t* x1 = this->body->PrettyTree();
    L->append(new field(new Str("body"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* expr__Lambda::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Lambda"));
  List<field*>* L = out_node->fields;
    if (this->params && len(this->params)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<name_type*>it(this->params); !it.Done(); it.Next()) {
        name_type* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("params"), x0));
    }

    hnode_t* x1 = this->body->AbbreviatedTree();
    L->append(new field(new Str("body"), x1));

  return out_node;
}

hnode_t* expr__Lambda::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__Unary::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Unary"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->op->PrettyTree();
    L->append(new field(new Str("op"), x0));

    hnode_t* x1 = this->child->PrettyTree();
    L->append(new field(new Str("child"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* expr__Unary::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Unary"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->op->AbbreviatedTree();
    L->append(new field(new Str("op"), x0));

    hnode_t* x1 = this->child->AbbreviatedTree();
    L->append(new field(new Str("child"), x1));

  return out_node;
}

hnode_t* expr__Unary::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__Binary::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Binary"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->op->PrettyTree();
    L->append(new field(new Str("op"), x0));

    hnode_t* x1 = this->left->PrettyTree();
    L->append(new field(new Str("left"), x1));

    hnode_t* x2 = this->right->PrettyTree();
    L->append(new field(new Str("right"), x2));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i3 = it.Value();
        x3->children->append(new hnode__Leaf(str(i3), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x3));
    }

  return out_node;
}

hnode_t* expr__Binary::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Binary"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->op->AbbreviatedTree();
    L->append(new field(new Str("op"), x0));

    hnode_t* x1 = this->left->AbbreviatedTree();
    L->append(new field(new Str("left"), x1));

    hnode_t* x2 = this->right->AbbreviatedTree();
    L->append(new field(new Str("right"), x2));

  return out_node;
}

hnode_t* expr__Binary::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__Compare::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Compare"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->PrettyTree();
    L->append(new field(new Str("left"), x0));

    if (this->ops && len(this->ops)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<speck*>it(this->ops); !it.Done(); it.Next()) {
        speck* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("ops"), x1));
    }

    if (this->comparators && len(this->comparators)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<expr_t*>it(this->comparators); !it.Done(); it.Next()) {
        expr_t* i2 = it.Value();
        x2->children->append(i2->PrettyTree());
      }
      L->append(new field(new Str("comparators"), x2));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i3 = it.Value();
        x3->children->append(new hnode__Leaf(str(i3), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x3));
    }

  return out_node;
}

hnode_t* expr__Compare::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Compare"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->left->AbbreviatedTree();
    L->append(new field(new Str("left"), x0));

    if (this->ops && len(this->ops)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<speck*>it(this->ops); !it.Done(); it.Next()) {
        speck* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("ops"), x1));
    }

    if (this->comparators && len(this->comparators)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<expr_t*>it(this->comparators); !it.Done(); it.Next()) {
        expr_t* i2 = it.Value();
        x2->children->append(i2->AbbreviatedTree());
      }
      L->append(new field(new Str("comparators"), x2));
    }

  return out_node;
}

hnode_t* expr__Compare::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__FuncCall::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.FuncCall"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->func->PrettyTree();
    L->append(new field(new Str("func"), x0));

    hnode_t* x1 = this->args->PrettyTree();
    L->append(new field(new Str("args"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* expr__FuncCall::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.FuncCall"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->func->AbbreviatedTree();
    L->append(new field(new Str("func"), x0));

    hnode_t* x1 = this->args->AbbreviatedTree();
    L->append(new field(new Str("args"), x1));

  return out_node;
}

hnode_t* expr__FuncCall::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__IfExp::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.IfExp"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->test->PrettyTree();
    L->append(new field(new Str("test"), x0));

    hnode_t* x1 = this->body->PrettyTree();
    L->append(new field(new Str("body"), x1));

    hnode_t* x2 = this->orelse->PrettyTree();
    L->append(new field(new Str("orelse"), x2));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i3 = it.Value();
        x3->children->append(new hnode__Leaf(str(i3), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x3));
    }

  return out_node;
}

hnode_t* expr__IfExp::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.IfExp"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->test->AbbreviatedTree();
    L->append(new field(new Str("test"), x0));

    hnode_t* x1 = this->body->AbbreviatedTree();
    L->append(new field(new Str("body"), x1));

    hnode_t* x2 = this->orelse->AbbreviatedTree();
    L->append(new field(new Str("orelse"), x2));

  return out_node;
}

hnode_t* expr__IfExp::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__Tuple::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Tuple"));
  List<field*>* L = out_node->fields;
    if (this->elts && len(this->elts)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<expr_t*>it(this->elts); !it.Done(); it.Next()) {
        expr_t* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("elts"), x0));
    }

    hnode_t* x1 = new hnode__Leaf(new Str(expr_context_str(this->ctx)),
                                  color_e::TypeName);
    L->append(new field(new Str("ctx"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* expr__Tuple::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Tuple"));
  List<field*>* L = out_node->fields;
    if (this->elts && len(this->elts)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<expr_t*>it(this->elts); !it.Done(); it.Next()) {
        expr_t* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("elts"), x0));
    }

    hnode_t* x1 = new hnode__Leaf(new Str(expr_context_str(this->ctx)),
                                  color_e::TypeName);
    L->append(new field(new Str("ctx"), x1));

  return out_node;
}

hnode_t* expr__Tuple::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__List::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.List"));
  List<field*>* L = out_node->fields;
    if (this->elts && len(this->elts)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<expr_t*>it(this->elts); !it.Done(); it.Next()) {
        expr_t* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("elts"), x0));
    }

    hnode_t* x1 = new hnode__Leaf(new Str(expr_context_str(this->ctx)),
                                  color_e::TypeName);
    L->append(new field(new Str("ctx"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* expr__List::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.List"));
  List<field*>* L = out_node->fields;
    if (this->elts && len(this->elts)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<expr_t*>it(this->elts); !it.Done(); it.Next()) {
        expr_t* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("elts"), x0));
    }

    hnode_t* x1 = new hnode__Leaf(new Str(expr_context_str(this->ctx)),
                                  color_e::TypeName);
    L->append(new field(new Str("ctx"), x1));

  return out_node;
}

hnode_t* expr__List::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__Dict::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Dict"));
  List<field*>* L = out_node->fields;
    if (this->keys && len(this->keys)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<expr_t*>it(this->keys); !it.Done(); it.Next()) {
        expr_t* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("keys"), x0));
    }

    if (this->values && len(this->values)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<expr_t*>it(this->values); !it.Done(); it.Next()) {
        expr_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("values"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* expr__Dict::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Dict"));
  List<field*>* L = out_node->fields;
    if (this->keys && len(this->keys)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<expr_t*>it(this->keys); !it.Done(); it.Next()) {
        expr_t* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("keys"), x0));
    }

    if (this->values && len(this->values)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<expr_t*>it(this->values); !it.Done(); it.Next()) {
        expr_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("values"), x1));
    }

  return out_node;
}

hnode_t* expr__Dict::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__Implicit::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Implicit"));
  List<field*>* L = out_node->fields;
    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i0 = it.Value();
        x0->children->append(new hnode__Leaf(str(i0), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x0));
    }

  return out_node;
}

hnode_t* expr__Implicit::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Implicit"));
  return out_node;
}

hnode_t* expr__Implicit::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__ListComp::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.ListComp"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->elt->PrettyTree();
    L->append(new field(new Str("elt"), x0));

    if (this->generators && len(this->generators)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<comprehension*>it(this->generators); !it.Done(); it.Next())
           {
        comprehension* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("generators"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* expr__ListComp::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.ListComp"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->elt->AbbreviatedTree();
    L->append(new field(new Str("elt"), x0));

    if (this->generators && len(this->generators)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<comprehension*>it(this->generators); !it.Done(); it.Next())
           {
        comprehension* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("generators"), x1));
    }

  return out_node;
}

hnode_t* expr__ListComp::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__DictComp::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.DictComp"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->key->PrettyTree();
    L->append(new field(new Str("key"), x0));

    hnode_t* x1 = this->value->PrettyTree();
    L->append(new field(new Str("value"), x1));

    if (this->generators && len(this->generators)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<comprehension*>it(this->generators); !it.Done(); it.Next())
           {
        comprehension* i2 = it.Value();
        x2->children->append(i2->PrettyTree());
      }
      L->append(new field(new Str("generators"), x2));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i3 = it.Value();
        x3->children->append(new hnode__Leaf(str(i3), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x3));
    }

  return out_node;
}

hnode_t* expr__DictComp::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.DictComp"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->key->AbbreviatedTree();
    L->append(new field(new Str("key"), x0));

    hnode_t* x1 = this->value->AbbreviatedTree();
    L->append(new field(new Str("value"), x1));

    if (this->generators && len(this->generators)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<comprehension*>it(this->generators); !it.Done(); it.Next())
           {
        comprehension* i2 = it.Value();
        x2->children->append(i2->AbbreviatedTree());
      }
      L->append(new field(new Str("generators"), x2));
    }

  return out_node;
}

hnode_t* expr__DictComp::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__GeneratorExp::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.GeneratorExp"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->elt->PrettyTree();
    L->append(new field(new Str("elt"), x0));

    if (this->generators && len(this->generators)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<comprehension*>it(this->generators); !it.Done(); it.Next())
           {
        comprehension* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("generators"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* expr__GeneratorExp::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.GeneratorExp"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->elt->AbbreviatedTree();
    L->append(new field(new Str("elt"), x0));

    if (this->generators && len(this->generators)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<comprehension*>it(this->generators); !it.Done(); it.Next())
           {
        comprehension* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("generators"), x1));
    }

  return out_node;
}

hnode_t* expr__GeneratorExp::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__Range::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Range"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->lower->PrettyTree();
    L->append(new field(new Str("lower"), x0));

    hnode_t* x1 = this->upper->PrettyTree();
    L->append(new field(new Str("upper"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* expr__Range::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Range"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->lower->AbbreviatedTree();
    L->append(new field(new Str("lower"), x0));

    hnode_t* x1 = this->upper->AbbreviatedTree();
    L->append(new field(new Str("upper"), x1));

  return out_node;
}

hnode_t* expr__Range::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__Slice::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Slice"));
  List<field*>* L = out_node->fields;
    if (this->lower) {  // MaybeType
      hnode_t* x0 = this->lower->PrettyTree();
      L->append(new field(new Str("lower"), x0));
    }

    if (this->upper) {  // MaybeType
      hnode_t* x1 = this->upper->PrettyTree();
      L->append(new field(new Str("upper"), x1));
    }

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* expr__Slice::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Slice"));
  List<field*>* L = out_node->fields;
    if (this->lower) {  // MaybeType
      hnode_t* x0 = this->lower->AbbreviatedTree();
      L->append(new field(new Str("lower"), x0));
    }

    if (this->upper) {  // MaybeType
      hnode_t* x1 = this->upper->AbbreviatedTree();
      L->append(new field(new Str("upper"), x1));
    }

  return out_node;
}

hnode_t* expr__Slice::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr__Spread::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Spread"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->child->PrettyTree();
    L->append(new field(new Str("child"), x0));

    hnode_t* x1 = new hnode__Leaf(new Str(expr_context_str(this->ctx)),
                                  color_e::TypeName);
    L->append(new field(new Str("ctx"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int>it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* expr__Spread::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("expr.Spread"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->child->AbbreviatedTree();
    L->append(new field(new Str("child"), x0));

    hnode_t* x1 = new hnode__Leaf(new Str(expr_context_str(this->ctx)),
                                  color_e::TypeName);
    L->append(new field(new Str("ctx"), x1));

  return out_node;
}

hnode_t* expr__Spread::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* expr_t::PrettyTree() {
  switch (this->tag_()) {
  case expr_e::Var: {
    expr__Var* obj = static_cast<expr__Var*>(this);
    return obj->PrettyTree();
  }
  case expr_e::Const: {
    expr__Const* obj = static_cast<expr__Const*>(this);
    return obj->PrettyTree();
  }
  case expr_e::ShArrayLiteral: {
    sh_array_literal* obj = static_cast<sh_array_literal*>(this);
    return obj->PrettyTree();
  }
  case expr_e::ArrayLiteral: {
    expr__ArrayLiteral* obj = static_cast<expr__ArrayLiteral*>(this);
    return obj->PrettyTree();
  }
  case expr_e::RegexLiteral: {
    expr__RegexLiteral* obj = static_cast<expr__RegexLiteral*>(this);
    return obj->PrettyTree();
  }
  case expr_e::SimpleVarSub: {
    simple_var_sub* obj = static_cast<simple_var_sub*>(this);
    return obj->PrettyTree();
  }
  case expr_e::BracedVarSub: {
    braced_var_sub* obj = static_cast<braced_var_sub*>(this);
    return obj->PrettyTree();
  }
  case expr_e::CommandSub: {
    command_sub* obj = static_cast<command_sub*>(this);
    return obj->PrettyTree();
  }
  case expr_e::SingleQuoted: {
    single_quoted* obj = static_cast<single_quoted*>(this);
    return obj->PrettyTree();
  }
  case expr_e::DoubleQuoted: {
    double_quoted* obj = static_cast<double_quoted*>(this);
    return obj->PrettyTree();
  }
  case expr_e::Lambda: {
    expr__Lambda* obj = static_cast<expr__Lambda*>(this);
    return obj->PrettyTree();
  }
  case expr_e::Unary: {
    expr__Unary* obj = static_cast<expr__Unary*>(this);
    return obj->PrettyTree();
  }
  case expr_e::Binary: {
    expr__Binary* obj = static_cast<expr__Binary*>(this);
    return obj->PrettyTree();
  }
  case expr_e::Compare: {
    expr__Compare* obj = static_cast<expr__Compare*>(this);
    return obj->PrettyTree();
  }
  case expr_e::FuncCall: {
    expr__FuncCall* obj = static_cast<expr__FuncCall*>(this);
    return obj->PrettyTree();
  }
  case expr_e::IfExp: {
    expr__IfExp* obj = static_cast<expr__IfExp*>(this);
    return obj->PrettyTree();
  }
  case expr_e::Tuple: {
    expr__Tuple* obj = static_cast<expr__Tuple*>(this);
    return obj->PrettyTree();
  }
  case expr_e::List: {
    expr__List* obj = static_cast<expr__List*>(this);
    return obj->PrettyTree();
  }
  case expr_e::Dict: {
    expr__Dict* obj = static_cast<expr__Dict*>(this);
    return obj->PrettyTree();
  }
  case expr_e::Implicit: {
    expr__Implicit* obj = static_cast<expr__Implicit*>(this);
    return obj->PrettyTree();
  }
  case expr_e::ListComp: {
    expr__ListComp* obj = static_cast<expr__ListComp*>(this);
    return obj->PrettyTree();
  }
  case expr_e::DictComp: {
    expr__DictComp* obj = static_cast<expr__DictComp*>(this);
    return obj->PrettyTree();
  }
  case expr_e::GeneratorExp: {
    expr__GeneratorExp* obj = static_cast<expr__GeneratorExp*>(this);
    return obj->PrettyTree();
  }
  case expr_e::Range: {
    expr__Range* obj = static_cast<expr__Range*>(this);
    return obj->PrettyTree();
  }
  case expr_e::Slice: {
    expr__Slice* obj = static_cast<expr__Slice*>(this);
    return obj->PrettyTree();
  }
  case expr_e::Subscript: {
    subscript* obj = static_cast<subscript*>(this);
    return obj->PrettyTree();
  }
  case expr_e::Attribute: {
    attribute* obj = static_cast<attribute*>(this);
    return obj->PrettyTree();
  }
  case expr_e::Spread: {
    expr__Spread* obj = static_cast<expr__Spread*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* expr_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case expr_e::Var: {
    expr__Var* obj = static_cast<expr__Var*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::Const: {
    expr__Const* obj = static_cast<expr__Const*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::ShArrayLiteral: {
    sh_array_literal* obj = static_cast<sh_array_literal*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::ArrayLiteral: {
    expr__ArrayLiteral* obj = static_cast<expr__ArrayLiteral*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::RegexLiteral: {
    expr__RegexLiteral* obj = static_cast<expr__RegexLiteral*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::SimpleVarSub: {
    simple_var_sub* obj = static_cast<simple_var_sub*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::BracedVarSub: {
    braced_var_sub* obj = static_cast<braced_var_sub*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::CommandSub: {
    command_sub* obj = static_cast<command_sub*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::SingleQuoted: {
    single_quoted* obj = static_cast<single_quoted*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::DoubleQuoted: {
    double_quoted* obj = static_cast<double_quoted*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::Lambda: {
    expr__Lambda* obj = static_cast<expr__Lambda*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::Unary: {
    expr__Unary* obj = static_cast<expr__Unary*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::Binary: {
    expr__Binary* obj = static_cast<expr__Binary*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::Compare: {
    expr__Compare* obj = static_cast<expr__Compare*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::FuncCall: {
    expr__FuncCall* obj = static_cast<expr__FuncCall*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::IfExp: {
    expr__IfExp* obj = static_cast<expr__IfExp*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::Tuple: {
    expr__Tuple* obj = static_cast<expr__Tuple*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::List: {
    expr__List* obj = static_cast<expr__List*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::Dict: {
    expr__Dict* obj = static_cast<expr__Dict*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::Implicit: {
    expr__Implicit* obj = static_cast<expr__Implicit*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::ListComp: {
    expr__ListComp* obj = static_cast<expr__ListComp*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::DictComp: {
    expr__DictComp* obj = static_cast<expr__DictComp*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::GeneratorExp: {
    expr__GeneratorExp* obj = static_cast<expr__GeneratorExp*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::Range: {
    expr__Range* obj = static_cast<expr__Range*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::Slice: {
    expr__Slice* obj = static_cast<expr__Slice*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::Subscript: {
    subscript* obj = static_cast<subscript*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::Attribute: {
    attribute* obj = static_cast<attribute*>(this);
    return obj->_AbbreviatedTree();
  }
  case expr_e::Spread: {
    expr__Spread* obj = static_cast<expr__Spread*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* expr_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case expr_e::Var: {
    expr__Var* obj = static_cast<expr__Var*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::Const: {
    expr__Const* obj = static_cast<expr__Const*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::ShArrayLiteral: {
    sh_array_literal* obj = static_cast<sh_array_literal*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::ArrayLiteral: {
    expr__ArrayLiteral* obj = static_cast<expr__ArrayLiteral*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::RegexLiteral: {
    expr__RegexLiteral* obj = static_cast<expr__RegexLiteral*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::SimpleVarSub: {
    simple_var_sub* obj = static_cast<simple_var_sub*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::BracedVarSub: {
    braced_var_sub* obj = static_cast<braced_var_sub*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::CommandSub: {
    command_sub* obj = static_cast<command_sub*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::SingleQuoted: {
    single_quoted* obj = static_cast<single_quoted*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::DoubleQuoted: {
    double_quoted* obj = static_cast<double_quoted*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::Lambda: {
    expr__Lambda* obj = static_cast<expr__Lambda*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::Unary: {
    expr__Unary* obj = static_cast<expr__Unary*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::Binary: {
    expr__Binary* obj = static_cast<expr__Binary*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::Compare: {
    expr__Compare* obj = static_cast<expr__Compare*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::FuncCall: {
    expr__FuncCall* obj = static_cast<expr__FuncCall*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::IfExp: {
    expr__IfExp* obj = static_cast<expr__IfExp*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::Tuple: {
    expr__Tuple* obj = static_cast<expr__Tuple*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::List: {
    expr__List* obj = static_cast<expr__List*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::Dict: {
    expr__Dict* obj = static_cast<expr__Dict*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::Implicit: {
    expr__Implicit* obj = static_cast<expr__Implicit*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::ListComp: {
    expr__ListComp* obj = static_cast<expr__ListComp*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::DictComp: {
    expr__DictComp* obj = static_cast<expr__DictComp*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::GeneratorExp: {
    expr__GeneratorExp* obj = static_cast<expr__GeneratorExp*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::Range: {
    expr__Range* obj = static_cast<expr__Range*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::Slice: {
    expr__Slice* obj = static_cast<expr__Slice*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::Subscript: {
    subscript* obj = static_cast<subscript*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::Attribute: {
    attribute* obj = static_cast<attribute*>(this);
    return obj->AbbreviatedTree();
  }
  case expr_e::Spread: {
    expr__Spread* obj = static_cast<expr__Spread*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* posix_class::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("posix_class"));
  List<field*>* L = out_node->fields;
    if (this->negated) {  // MaybeType
      hnode_t* x0 = this->negated->PrettyTree();
      L->append(new field(new Str("negated"), x0));
    }

    hnode_t* x1 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x1));

  return out_node;
}

hnode_t* posix_class::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("posix_class"));
  List<field*>* L = out_node->fields;
    if (this->negated) {  // MaybeType
      hnode_t* x0 = this->negated->AbbreviatedTree();
      L->append(new field(new Str("negated"), x0));
    }

    hnode_t* x1 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x1));

  return out_node;
}

hnode_t* posix_class::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* perl_class::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("perl_class"));
  List<field*>* L = out_node->fields;
    if (this->negated) {  // MaybeType
      hnode_t* x0 = this->negated->PrettyTree();
      L->append(new field(new Str("negated"), x0));
    }

    hnode_t* x1 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x1));

  return out_node;
}

hnode_t* perl_class::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("perl_class"));
  List<field*>* L = out_node->fields;
    if (this->negated) {  // MaybeType
      hnode_t* x0 = this->negated->AbbreviatedTree();
      L->append(new field(new Str("negated"), x0));
    }

    hnode_t* x1 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x1));

  return out_node;
}

hnode_t* perl_class::AbbreviatedTree() {
  return _AbbreviatedTree();
}
const char* class_literal_term_str(int tag) {
  switch (tag) {
  case class_literal_term_e::PosixClass:
    return "class_literal_term.PosixClass";
  case class_literal_term_e::PerlClass:
    return "class_literal_term.PerlClass";
  case class_literal_term_e::Range:
    return "class_literal_term.Range";
  case class_literal_term_e::CharLiteral:
    return "class_literal_term.CharLiteral";
  case class_literal_term_e::SimpleVarSub:
    return "class_literal_term.SimpleVarSub";
  case class_literal_term_e::BracedVarSub:
    return "class_literal_term.BracedVarSub";
  case class_literal_term_e::SingleQuoted:
    return "class_literal_term.SingleQuoted";
  case class_literal_term_e::DoubleQuoted:
    return "class_literal_term.DoubleQuoted";
  case class_literal_term_e::ByteSet:
    return "class_literal_term.ByteSet";
  case class_literal_term_e::CodePoint:
    return "class_literal_term.CodePoint";
  default:
    assert(0);
  }
}

hnode_t* class_literal_term__Range::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("class_literal_term.Range"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->start, color_e::StringConst);
    L->append(new field(new Str("start"), x0));

    hnode_t* x1 = runtime::NewLeaf(this->end, color_e::StringConst);
    L->append(new field(new Str("end"), x1));

  return out_node;
}

hnode_t* class_literal_term__Range::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("class_literal_term.Range"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->start, color_e::StringConst);
    L->append(new field(new Str("start"), x0));

    hnode_t* x1 = runtime::NewLeaf(this->end, color_e::StringConst);
    L->append(new field(new Str("end"), x1));

  return out_node;
}

hnode_t* class_literal_term__Range::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* class_literal_term__CharLiteral::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("class_literal_term.CharLiteral"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->tok->PrettyTree();
    L->append(new field(new Str("tok"), x0));

  return out_node;
}

hnode_t* class_literal_term__CharLiteral::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("class_literal_term.CharLiteral"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->tok->AbbreviatedTree();
    L->append(new field(new Str("tok"), x0));

  return out_node;
}

hnode_t* class_literal_term__CharLiteral::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* class_literal_term__ByteSet::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("class_literal_term.ByteSet"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->bytes, color_e::StringConst);
    L->append(new field(new Str("bytes"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->spid), color_e::OtherConst);
    L->append(new field(new Str("spid"), x1));

  return out_node;
}

hnode_t* class_literal_term__ByteSet::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("class_literal_term.ByteSet"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->bytes, color_e::StringConst);
    L->append(new field(new Str("bytes"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->spid), color_e::OtherConst);
    L->append(new field(new Str("spid"), x1));

  return out_node;
}

hnode_t* class_literal_term__ByteSet::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* class_literal_term__CodePoint::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("class_literal_term.CodePoint"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->i), color_e::OtherConst);
    L->append(new field(new Str("i"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->spid), color_e::OtherConst);
    L->append(new field(new Str("spid"), x1));

  return out_node;
}

hnode_t* class_literal_term__CodePoint::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new
                                               Str("class_literal_term.CodePoint"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->i), color_e::OtherConst);
    L->append(new field(new Str("i"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->spid), color_e::OtherConst);
    L->append(new field(new Str("spid"), x1));

  return out_node;
}

hnode_t* class_literal_term__CodePoint::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* class_literal_term_t::PrettyTree() {
  switch (this->tag_()) {
  case class_literal_term_e::PosixClass: {
    posix_class* obj = static_cast<posix_class*>(this);
    return obj->PrettyTree();
  }
  case class_literal_term_e::PerlClass: {
    perl_class* obj = static_cast<perl_class*>(this);
    return obj->PrettyTree();
  }
  case class_literal_term_e::Range: {
    class_literal_term__Range* obj =
static_cast<class_literal_term__Range*>(this);
    return obj->PrettyTree();
  }
  case class_literal_term_e::CharLiteral: {
    class_literal_term__CharLiteral* obj =
static_cast<class_literal_term__CharLiteral*>(this);
    return obj->PrettyTree();
  }
  case class_literal_term_e::SimpleVarSub: {
    simple_var_sub* obj = static_cast<simple_var_sub*>(this);
    return obj->PrettyTree();
  }
  case class_literal_term_e::BracedVarSub: {
    braced_var_sub* obj = static_cast<braced_var_sub*>(this);
    return obj->PrettyTree();
  }
  case class_literal_term_e::SingleQuoted: {
    single_quoted* obj = static_cast<single_quoted*>(this);
    return obj->PrettyTree();
  }
  case class_literal_term_e::DoubleQuoted: {
    double_quoted* obj = static_cast<double_quoted*>(this);
    return obj->PrettyTree();
  }
  case class_literal_term_e::ByteSet: {
    class_literal_term__ByteSet* obj =
static_cast<class_literal_term__ByteSet*>(this);
    return obj->PrettyTree();
  }
  case class_literal_term_e::CodePoint: {
    class_literal_term__CodePoint* obj =
static_cast<class_literal_term__CodePoint*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* class_literal_term_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case class_literal_term_e::PosixClass: {
    posix_class* obj = static_cast<posix_class*>(this);
    return obj->_AbbreviatedTree();
  }
  case class_literal_term_e::PerlClass: {
    perl_class* obj = static_cast<perl_class*>(this);
    return obj->_AbbreviatedTree();
  }
  case class_literal_term_e::Range: {
    class_literal_term__Range* obj =
static_cast<class_literal_term__Range*>(this);
    return obj->_AbbreviatedTree();
  }
  case class_literal_term_e::CharLiteral: {
    class_literal_term__CharLiteral* obj =
static_cast<class_literal_term__CharLiteral*>(this);
    return obj->_AbbreviatedTree();
  }
  case class_literal_term_e::SimpleVarSub: {
    simple_var_sub* obj = static_cast<simple_var_sub*>(this);
    return obj->_AbbreviatedTree();
  }
  case class_literal_term_e::BracedVarSub: {
    braced_var_sub* obj = static_cast<braced_var_sub*>(this);
    return obj->_AbbreviatedTree();
  }
  case class_literal_term_e::SingleQuoted: {
    single_quoted* obj = static_cast<single_quoted*>(this);
    return obj->_AbbreviatedTree();
  }
  case class_literal_term_e::DoubleQuoted: {
    double_quoted* obj = static_cast<double_quoted*>(this);
    return obj->_AbbreviatedTree();
  }
  case class_literal_term_e::ByteSet: {
    class_literal_term__ByteSet* obj =
static_cast<class_literal_term__ByteSet*>(this);
    return obj->_AbbreviatedTree();
  }
  case class_literal_term_e::CodePoint: {
    class_literal_term__CodePoint* obj =
static_cast<class_literal_term__CodePoint*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* class_literal_term_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case class_literal_term_e::PosixClass: {
    posix_class* obj = static_cast<posix_class*>(this);
    return obj->AbbreviatedTree();
  }
  case class_literal_term_e::PerlClass: {
    perl_class* obj = static_cast<perl_class*>(this);
    return obj->AbbreviatedTree();
  }
  case class_literal_term_e::Range: {
    class_literal_term__Range* obj =
static_cast<class_literal_term__Range*>(this);
    return obj->AbbreviatedTree();
  }
  case class_literal_term_e::CharLiteral: {
    class_literal_term__CharLiteral* obj =
static_cast<class_literal_term__CharLiteral*>(this);
    return obj->AbbreviatedTree();
  }
  case class_literal_term_e::SimpleVarSub: {
    simple_var_sub* obj = static_cast<simple_var_sub*>(this);
    return obj->AbbreviatedTree();
  }
  case class_literal_term_e::BracedVarSub: {
    braced_var_sub* obj = static_cast<braced_var_sub*>(this);
    return obj->AbbreviatedTree();
  }
  case class_literal_term_e::SingleQuoted: {
    single_quoted* obj = static_cast<single_quoted*>(this);
    return obj->AbbreviatedTree();
  }
  case class_literal_term_e::DoubleQuoted: {
    double_quoted* obj = static_cast<double_quoted*>(this);
    return obj->AbbreviatedTree();
  }
  case class_literal_term_e::ByteSet: {
    class_literal_term__ByteSet* obj =
static_cast<class_literal_term__ByteSet*>(this);
    return obj->AbbreviatedTree();
  }
  case class_literal_term_e::CodePoint: {
    class_literal_term__CodePoint* obj =
static_cast<class_literal_term__CodePoint*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}
const char* re_repeat_str(int tag) {
  switch (tag) {
  case re_repeat_e::Op:
    return "re_repeat.Op";
  case re_repeat_e::Num:
    return "re_repeat.Num";
  case re_repeat_e::Range:
    return "re_repeat.Range";
  default:
    assert(0);
  }
}

hnode_t* re_repeat__Op::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re_repeat.Op"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->op->PrettyTree();
    L->append(new field(new Str("op"), x0));

  return out_node;
}

hnode_t* re_repeat__Op::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re_repeat.Op"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->op->AbbreviatedTree();
    L->append(new field(new Str("op"), x0));

  return out_node;
}

hnode_t* re_repeat__Op::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* re_repeat__Num::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re_repeat.Num"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->times->PrettyTree();
    L->append(new field(new Str("times"), x0));

  return out_node;
}

hnode_t* re_repeat__Num::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re_repeat.Num"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->times->AbbreviatedTree();
    L->append(new field(new Str("times"), x0));

  return out_node;
}

hnode_t* re_repeat__Num::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* re_repeat__Range::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re_repeat.Range"));
  List<field*>* L = out_node->fields;
    if (this->lower) {  // MaybeType
      hnode_t* x0 = this->lower->PrettyTree();
      L->append(new field(new Str("lower"), x0));
    }

    if (this->upper) {  // MaybeType
      hnode_t* x1 = this->upper->PrettyTree();
      L->append(new field(new Str("upper"), x1));
    }

  return out_node;
}

hnode_t* re_repeat__Range::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re_repeat.Range"));
  List<field*>* L = out_node->fields;
    if (this->lower) {  // MaybeType
      hnode_t* x0 = this->lower->AbbreviatedTree();
      L->append(new field(new Str("lower"), x0));
    }

    if (this->upper) {  // MaybeType
      hnode_t* x1 = this->upper->AbbreviatedTree();
      L->append(new field(new Str("upper"), x1));
    }

  return out_node;
}

hnode_t* re_repeat__Range::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* re_repeat_t::PrettyTree() {
  switch (this->tag_()) {
  case re_repeat_e::Op: {
    re_repeat__Op* obj = static_cast<re_repeat__Op*>(this);
    return obj->PrettyTree();
  }
  case re_repeat_e::Num: {
    re_repeat__Num* obj = static_cast<re_repeat__Num*>(this);
    return obj->PrettyTree();
  }
  case re_repeat_e::Range: {
    re_repeat__Range* obj = static_cast<re_repeat__Range*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* re_repeat_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case re_repeat_e::Op: {
    re_repeat__Op* obj = static_cast<re_repeat__Op*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_repeat_e::Num: {
    re_repeat__Num* obj = static_cast<re_repeat__Num*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_repeat_e::Range: {
    re_repeat__Range* obj = static_cast<re_repeat__Range*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* re_repeat_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case re_repeat_e::Op: {
    re_repeat__Op* obj = static_cast<re_repeat__Op*>(this);
    return obj->AbbreviatedTree();
  }
  case re_repeat_e::Num: {
    re_repeat__Num* obj = static_cast<re_repeat__Num*>(this);
    return obj->AbbreviatedTree();
  }
  case re_repeat_e::Range: {
    re_repeat__Range* obj = static_cast<re_repeat__Range*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}
const char* re_str(int tag) {
  switch (tag) {
  case re_e::Speck:
    return "re.Speck";
  case re_e::Token:
    return "re.Token";
  case re_e::PosixClass:
    return "re.PosixClass";
  case re_e::PerlClass:
    return "re.PerlClass";
  case re_e::ClassLiteral:
    return "re.ClassLiteral";
  case re_e::Splice:
    return "re.Splice";
  case re_e::SimpleVarSub:
    return "re.SimpleVarSub";
  case re_e::BracedVarSub:
    return "re.BracedVarSub";
  case re_e::SingleQuoted:
    return "re.SingleQuoted";
  case re_e::DoubleQuoted:
    return "re.DoubleQuoted";
  case re_e::Repeat:
    return "re.Repeat";
  case re_e::Seq:
    return "re.Seq";
  case re_e::Alt:
    return "re.Alt";
  case re_e::Group:
    return "re.Group";
  case re_e::Capture:
    return "re.Capture";
  case re_e::Backtracking:
    return "re.Backtracking";
  case re_e::Primitive:
    return "re.Primitive";
  case re_e::LiteralChars:
    return "re.LiteralChars";
  default:
    assert(0);
  }
}

hnode_t* re__ClassLiteral::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.ClassLiteral"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(this->negated ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("negated"), x0));

    if (this->terms && len(this->terms)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<class_literal_term_t*>it(this->terms); !it.Done();
           it.Next()) {
        class_literal_term_t* i1 = it.Value();
        x1->children->append(i1->PrettyTree());
      }
      L->append(new field(new Str("terms"), x1));
    }

  return out_node;
}

hnode_t* re__ClassLiteral::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.ClassLiteral"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(this->negated ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("negated"), x0));

    if (this->terms && len(this->terms)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<class_literal_term_t*>it(this->terms); !it.Done();
           it.Next()) {
        class_literal_term_t* i1 = it.Value();
        x1->children->append(i1->AbbreviatedTree());
      }
      L->append(new field(new Str("terms"), x1));
    }

  return out_node;
}

hnode_t* re__ClassLiteral::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* re__Splice::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.Splice"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->PrettyTree();
    L->append(new field(new Str("name"), x0));

  return out_node;
}

hnode_t* re__Splice::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.Splice"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->name->AbbreviatedTree();
    L->append(new field(new Str("name"), x0));

  return out_node;
}

hnode_t* re__Splice::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* re__Repeat::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.Repeat"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->child->PrettyTree();
    L->append(new field(new Str("child"), x0));

    hnode_t* x1 = this->op->PrettyTree();
    L->append(new field(new Str("op"), x1));

  return out_node;
}

hnode_t* re__Repeat::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.Repeat"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->child->AbbreviatedTree();
    L->append(new field(new Str("child"), x0));

    hnode_t* x1 = this->op->AbbreviatedTree();
    L->append(new field(new Str("op"), x1));

  return out_node;
}

hnode_t* re__Repeat::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* re__Seq::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.Seq"));
  List<field*>* L = out_node->fields;
    if (this->children && len(this->children)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<re_t*>it(this->children); !it.Done(); it.Next()) {
        re_t* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("children"), x0));
    }

  return out_node;
}

hnode_t* re__Seq::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.Seq"));
  List<field*>* L = out_node->fields;
    if (this->children && len(this->children)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<re_t*>it(this->children); !it.Done(); it.Next()) {
        re_t* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("children"), x0));
    }

  return out_node;
}

hnode_t* re__Seq::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* re__Alt::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.Alt"));
  List<field*>* L = out_node->fields;
    if (this->children && len(this->children)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<re_t*>it(this->children); !it.Done(); it.Next()) {
        re_t* i0 = it.Value();
        x0->children->append(i0->PrettyTree());
      }
      L->append(new field(new Str("children"), x0));
    }

  return out_node;
}

hnode_t* re__Alt::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.Alt"));
  List<field*>* L = out_node->fields;
    if (this->children && len(this->children)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<re_t*>it(this->children); !it.Done(); it.Next()) {
        re_t* i0 = it.Value();
        x0->children->append(i0->AbbreviatedTree());
      }
      L->append(new field(new Str("children"), x0));
    }

  return out_node;
}

hnode_t* re__Alt::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* re__Group::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.Group"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->child->PrettyTree();
    L->append(new field(new Str("child"), x0));

  return out_node;
}

hnode_t* re__Group::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.Group"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->child->AbbreviatedTree();
    L->append(new field(new Str("child"), x0));

  return out_node;
}

hnode_t* re__Group::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* re__Capture::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.Capture"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->child->PrettyTree();
    L->append(new field(new Str("child"), x0));

    if (this->var_name) {  // MaybeType
      hnode_t* x1 = this->var_name->PrettyTree();
      L->append(new field(new Str("var_name"), x1));
    }

    if (this->type) {  // MaybeType
      hnode_t* x2 = this->type->PrettyTree();
      L->append(new field(new Str("type"), x2));
    }

  return out_node;
}

hnode_t* re__Capture::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.Capture"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = this->child->AbbreviatedTree();
    L->append(new field(new Str("child"), x0));

    if (this->var_name) {  // MaybeType
      hnode_t* x1 = this->var_name->AbbreviatedTree();
      L->append(new field(new Str("var_name"), x1));
    }

    if (this->type) {  // MaybeType
      hnode_t* x2 = this->type->AbbreviatedTree();
      L->append(new field(new Str("type"), x2));
    }

  return out_node;
}

hnode_t* re__Capture::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* re__Backtracking::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.Backtracking"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(this->negated ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("negated"), x0));

    hnode_t* x1 = this->name->PrettyTree();
    L->append(new field(new Str("name"), x1));

    hnode_t* x2 = this->child->PrettyTree();
    L->append(new field(new Str("child"), x2));

  return out_node;
}

hnode_t* re__Backtracking::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.Backtracking"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(this->negated ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("negated"), x0));

    hnode_t* x1 = this->name->AbbreviatedTree();
    L->append(new field(new Str("name"), x1));

    hnode_t* x2 = this->child->AbbreviatedTree();
    L->append(new field(new Str("child"), x2));

  return out_node;
}

hnode_t* re__Backtracking::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* re__Primitive::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.Primitive"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->id)), color_e::UserType);
    L->append(new field(new Str("id"), x0));

  return out_node;
}

hnode_t* re__Primitive::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.Primitive"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->id)), color_e::UserType);
    L->append(new field(new Str("id"), x0));

  return out_node;
}

hnode_t* re__Primitive::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* re__LiteralChars::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.LiteralChars"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->s, color_e::StringConst);
    L->append(new field(new Str("s"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->spid), color_e::OtherConst);
    L->append(new field(new Str("spid"), x1));

  return out_node;
}

hnode_t* re__LiteralChars::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("re.LiteralChars"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->s, color_e::StringConst);
    L->append(new field(new Str("s"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->spid), color_e::OtherConst);
    L->append(new field(new Str("spid"), x1));

  return out_node;
}

hnode_t* re__LiteralChars::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* re_t::PrettyTree() {
  switch (this->tag_()) {
  case re_e::Speck: {
    speck* obj = static_cast<speck*>(this);
    return obj->PrettyTree();
  }
  case re_e::Token: {
    Token* obj = static_cast<Token*>(this);
    return obj->PrettyTree();
  }
  case re_e::PosixClass: {
    posix_class* obj = static_cast<posix_class*>(this);
    return obj->PrettyTree();
  }
  case re_e::PerlClass: {
    perl_class* obj = static_cast<perl_class*>(this);
    return obj->PrettyTree();
  }
  case re_e::ClassLiteral: {
    re__ClassLiteral* obj = static_cast<re__ClassLiteral*>(this);
    return obj->PrettyTree();
  }
  case re_e::Splice: {
    re__Splice* obj = static_cast<re__Splice*>(this);
    return obj->PrettyTree();
  }
  case re_e::SimpleVarSub: {
    simple_var_sub* obj = static_cast<simple_var_sub*>(this);
    return obj->PrettyTree();
  }
  case re_e::BracedVarSub: {
    braced_var_sub* obj = static_cast<braced_var_sub*>(this);
    return obj->PrettyTree();
  }
  case re_e::SingleQuoted: {
    single_quoted* obj = static_cast<single_quoted*>(this);
    return obj->PrettyTree();
  }
  case re_e::DoubleQuoted: {
    double_quoted* obj = static_cast<double_quoted*>(this);
    return obj->PrettyTree();
  }
  case re_e::Repeat: {
    re__Repeat* obj = static_cast<re__Repeat*>(this);
    return obj->PrettyTree();
  }
  case re_e::Seq: {
    re__Seq* obj = static_cast<re__Seq*>(this);
    return obj->PrettyTree();
  }
  case re_e::Alt: {
    re__Alt* obj = static_cast<re__Alt*>(this);
    return obj->PrettyTree();
  }
  case re_e::Group: {
    re__Group* obj = static_cast<re__Group*>(this);
    return obj->PrettyTree();
  }
  case re_e::Capture: {
    re__Capture* obj = static_cast<re__Capture*>(this);
    return obj->PrettyTree();
  }
  case re_e::Backtracking: {
    re__Backtracking* obj = static_cast<re__Backtracking*>(this);
    return obj->PrettyTree();
  }
  case re_e::Primitive: {
    re__Primitive* obj = static_cast<re__Primitive*>(this);
    return obj->PrettyTree();
  }
  case re_e::LiteralChars: {
    re__LiteralChars* obj = static_cast<re__LiteralChars*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* re_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case re_e::Speck: {
    speck* obj = static_cast<speck*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_e::Token: {
    Token* obj = static_cast<Token*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_e::PosixClass: {
    posix_class* obj = static_cast<posix_class*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_e::PerlClass: {
    perl_class* obj = static_cast<perl_class*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_e::ClassLiteral: {
    re__ClassLiteral* obj = static_cast<re__ClassLiteral*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_e::Splice: {
    re__Splice* obj = static_cast<re__Splice*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_e::SimpleVarSub: {
    simple_var_sub* obj = static_cast<simple_var_sub*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_e::BracedVarSub: {
    braced_var_sub* obj = static_cast<braced_var_sub*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_e::SingleQuoted: {
    single_quoted* obj = static_cast<single_quoted*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_e::DoubleQuoted: {
    double_quoted* obj = static_cast<double_quoted*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_e::Repeat: {
    re__Repeat* obj = static_cast<re__Repeat*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_e::Seq: {
    re__Seq* obj = static_cast<re__Seq*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_e::Alt: {
    re__Alt* obj = static_cast<re__Alt*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_e::Group: {
    re__Group* obj = static_cast<re__Group*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_e::Capture: {
    re__Capture* obj = static_cast<re__Capture*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_e::Backtracking: {
    re__Backtracking* obj = static_cast<re__Backtracking*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_e::Primitive: {
    re__Primitive* obj = static_cast<re__Primitive*>(this);
    return obj->_AbbreviatedTree();
  }
  case re_e::LiteralChars: {
    re__LiteralChars* obj = static_cast<re__LiteralChars*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* re_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case re_e::Speck: {
    speck* obj = static_cast<speck*>(this);
    return obj->AbbreviatedTree();
  }
  case re_e::Token: {
    Token* obj = static_cast<Token*>(this);
    return obj->AbbreviatedTree();
  }
  case re_e::PosixClass: {
    posix_class* obj = static_cast<posix_class*>(this);
    return obj->AbbreviatedTree();
  }
  case re_e::PerlClass: {
    perl_class* obj = static_cast<perl_class*>(this);
    return obj->AbbreviatedTree();
  }
  case re_e::ClassLiteral: {
    re__ClassLiteral* obj = static_cast<re__ClassLiteral*>(this);
    return obj->AbbreviatedTree();
  }
  case re_e::Splice: {
    re__Splice* obj = static_cast<re__Splice*>(this);
    return obj->AbbreviatedTree();
  }
  case re_e::SimpleVarSub: {
    simple_var_sub* obj = static_cast<simple_var_sub*>(this);
    return obj->AbbreviatedTree();
  }
  case re_e::BracedVarSub: {
    braced_var_sub* obj = static_cast<braced_var_sub*>(this);
    return obj->AbbreviatedTree();
  }
  case re_e::SingleQuoted: {
    single_quoted* obj = static_cast<single_quoted*>(this);
    return obj->AbbreviatedTree();
  }
  case re_e::DoubleQuoted: {
    double_quoted* obj = static_cast<double_quoted*>(this);
    return obj->AbbreviatedTree();
  }
  case re_e::Repeat: {
    re__Repeat* obj = static_cast<re__Repeat*>(this);
    return obj->AbbreviatedTree();
  }
  case re_e::Seq: {
    re__Seq* obj = static_cast<re__Seq*>(this);
    return obj->AbbreviatedTree();
  }
  case re_e::Alt: {
    re__Alt* obj = static_cast<re__Alt*>(this);
    return obj->AbbreviatedTree();
  }
  case re_e::Group: {
    re__Group* obj = static_cast<re__Group*>(this);
    return obj->AbbreviatedTree();
  }
  case re_e::Capture: {
    re__Capture* obj = static_cast<re__Capture*>(this);
    return obj->AbbreviatedTree();
  }
  case re_e::Backtracking: {
    re__Backtracking* obj = static_cast<re__Backtracking*>(this);
    return obj->AbbreviatedTree();
  }
  case re_e::Primitive: {
    re__Primitive* obj = static_cast<re__Primitive*>(this);
    return obj->AbbreviatedTree();
  }
  case re_e::LiteralChars: {
    re__LiteralChars* obj = static_cast<re__LiteralChars*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

}  // namespace syntax_asdl
