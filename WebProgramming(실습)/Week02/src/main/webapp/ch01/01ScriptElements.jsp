<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"import = "java.util.*" %>
<%! 
	public int add(int num1, int num2) {
		return num1 + num2;
	}	

	int a = 10;
	
%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
덧셈 결과 1 : <%= add(30, 20) %>
	<% 
		java.util.Date today = new java.util.Date();
		/* 이렇게 쓸 수 도 있지만, 불편하다! */
		Date today1 = new Date();
	%>
</body>
</html>