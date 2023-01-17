Private Sub Command1_Click()
  Dim i As Integer, sum As Integer
  sum = 0
  i = 1
Do
  List1.AddItem i
  sum = sum + i
  i = i + 1
  Loop While (i <= 100)
  Label1.Caption = "Sum of 1..100 numbers :" &
sum End Sub
