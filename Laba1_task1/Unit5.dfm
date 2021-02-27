object Form5: TForm5
  Left = 0
  Top = 0
  Caption = 'Form5'
  ClientHeight = 335
  ClientWidth = 621
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 16
  object Go: TButton
    Left = 488
    Top = 32
    Width = 89
    Height = 41
    Caption = 'Let'#39's go!'
    TabOrder = 0
    OnClick = GoClick
  end
  object Stop: TButton
    Left = 488
    Top = 88
    Width = 89
    Height = 41
    Caption = 'Stop!'
    TabOrder = 1
    OnClick = StopClick
  end
  object BodyUp: TButton
    Left = 488
    Top = 144
    Width = 89
    Height = 41
    Caption = 'Lift the body!'
    TabOrder = 2
    OnClick = BodyUpClick
  end
  object Gas: TButton
    Left = 144
    Top = 232
    Width = 89
    Height = 41
    Caption = 'Gas'
    TabOrder = 3
    OnClick = GasClick
  end
  object Brake: TButton
    Left = 376
    Top = 232
    Width = 89
    Height = 41
    Caption = 'Brake'
    TabOrder = 4
    OnClick = BrakeClick
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 250
    OnTimer = Timer1Timer
    Left = 24
    Top = 32
  end
  object Timer2: TTimer
    Enabled = False
    Interval = 250
    OnTimer = Timer2Timer
    Left = 24
    Top = 88
  end
  object Timer3: TTimer
    Enabled = False
    Interval = 250
    OnTimer = Timer3Timer
    Left = 24
    Top = 144
  end
end
