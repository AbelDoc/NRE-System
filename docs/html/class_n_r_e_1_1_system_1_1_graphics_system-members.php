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
        <title>NRE-System: Member List</title>
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
      <li class="current"><a href="annotated.php"><span>Classes</span></a></li>
      <li><a href="files.php"><span>Files</span></a></li>
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
      <li><a href="annotated.php"><span>Class&#160;List</span></a></li>
      <li><a href="classes.php"><span>Class&#160;Index</span></a></li>
      <li><a href="hierarchy.php"><span>Class&#160;Hierarchy</span></a></li>
      <li><a href="functions.php"><span>Class&#160;Members</span></a></li>
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
<li class="navelem"><a class="el" href="namespace_n_r_e.php">NRE</a></li><li class="navelem"><b>System</b></li><li class="navelem"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php">GraphicsSystem</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="headertitle">
<div class="title">NRE::System::GraphicsSystem Member List</div>  </div>
</div><!--header-->
<div class="contents">

<p>This is the complete list of members for <a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php">NRE::System::GraphicsSystem</a>, including all inherited members.</p>
<table class="directory">
  <tr class="even"><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php#a10e0a93d4f756515711c309550ee4099">closeWindow</a>(Graphics::Id id)</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php">NRE::System::GraphicsSystem</a></td><td class="entry"></td></tr>
  <tr><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php#a4f3eafe115b1516f039e8a537caf83b0">createWindow</a>(Utility::String const &amp;title, Math::Point2D&lt; unsigned int &gt; const &amp;position, Math::Vector2D&lt; unsigned int &gt; const &amp;size, unsigned int style, Graphics::ContextAttributes const &amp;attr)</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php">NRE::System::GraphicsSystem</a></td><td class="entry"></td></tr>
  <tr class="even"><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php#a2e274df8691b22084899eeba83781994">createWindow</a>(Utility::String const &amp;title, Math::Vector2D&lt; unsigned int &gt; const &amp;size, unsigned int style, Graphics::ContextAttributes const &amp;attr)</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php">NRE::System::GraphicsSystem</a></td><td class="entry"></td></tr>
  <tr><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php#ac856987f85e1c7f3ceb17075b9fa0845">getWindow</a>(Graphics::Id id)</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php">NRE::System::GraphicsSystem</a></td><td class="entry"></td></tr>
  <tr class="even"><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php#a21c1ed2d8e7e7749616afa84c0c99dc1">GraphicsSystem</a>()</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php">NRE::System::GraphicsSystem</a></td><td class="entry"></td></tr>
  <tr><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php#ac2fe2146d857045f46f72a13c83de34c">GraphicsSystem</a>(GraphicsSystem const &amp;sys)=delete</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php">NRE::System::GraphicsSystem</a></td><td class="entry"></td></tr>
  <tr class="even"><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php#aa66c608cf9a7877e2e2a68f7b97b85e3">GraphicsSystem</a>(GraphicsSystem &amp;&amp;sys)=delete</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php">NRE::System::GraphicsSystem</a></td><td class="entry"></td></tr>
  <tr><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php#ae73e6260470cf6d4afac187cba4e431c">isRunning</a>() const </td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php">NRE::System::GraphicsSystem</a></td><td class="entry"></td></tr>
  <tr class="even"><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php#a90ef417cfe165ad559a7cdcbfb333b25">operator=</a>(GraphicsSystem const &amp;sys)=delete</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php">NRE::System::GraphicsSystem</a></td><td class="entry"></td></tr>
  <tr><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php#ac7d82e856e369d86e7413cac40f3c4de">operator=</a>(GraphicsSystem &amp;&amp;sys)=delete</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php">NRE::System::GraphicsSystem</a></td><td class="entry"></td></tr>
  <tr class="even"><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php#a8a743aa5637475cf7203cba2c6621d49">removeWindow</a>(Graphics::Id const &amp;id)</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php">NRE::System::GraphicsSystem</a></td><td class="entry"></td></tr>
  <tr><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php#a14000797c1edf260675cf16a70276df5">~GraphicsSystem</a>()</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_graphics_system.php">NRE::System::GraphicsSystem</a></td><td class="entry"></td></tr>
</table></div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>
