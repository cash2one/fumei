<?php
$z[0]=Array("field","",275,294);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("global","",295,321);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",362,391);
$z[2][4]=array();
$z[2][4]['name']="keywords";
$z[3]=Array("field","",431,489);
$z[3][4]=array();
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("global","",1125,1153);
$z[4][4]=array();
$z[4][4]['name']="cfg_mobileurl";
$z[5]=Array("field","",1167,1183);
$z[5][4]=array();
$z[5][4]['name']="id";
$z[6]=Array("global","",1652,1680);
$z[6][4]=array();
$z[6][4]['name']="cfg_mobileurl";
$z[7]=Array("field","",1694,1710);
$z[7][4]=array();
$z[7][4]['name']="id";
$z[8]=Array("include","",1807,1842);
$z[8][4]=array();
$z[8][4]['filename']="head.htm";
$z[9]=Array("field","",2106,2128);
$z[9][4]=array();
$z[9][4]['name']="typename";
$z[10]=Array("channel","\r\n        <li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n        ",2216,2409);
$z[10][4]=array();
$z[10][4]['type']="son";
$z[10][4]['currentstyle']="<li><a href='~typelink~' class='active'>~typename~</a></li>";
$z[11]=Array("list","\r\n          <div id=\"newsitem_[field:global name=autoindex runphp=\"yes\"]@me=@me;[/field:global]\" class=\"wow newstitem left\"> <a class=\"newscontent\" target=\"_blank\" href=\"[field:arcurl/]\">\r\n            <div class=\"news_wrapper\">\r\n              <div class=\"newsbody\">\r\n                <p class=\"date\"><span class=\"md\">[field:pubdate function='strftime(\"%Y\",@me)'/]<span>-</span></span><span class=\"year\">[field:pubdate function='strftime(\"%m-%d\",@me)'/]</span></p>\r\n                <p class=\"title\">[field:title/]</p>\r\n                <div class=\"separator\"></div>\r\n                <p class=\"description\">[field:description function='cn_substr(@me,250)'/]...</p>\r\n              </div>\r\n            </div>\r\n            <div class=\"newsimg\" style=\"background-image:url([field:litpic/])\"></div>\r\n            </a> <a href=\"[field:arcurl/]\" target=\"_blank\" class=\"details\">more<i class=\"fa fa-angle-right\"></i></a> </div>\r\n          ",2492,3454);
$z[11][4]=array();
$z[11][4]['pagesize']="5";
$z[12]=Array("pagelist","",3570,3636);
$z[12][4]=array();
$z[12][4]['listitem']="index,end,pre,next,pageno";
$z[12][4]['listsize']="5";
$z[13]=Array("include","",3699,3734);
$z[13][4]=array();
$z[13][4]['filename']="foot.htm";

?>