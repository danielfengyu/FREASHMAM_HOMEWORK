<%@ Page Title="主页" Language="C#" MasterPageFile="~/Site.master" AutoEventWireup="true"
    CodeBehind="Default.aspx.cs" Inherits="P17_8._Default" %>

<asp:Content ID="HeaderContent" runat="server" ContentPlaceHolderID="HeadContent">
</asp:Content>
<asp:Content ID="BodyContent" runat="server" ContentPlaceHolderID="MainContent">
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
   </form>
</asp:Content>
