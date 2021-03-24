object Form12: TForm12
  Left = 0
  Top = 0
  Caption = 'Form12'
  ClientHeight = 393
  ClientWidth = 691
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Memo1: TMemo
    Left = 328
    Top = 40
    Width = 292
    Height = 249
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    ScrollBars = ssVertical
    TabOrder = 0
  end
  object Memo2: TMemo
    Left = 8
    Top = 40
    Width = 301
    Height = 249
    Lines.Strings = (
      '//-------------------------------------------'
      '--------------------------------'
      ''
      '#pragma hdrstop'
      ''
      '#include "TwoList.h"'
      '//-------------------------------------------'
      '--------------------------------'
      '#pragma package(smart_init)'
      'template<typename T>'
      'TwoList<T>::TwoList()'
      '{'
      #9'Size = 0;'
      #9'head = nullptr;'
      #9'tail = nullptr;'
      '}'
      ''
      'template<typename T>'
      'TwoList<T>::~TwoList()'
      '{'
      #9'this->clear();'
      '}'
      ''
      'template<typename T>'
      'void TwoList<T>::push_back(T '
      'data)//'#1044#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1101#1083#1077#1084#1077#1085#1090#1072' '#1074' '
      #1082#1086#1085#1077#1094' '#1089#1087#1080#1089#1082#1072
      '{'
      #9'if (tail == nullptr)'
      #9'{'
      #9#9'tail = new '
      'Node<T>(data);'
      #9#9'head = tail;'
      #9'}'
      #9'else'
      #9'{'
      #9#9'Node<T>* temp '
      '= tail;'
      #9#9'tail = new '
      'Node<T>(data, head, tail);'
      #9#9'head->pPrevious '
      '= tail;'
      #9#9'temp->pNext = '
      'tail;'
      #9'}'
      #9'Size++;'
      '}'
      ''
      'template<typename T>'
      'void TwoList<T>::pop_front'
      '()//'#1059#1076#1072#1083#1077#1085#1080#1077' '#1087#1077#1088#1074#1086#1075#1086' '#1101#1083#1077#1084#1077#1085#1090#1072
      '{'
      #9'Node<T>* temp = head;'
      #9'head = head->pNext;'
      #9'head->pPrevious = tail;'
      #9'tail->pNext = head;'
      #9'delete temp;'
      #9'Size--;'
      '}'
      ''
      'template<typename T>'
      'void TwoList<T>::push_front(T '
      'data)//'#1044#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1101#1083#1077#1084#1077#1085#1090#1072' '#1074' '
      #1085#1072#1095#1072#1083#1086' '#1089#1087#1080#1089#1082#1072
      '{'
      #9'if (head == nullptr)'
      #9'{'
      #9#9'head = new '
      'Node<T>(data);'
      #9#9'tail = head;'
      #9'}'
      #9'else'
      #9'{'
      #9#9'Node<T>* temp '
      '= head;'
      #9#9'head = new '
      'Node<T>(data, head, tail);'
      #9#9'tail->pNext = '
      'head;'
      #9#9'temp->pPrevious '
      '= head;'
      #9'}'
      #9'Size++;'
      '}'
      ''
      'template<typename T>'
      'void TwoList<T>::insert(T data, int '
      'index)'
      '{'
      #9'if (index == 0)'
      #9#9'push_front'
      '(data);'
      #9'else if (index == Size)'
      #9#9'push_back'
      '(data);'
      #9'else'
      #9'{'
      #9#9'if (index <= '
      'this->Size / 2)//'#1048#1076#1105#1084' '#1095#1077#1088#1077#1079' '#1085#1072#1095#1072#1083#1086
      #9#9'{'
      #9#9#9
      'Node<T>* previous = this->head;'
      #9#9#9'for (int '
      'i = 0; i < index - 1; i++)'
      #9#9#9'{'
      #9#9#9#9
      'previous = previous->pNext;'
      #9#9#9'}'
      #9#9#9
      'Node<T>* temp = previous->pNext;'
      #9#9#9
      'Node<T>* Insert = new Node<T>'
      '(data,previous->pNext,previous);'
      #9#9#9
      'previous->pNext = Insert;'
      #9#9#9'temp-'
      '>pPrevious = Insert;'
      ''
      #9#9'}'
      #9#9'else'
      #9#9'{'
      #9#9#9
      'Node<T>* previous = this->tail;'
      #9#9#9'for (int '
      'i = 0; i < Size-index - 1; i++)'
      #9#9#9'{'
      #9#9#9#9
      'previous = previous->pPrevious;'
      #9#9#9'}'
      #9#9#9
      'Node<T>* temp = previous-'
      '>pPrevious;'
      #9#9#9
      'Node<T>* Insert = new Node<T>'
      '(data, previous, temp);'
      #9#9#9
      'previous->pPrevious = Insert;'
      #9#9#9'temp-'
      '>pNext = Insert;'
      #9#9'}'
      #9#9'Size++;'
      #9'}'
      ''
      '}'
      ''
      'template<typename T>'
      'void TwoList<T>::removeAt(int '
      'index)'
      '{'
      #9'if (index == 0)'
      #9#9'pop_front();'
      #9'else if (index == Size - 1)'
      #9#9'pop_back();'
      #9'else'
      #9'{'
      #9#9'if (index <= '
      'this->Size / 2)//'#1048#1076#1105#1084' '#1095#1077#1088#1077#1079' '#1085#1072#1095#1072#1083#1086
      #9#9'{'
      #9#9#9
      'Node<T>* previous = this->head;'
      #9#9#9'for (int '
      'i = 0; i < index - 1; i++)'
      #9#9#9'{'
      #9#9#9#9
      'previous = previous->pNext;'
      #9#9#9'}'
      #9#9#9
      'Node<T>* ToDelete = previous-'
      '>pNext;'
      #9#9#9
      'Node<T>* temp = ToDelete-'
      '>pNext;'
      #9#9#9
      'previous->pNext = ToDelete-'
      '>pNext;'
      #9#9#9'temp-'
      '>pPrevious = previous;'
      #9#9#9'delete '
      'ToDelete;'
      ''
      #9#9'}'
      #9#9'else'
      #9#9'{'
      #9#9#9
      'Node<T>* previous = this->tail;'
      #9#9#9'for (int '
      'i = 0; i < Size - index - 2; i++)'
      #9#9#9'{'
      #9#9#9#9
      'previous = previous->pPrevious;'
      #9#9#9'}'
      #9#9#9
      'Node<T>* ToDelete = previous-'
      '>pPrevious;'
      #9#9#9
      'Node<T>* temp = ToDelete-'
      '>pPrevious;'
      #9#9#9
      'previous->pPrevious = ToDelete-'
      '>pPrevious;'
      #9#9#9'temp-'
      '>pNext = previous;'
      #9#9'}'
      #9#9'Size--;'
      #9'}'
      '}'
      ''
      'template<typename T>'
      'void TwoList<T>::pop_back'
      '()//'#1059#1076#1072#1083#1077#1085#1080#1077' '#1089' '#1082#1086#1085#1094#1072
      '{'
      #9'Node<T>* temp = tail;'
      #9'tail = tail->pPrevious;'
      #9'tail->pNext = head;'
      #9'head->pPrevious = tail;'
      #9'delete temp;'
      #9'Size--;'
      '}'
      ''
      'template<typename T>'
      'T& TwoList<T>::operator[](const int '
      'index)'
      '{'
      #9'int counter = 0;'
      #9'Node<T>* current = '
      'this->head;'
      #9'while (current != nullptr)'
      #9'{'
      #9#9'if (counter == '
      'index)'
      #9#9#9'return '
      'current->data;'
      ''
      #9#9'current = '
      'current->pNext;'
      #9#9'counter++;'
      #9'}'
      '}'
      ''
      'template<typename T>'
      'int TwoList<T>::GetSize()'
      '{'
      #9'return Size;'
      '}'
      ''
      'template<typename T>'
      'void TwoList<T>::clear()'
      '{'
      #9'while (Size)'
      #9'{'
      #9#9'this->pop_front'
      '();'
      #9'}'
      '}')
    ReadOnly = True
    ScrollBars = ssVertical
    TabOrder = 1
  end
  object Previous: TButton
    Left = 626
    Top = 45
    Width = 26
    Height = 24
    Caption = '<--'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = PreviousClick
  end
  object Next: TButton
    Left = 658
    Top = 45
    Width = 25
    Height = 24
    Caption = '-->'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = NextClick
  end
  object Last: TButton
    Left = 526
    Top = 320
    Width = 83
    Height = 33
    Caption = 'To last'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = LastClick
  end
  object SeeAll: TButton
    Left = 294
    Top = 320
    Width = 75
    Height = 32
    Caption = 'Show'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    OnClick = SeeAllClick
  end
  object Clear: TButton
    Left = 415
    Top = 320
    Width = 75
    Height = 32
    Caption = 'Clear'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    OnClick = ClearClick
  end
  object Show: TEdit
    Left = 294
    Top = 358
    Width = 75
    Height = 24
    Alignment = taRightJustify
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    Text = 'All'
  end
end
