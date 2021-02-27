object Form7: TForm7
  Left = 0
  Top = 0
  Caption = 'Form7'
  ClientHeight = 524
  ClientWidth = 792
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -19
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 23
  object Label4: TLabel
    Left = 693
    Top = 351
    Width = 19
    Height = 25
    Caption = 'Y:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 567
    Top = 351
    Width = 19
    Height = 25
    Caption = 'X:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label1: TLabel
    Left = 591
    Top = 287
    Width = 19
    Height = 25
    Caption = 'P:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 592
    Top = 225
    Width = 19
    Height = 25
    Caption = 'S:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Image1: TImage
    Left = 24
    Top = 32
    Width = 441
    Height = 353
    OnMouseDown = Image1MouseDown
    OnMouseUp = Image1MouseUp
  end
  object Label5: TLabel
    Left = 72
    Top = 407
    Width = 67
    Height = 25
    Caption = 'New X:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 248
    Top = 407
    Width = 67
    Height = 25
    Caption = 'New Y:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Figures: TRadioGroup
    Left = 488
    Top = 48
    Width = 281
    Height = 121
    Caption = 'Choose Figures!'
    Items.Strings = (
      'Rectangle'
      'Circle')
    TabOrder = 0
  end
  object S: TPanel
    Left = 617
    Top = 218
    Width = 105
    Height = 41
    Caption = '0.0'
    TabOrder = 1
  end
  object P: TPanel
    Left = 616
    Top = 280
    Width = 105
    Height = 41
    Caption = '0.0'
    TabOrder = 2
  end
  object CenterX: TPanel
    Left = 592
    Top = 344
    Width = 57
    Height = 41
    Caption = '0.0'
    TabOrder = 3
  end
  object CenterY: TPanel
    Left = 718
    Top = 344
    Width = 51
    Height = 41
    Caption = '0.0'
    TabOrder = 4
  end
  object Clear: TButton
    Left = 618
    Top = 448
    Width = 104
    Height = 49
    Caption = 'Clear'
    TabOrder = 5
    OnClick = ClearClick
  end
  object Change: TButton
    Left = 136
    Top = 448
    Width = 201
    Height = 49
    Caption = 'Change Mass Center'
    TabOrder = 6
    OnClick = ChangeClick
  end
  object NewX: TEdit
    Left = 145
    Top = 406
    Width = 48
    Height = 31
    Alignment = taRightJustify
    Enabled = False
    TabOrder = 7
  end
  object NewY: TEdit
    Left = 337
    Top = 406
    Width = 48
    Height = 31
    Alignment = taRightJustify
    Enabled = False
    TabOrder = 8
  end
  object ManualControl: TButton
    Left = 408
    Top = 448
    Width = 161
    Height = 49
    Caption = 'Manual Control'
    TabOrder = 9
    OnClick = ManualControlClick
  end
  object Temp: TPanel
    Left = 488
    Top = 175
    Width = 281
    Height = 238
    Color = clSkyBlue
    ParentBackground = False
    TabOrder = 10
    object Label7: TLabel
      Left = 35
      Top = 50
      Width = 30
      Height = 25
      Caption = 'X1:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -21
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label8: TLabel
      Left = 38
      Top = 117
      Width = 30
      Height = 25
      Caption = 'X2:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -21
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label9: TLabel
      Left = 179
      Top = 50
      Width = 30
      Height = 25
      Caption = 'Y1:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -21
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label10: TLabel
      Left = 179
      Top = 113
      Width = 30
      Height = 25
      Caption = 'Y2:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -21
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object X1: TEdit
      Left = 71
      Top = 50
      Width = 48
      Height = 31
      Alignment = taRightJustify
      TabOrder = 0
    end
    object X2: TEdit
      Left = 74
      Top = 115
      Width = 48
      Height = 31
      Alignment = taRightJustify
      TabOrder = 1
    end
    object Y1: TEdit
      Left = 215
      Top = 50
      Width = 48
      Height = 31
      Alignment = taRightJustify
      TabOrder = 2
    end
    object Y2: TEdit
      Left = 215
      Top = 115
      Width = 48
      Height = 31
      Alignment = taRightJustify
      TabOrder = 3
    end
    object OK: TButton
      Left = 188
      Top = 176
      Width = 75
      Height = 49
      Caption = 'OK'
      TabOrder = 4
      OnClick = OKClick
    end
    object Close2: TButton
      Left = 56
      Top = 176
      Width = 75
      Height = 49
      Caption = 'Close'
      TabOrder = 5
      OnClick = Close2Click
    end
  end
  object Temp2: TPanel
    Left = 488
    Top = 175
    Width = 281
    Height = 238
    Color = clSkyBlue
    ParentBackground = False
    TabOrder = 11
    object Label11: TLabel
      Left = 35
      Top = 50
      Width = 31
      Height = 25
      Caption = 'R1:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -21
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label12: TLabel
      Left = 38
      Top = 117
      Width = 32
      Height = 25
      Caption = 'XC:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -21
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label13: TLabel
      Left = 179
      Top = 50
      Width = 31
      Height = 25
      Caption = 'R2:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -21
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label14: TLabel
      Left = 179
      Top = 113
      Width = 32
      Height = 25
      Caption = 'YC:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -21
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object R1: TEdit
      Left = 71
      Top = 50
      Width = 48
      Height = 31
      Alignment = taRightJustify
      TabOrder = 0
    end
    object XC: TEdit
      Left = 74
      Top = 115
      Width = 48
      Height = 31
      Alignment = taRightJustify
      TabOrder = 1
    end
    object R2: TEdit
      Left = 215
      Top = 50
      Width = 48
      Height = 31
      Alignment = taRightJustify
      TabOrder = 2
    end
    object YC: TEdit
      Left = 215
      Top = 115
      Width = 48
      Height = 31
      Alignment = taRightJustify
      TabOrder = 3
    end
    object Close: TButton
      Left = 48
      Top = 176
      Width = 75
      Height = 49
      Caption = 'Close'
      TabOrder = 4
      OnClick = CloseClick
    end
    object OK2: TButton
      Left = 167
      Top = 176
      Width = 75
      Height = 49
      Caption = 'OK'
      TabOrder = 5
      OnClick = OK2Click
    end
  end
end
