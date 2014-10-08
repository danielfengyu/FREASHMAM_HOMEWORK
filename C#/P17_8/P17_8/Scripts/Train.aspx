<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Train.aspx.cs" Inherits="P17_8.Scripts.Train" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <asp:TextBox ID="TextBox1" runat="server" Width="80"></asp:TextBox>
    <asp:Button ID="Button1" runat="server" Text="车次查询" onclick="Button1_Click"/>
    <br />
    <br />
    <br />
    
    从<asp:TextBox ID="TextBox2" runat="server" Width="80"></asp:TextBox>
    到<asp:TextBox ID="TextBox3" runat="server" Width="80"></asp:TextBox>
    <asp:Button ID="Button2" runat="server" Text="站站查询" OnClick="Button2_Click" />
    <br />
    <br />
     <asp:Label ID="Label1" runat="server" Text="Label" ForeColor ="Blue">查询结果</asp:Label>
    <asp:Table ID="Table1" runat="server" BorderStyle="Double">
    </asp:Table>
    </div>
    <br />
    </div>
    </form>
</body>
</html>
