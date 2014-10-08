<%@ Page Title="主页" Language="C#" MasterPageFile="~/Site.master" AutoEventWireup="true"
    CodeBehind="Default.aspx.cs" Inherits="P17_7._Default" %>

<asp:Content ID="HeaderContent" runat="server" ContentPlaceHolderID="HeadContent">
</asp:Content>
<asp:Content ID="BodyContent" runat="server" ContentPlaceHolderID="MainContent">
    <asp:FileUpload ID="FileUpload1" runat="server" style="margin-left: 0px" 
        Width="289px" />
    <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
</asp:Content>
