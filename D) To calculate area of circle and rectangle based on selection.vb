Private Sub Command1_Click()
If Option1.Value = True Then
Text4.Text = 3.14 * Val(Textrad.Text) * Val(Textrad.Text)
ElseIf If Option2.Value = True Then
Text4.Text = Val(Textbr.Text) * Val(Textlen.Text)
End If
End Sub
Private Sub optcircle_Click()
txtlen.Enabled = False
txtbr.Enabled = False
txtrad.Enabled = True
txtrad.Text = “ “
txtlen.Text = “ “
txtbr.Text = “ “
txtarea.Text= “ “
txtrad.SetFocus
End Sub

Private Sub optrect_Click()
txtrad.Enabled = False
txtlen.Enabled = True
txtbr.Enabled = True
txtrad.Text = “ “
txtlen.Text = “ “
txtbr.Text = “ “
txtarea.Text= “ “
txtlen.SetFocus
End Sub
