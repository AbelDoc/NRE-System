<!-- HTML header for doxygen 1.8.8-->
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <!-- For Mobile Devices -->
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <meta http-equiv="Content-Type" content="text/xhtml;charset=UTF-8"/>
        <meta name="generator" content="Doxygen 1.8.11"/>
        <script type="text/javascript" src="../../js/jquery-2.1.1.min.js"></script>
        <title>NRE-System: /mnt/c/Users/abell/Documents/GitHub/NRE-System/src/System/Graphics/Driver/NRE_GraphicsDriver.hpp File Reference</title>
        <!--<link href="tabs.css" rel="stylesheet" type="text/css"/>-->
        <script type="text/javascript" src="dynsections.js"></script>
        <link href="search/search.css" rel="stylesheet" type="text/css"/>
<script type="text/javascript" src="search/searchdata.js"></script>
<script type="text/javascript" src="search/search.js"></script>
<script type="text/javascript">
  $(document).ready(function() { init_search(); });
</script>
        <link href="doxygen.css" rel="stylesheet" type="text/css" />
        <link href="style.css" rel="stylesheet" type="text/css"/>
        <link href='https://fonts.googleapis.com/css?family=Roboto+Slab' rel='stylesheet' type='text/css'>
        <?php
            include '../../php/navigation.php';
            if (!isset($_COOKIE["theme"]) || $_COOKIE["theme"] == "dark") {
                echo '<link href="../../css/dark/bootstrap.css" rel="stylesheet">';
            } else {
                echo '<link href="../../css/light/bootstrap.css" rel="stylesheet">';
            }
        ?>
        <script src="../../js/bootstrap.min.js"></script>
        <script type="text/javascript" src="doxy-boot.js"></script>
    </head>
    <body>
        <div class="container-fluid">
            <header class="page-header">
                <a href="../../../index.php">
                    <img src="../../img/Logo.png" class="logo img-responsive"/>
                </a>
            </header>
            <?php addNavigationBarInl(false); ?>
            <div id="top" class="row"><!-- do not remove this div, it is closed by doxygen! -->
                <div class="col-lg-12">
                    <div class="panel panel-default">
                        <div class="panel-body">
<!-- end header part -->
<!-- Generated by Doxygen 1.8.11 -->
<script type="text/javascript">
var searchBox = new SearchBox("searchBox", "search",false,'Search');
</script>
  <div id="navrow1" class="tabs">
    <ul class="tablist">
      <li><a href="index.php"><span>Main&#160;Page</span></a></li>
      <li><a href="namespaces.php"><span>Namespaces</span></a></li>
      <li><a href="annotated.php"><span>Classes</span></a></li>
      <li class="current"><a href="files.php"><span>Files</span></a></li>
      <li>
        <div id="MSearchBox" class="MSearchBoxInactive">
        <span class="left">
          <img id="MSearchSelect" src="search/mag_sel.png"
               onmouseover="return searchBox.OnSearchSelectShow()"
               onmouseout="return searchBox.OnSearchSelectHide()"
               alt=""/>
          <input type="text" id="MSearchField" value="Search" accesskey="S"
               onfocus="searchBox.OnSearchFieldFocus(true)" 
               onblur="searchBox.OnSearchFieldFocus(false)" 
               onkeyup="searchBox.OnSearchFieldChange(event)"/>
          </span><span class="right">
            <a id="MSearchClose" href="javascript:searchBox.CloseResultsWindow()"><img id="MSearchCloseImg" border="0" src="search/close.png" alt=""/></a>
          </span>
        </div>
      </li>
    </ul>
  </div>
  <div id="navrow2" class="tabs2">
    <ul class="tablist">
      <li><a href="files.php"><span>File&#160;List</span></a></li>
    </ul>
  </div>
<!-- window showing the filter options -->
<div id="MSearchSelectWindow"
     onmouseover="return searchBox.OnSearchSelectShow()"
     onmouseout="return searchBox.OnSearchSelectHide()"
     onkeydown="return searchBox.OnSearchSelectKey(event)">
</div>

<!-- iframe showing the search results (closed by default) -->
<div id="MSearchResultsWindow">
<iframe src="javascript:void(0)" frameborder="0" 
        name="MSearchResults" id="MSearchResults">
</iframe>
</div>

<div id="nav-path" class="navpath">
  <ul>
<li class="navelem"><a class="el" href="dir_68267d1309a1af8e8297ef4c3efbcdba.php">src</a></li><li class="navelem"><a class="el" href="dir_ef68f1e1f5148ff8ef7fb1c955106c3c.php">System</a></li><li class="navelem"><a class="el" href="dir_13c1ecb482d2b1153b2c0856159b065a.php">Graphics</a></li><li class="navelem"><a class="el" href="dir_81cdaf72272f1029aa25cae9892e5ec5.php">Driver</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="summary">
<a href="#nested-classes">Classes</a> &#124;
<a href="#namespaces">Namespaces</a> &#124;
<a href="#define-members">Macros</a> &#124;
<a href="#typedef-members">Typedefs</a>  </div>
  <div class="headertitle">
<div class="title">NRE_GraphicsDriver.hpp File Reference</div>  </div>
</div><!--header-->
<div class="contents">

<p>Declaration of <a class="el" href="namespace_graphics.php" title="Graphics&#39; API. ">Graphics</a>'s API's Object : GraphicsDriver.  
<a href="#details">More...</a></p>
<div class="textblock"><code>#include &lt;cstdlib&gt;</code><br />
<code>#include &lt;iostream&gt;</code><br />
<code>#include &lt;GL/glew.h&gt;</code><br />
<code>#include &lt;Utility/UnorderedMap/NRE_UnorderedMap.hpp&gt;</code><br />
<code>#include &lt;Utility/Singleton/NRE_Singleton.hpp&gt;</code><br />
<code>#include &lt;Utility/Id/NRE_Id.hpp&gt;</code><br />
<code>#include &quot;NRE_GraphicsDriver.tpp&quot;</code><br />
</div>
<p><a href="_n_r_e___graphics_driver_8hpp_source.php">Go to the source code of this file.</a></p>
<table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="nested-classes"></a>
Classes</h2></td></tr>
<tr class="memitem:"><td class="memItemLeft" align="right" valign="top">class &#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_graphics_1_1_graphics_driver.php">NRE::Graphics::GraphicsDriver</a></td></tr>
<tr class="memdesc:"><td class="mdescLeft">&#160;</td><td class="mdescRight">Manage the os-dependant graphics driver.  <a href="class_n_r_e_1_1_graphics_1_1_graphics_driver.php#details">More...</a><br /></td></tr>
<tr class="separator:"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table><table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="namespaces"></a>
Namespaces</h2></td></tr>
<tr class="memitem:namespace_n_r_e"><td class="memItemLeft" align="right" valign="top"> &#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="namespace_n_r_e.php">NRE</a></td></tr>
<tr class="memdesc:namespace_n_r_e"><td class="mdescLeft">&#160;</td><td class="mdescRight">The NearlyRealEngine's global namespace. <br /></td></tr>
<tr class="separator:"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:namespace_graphics"><td class="memItemLeft" align="right" valign="top"> &#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="namespace_graphics.php">Graphics</a></td></tr>
<tr class="memdesc:namespace_graphics"><td class="mdescLeft">&#160;</td><td class="mdescRight"><a class="el" href="namespace_graphics.php" title="Graphics&#39; API. ">Graphics</a>' API. <br /></td></tr>
<tr class="separator:"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table><table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="define-members"></a>
Macros</h2></td></tr>
<tr class="memitem:abcde84ea0ef5f934384e4620f092c85a"><td class="memItemLeft" align="right" valign="top"><a class="anchor" id="abcde84ea0ef5f934384e4620f092c85a"></a>
#define&#160;</td><td class="memItemRight" valign="bottom"><b>GLEW_STATIC</b></td></tr>
<tr class="separator:abcde84ea0ef5f934384e4620f092c85a"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:a9511a879ef26c5b9a6fc4f9605580e6f"><td class="memItemLeft" align="right" valign="top"><a class="anchor" id="a9511a879ef26c5b9a6fc4f9605580e6f"></a>
#define&#160;</td><td class="memItemRight" valign="bottom"><b>GLEWAPI</b>&#160;&#160;&#160;extern</td></tr>
<tr class="separator:a9511a879ef26c5b9a6fc4f9605580e6f"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table><table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="typedef-members"></a>
Typedefs</h2></td></tr>
<tr class="memitem:acc23abf7f667c39a7b447bc420a0af14"><td class="memItemLeft" align="right" valign="top"><a class="anchor" id="acc23abf7f667c39a7b447bc420a0af14"></a>
typedef std::size_t&#160;</td><td class="memItemRight" valign="bottom"><b>NRE::Graphics::Id</b></td></tr>
<tr class="separator:acc23abf7f667c39a7b447bc420a0af14"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table>
<a name="details" id="details"></a><h2 class="groupheader">Detailed Description</h2>
<div class="textblock"><p>Declaration of <a class="el" href="namespace_graphics.php" title="Graphics&#39; API. ">Graphics</a>'s API's Object : GraphicsDriver. </p>
<dl class="section author"><dt>Author</dt><dd>Louis ABEL </dd></dl>
<dl class="section date"><dt>Date</dt><dd>10/05/2019 </dd></dl>
<dl class="section copyright"><dt>Copyright</dt><dd>CC-BY-NC-SA </dd></dl>
</div></div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>
