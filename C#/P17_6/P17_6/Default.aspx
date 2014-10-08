<%@ Page Title="主页" Language="C#" MasterPageFile="~/Site.master" AutoEventWireup="true"
    CodeBehind="Default.aspx.cs" Inherits="P17_6._Default" %>

<asp:Content ID="HeaderContent" runat="server" ContentPlaceHolderID="HeadContent">
</asp:Content>
<asp:Content ID="BodyContent" runat="server" ContentPlaceHolderID="MainContent">
    <h2>
        欢迎使用 ASP.NET!
        <asp:TextBox ID="TextBox1" runat="server" Width="245px"></asp:TextBox>
        <asp:LinkButton ID="LinkButton1" runat="server">LinkButton</asp:LinkButton>
        <asp:Button ID="Button1" runat="server" Height="21px" Text="Button" 
            Width="96px" />
    </h2>
    <p>
        若要了解关于 ASP.NET 的详细信息，请访问 <a href="http://www.asp.net/cn" title="ASP.NET 网站">ww<asp:Table 
            ID="Table1" runat="server" Height="124px" style="margin-top: 0px" Width="457px">
        </asp:Table>
        w.asp.net/cn</a>。
    </p>
    <p>
        您还可以找到 <a href="http://go.microsoft.com/fwlink/?LinkID=152368"
            title="MSDN ASP.NET 文档">MSDN 上有关 ASP.NET 的文档</a>。
    </p>
</asp:Content>
