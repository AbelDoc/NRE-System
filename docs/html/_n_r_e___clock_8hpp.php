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
        <title>NRE-System: /mnt/c/Users/abell/Documents/GitHub/NRE-System/src/System/Time/Clock/NRE_Clock.hpp File Reference</title>
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
<li class="navelem"><a class="el" href="dir_68267d1309a1af8e8297ef4c3efbcdba.php">src</a></li><li class="navelem"><a class="el" href="dir_ef68f1e1f5148ff8ef7fb1c955106c3c.php">System</a></li><li class="navelem"><a class="el" href="dir_2023b60a521fa94f074e6209789d9c9f.php">Time</a></li><li class="navelem"><a class="el" href="dir_04297c08d9ec56edc0b08583d24902cf.php">Clock</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="summary">
<a href="#nested-classes">Classes</a> &#124;
<a href="#namespaces">Namespaces</a> &#124;
<a href="#typedef-members">Typedefs</a> &#124;
<a href="#func-members">Functions</a>  </div>
  <div class="headertitle">
<div class="title">NRE_Clock.hpp File Reference</div>  </div>
</div><!--header-->
<div class="contents">

<p>Declaration of <a class="el" href="namespace_time.php" title="Time&#39;s API. ">Time</a>'s API's Object : Clock.  
<a href="#details">More...</a></p>
<div class="textblock"><code>#include &lt;iostream&gt;</code><br />
<code>#include &lt;thread&gt;</code><br />
<code>#include &lt;chrono&gt;</code><br />
<code>#include &lt;Utility/String/NRE_String.hpp&gt;</code><br />
<code>#include &quot;NRE_Clock.tpp&quot;</code><br />
</div>
<p><a href="_n_r_e___clock_8hpp_source.php">Go to the source code of this file.</a></p>
<table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="nested-classes"></a>
Classes</h2></td></tr>
<tr class="memitem:"><td class="memItemLeft" align="right" valign="top">class &#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_time_1_1_clock.php">NRE::Time::Clock</a></td></tr>
<tr class="memdesc:"><td class="mdescLeft">&#160;</td><td class="mdescRight">Manage timing and program pause.  <a href="class_n_r_e_1_1_time_1_1_clock.php#details">More...</a><br /></td></tr>
<tr class="separator:"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table><table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="namespaces"></a>
Namespaces</h2></td></tr>
<tr class="memitem:namespace_n_r_e"><td class="memItemLeft" align="right" valign="top"> &#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="namespace_n_r_e.php">NRE</a></td></tr>
<tr class="memdesc:namespace_n_r_e"><td class="mdescLeft">&#160;</td><td class="mdescRight">The NearlyRealEngine's global namespace. <br /></td></tr>
<tr class="separator:"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:namespace_time"><td class="memItemLeft" align="right" valign="top"> &#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="namespace_time.php">Time</a></td></tr>
<tr class="memdesc:namespace_time"><td class="mdescLeft">&#160;</td><td class="mdescRight"><a class="el" href="namespace_time.php" title="Time&#39;s API. ">Time</a>'s API. <br /></td></tr>
<tr class="separator:"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table><table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="typedef-members"></a>
Typedefs</h2></td></tr>
<tr class="memitem:ad1571e29443ed974088ad851f74b2824"><td class="memItemLeft" align="right" valign="top">typedef std::chrono::steady_clock&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="_n_r_e___clock_8hpp.php#ad1571e29443ed974088ad851f74b2824">NRE::Time::Chrono</a></td></tr>
<tr class="separator:ad1571e29443ed974088ad851f74b2824"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:aab6710cca35ec01cff2f2b352efcf4cb"><td class="memItemLeft" align="right" valign="top">typedef std::chrono::time_point&lt; Chrono &gt;&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="_n_r_e___clock_8hpp.php#aab6710cca35ec01cff2f2b352efcf4cb">NRE::Time::TimePoint</a></td></tr>
<tr class="separator:aab6710cca35ec01cff2f2b352efcf4cb"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:ab1956335fcfad28ae6fd32e8d9b1249d"><td class="memItemLeft" align="right" valign="top">typedef std::chrono::duration&lt; float, std::milli &gt;&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="_n_r_e___clock_8hpp.php#ab1956335fcfad28ae6fd32e8d9b1249d">NRE::Time::TimeStep</a></td></tr>
<tr class="separator:ab1956335fcfad28ae6fd32e8d9b1249d"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table><table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="func-members"></a>
Functions</h2></td></tr>
<tr class="memitem:ad13447567e4b329bf0263fac3563c3d8"><td class="memItemLeft" align="right" valign="top">std::ostream &amp;&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="_n_r_e___clock_8cpp.php#ad13447567e4b329bf0263fac3563c3d8">NRE::Time::operator&lt;&lt;</a> (std::ostream &amp;stream, Clock const &amp;o)</td></tr>
<tr class="separator:ad13447567e4b329bf0263fac3563c3d8"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table>
<a name="details" id="details"></a><h2 class="groupheader">Detailed Description</h2>
<div class="textblock"><p>Declaration of <a class="el" href="namespace_time.php" title="Time&#39;s API. ">Time</a>'s API's Object : Clock. </p>
<dl class="section author"><dt>Author</dt><dd>Louis ABEL </dd></dl>
<dl class="section date"><dt>Date</dt><dd>14/05/2019 </dd></dl>
<dl class="section copyright"><dt>Copyright</dt><dd>CC-BY-NC-SA </dd></dl>
</div><h2 class="groupheader">Typedef Documentation</h2>
<a class="anchor" id="file_ad1571e29443ed974088ad851f74b2824"></a>
<div class="memitem">
<div class="memproto">
      <table class="memname">
        <tr>
          <td class="memname">typedef std::chrono::steady_clock <a class="el" href="_n_r_e___clock_8hpp.php#ad1571e29443ed974088ad851f74b2824">NRE::Time::Chrono</a></td>
        </tr>
      </table>
</div><div class="memdoc">
<p>Shortcut to hide Chrono type </p>

</div>
</div>
<a class="anchor" id="file_aab6710cca35ec01cff2f2b352efcf4cb"></a>
<div class="memitem">
<div class="memproto">
      <table class="memname">
        <tr>
          <td class="memname">typedef std::chrono::time_point&lt;Chrono&gt; <a class="el" href="_n_r_e___clock_8hpp.php#aab6710cca35ec01cff2f2b352efcf4cb">NRE::Time::TimePoint</a></td>
        </tr>
      </table>
</div><div class="memdoc">
<p>Shortcut to hide TimePoint type </p>

</div>
</div>
<a class="anchor" id="file_ab1956335fcfad28ae6fd32e8d9b1249d"></a>
<div class="memitem">
<div class="memproto">
      <table class="memname">
        <tr>
          <td class="memname">typedef std::chrono::duration&lt;float, std::milli&gt; <a class="el" href="_n_r_e___clock_8hpp.php#ab1956335fcfad28ae6fd32e8d9b1249d">NRE::Time::TimeStep</a></td>
        </tr>
      </table>
</div><div class="memdoc">
<p>Shortcut to hide TimeStep type </p>

</div>
</div>
<h2 class="groupheader">Function Documentation</h2>
<a class="anchor" id="file_ad13447567e4b329bf0263fac3563c3d8"></a>
<div class="memitem">
<div class="memproto">
      <table class="memname">
        <tr>
          <td class="memname">std::ostream &amp; NRE::Time::operator&lt;&lt; </td>
          <td>(</td>
          <td class="paramtype">std::ostream &amp;&#160;</td>
          <td class="paramname"><em>stream</em>, </td>
        </tr>
        <tr>
          <td class="paramkey"></td>
          <td></td>
          <td class="paramtype"><a class="el" href="class_n_r_e_1_1_time_1_1_clock.php">Clock</a> const &amp;&#160;</td>
          <td class="paramname"><em>o</em>&#160;</td>
        </tr>
        <tr>
          <td></td>
          <td>)</td>
          <td></td><td></td>
        </tr>
      </table>
</div><div class="memdoc">
<p>Output stream operator for the object </p><dl class="params"><dt>Parameters</dt><dd>
  <table class="params">
    <tr><td class="paramname">stream</td><td>the stream to add the object's string representation </td></tr>
    <tr><td class="paramname">o</td><td>the object to add in the stream </td></tr>
  </table>
  </dd>
</dl>
<dl class="section return"><dt>Returns</dt><dd>the modified stream </dd></dl>

</div>
</div>
</div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>
