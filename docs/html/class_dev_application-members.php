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

</div><!-- top -->
<div class="header">
  <div class="headertitle">
<div class="title">DevApplication Member List</div>  </div>
</div><!--header-->
<div class="contents">

<p>This is the complete list of members for <a class="el" href="class_dev_application.php">DevApplication</a>, including all inherited members.</p>
<table class="directory">
  <tr class="even"><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php#a6f7a8eb37b949821baac564f043760d1">addHandler</a>(typename Event::EventHandler&lt; T &gt;::Handler &amp;&amp;handler)</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php">NRE::System::Application</a></td><td class="entry"></td></tr>
  <tr><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php#a7e91b3d4219b340ff9d92e3f95c24e57">Application</a>()=delete</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php">NRE::System::Application</a></td><td class="entry"></td></tr>
  <tr class="even"><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php#a2b7e38709a8d9ab78e93f0fca2fa9a12">Application</a>(Utility::String const &amp;title, Math::Point2D&lt; unsigned int &gt; const &amp;position, Math::Vector2D&lt; unsigned int &gt; const &amp;size, unsigned int style, Graphics::ContextAttributes const &amp;attr=Graphics::ContextAttributes())</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php">NRE::System::Application</a></td><td class="entry"></td></tr>
  <tr><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php#add8202c6e0befe8f09f2ad4dfc072898">Application</a>(Utility::String const &amp;title, Math::Vector2D&lt; unsigned int &gt; const &amp;size, unsigned int style, Graphics::ContextAttributes const &amp;attr=Graphics::ContextAttributes())</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php">NRE::System::Application</a></td><td class="entry"></td></tr>
  <tr class="even"><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php#ad6bf28c20609905b63ee4ad13e7acdf6">Application</a>(Application const &amp;app)=delete</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php">NRE::System::Application</a></td><td class="entry"></td></tr>
  <tr><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php#a41c56934497f4c5d5ef321e6b979b488">Application</a>(Application &amp;&amp;app)=delete</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php">NRE::System::Application</a></td><td class="entry"></td></tr>
  <tr class="even"><td class="entry"><a class="el" href="class_dev_application.php#a9e2481d2ae9ec56c07230690c18218e0">create</a>() override</td><td class="entry"><a class="el" href="class_dev_application.php">DevApplication</a></td><td class="entry"><span class="mlabel">inline</span><span class="mlabel">virtual</span></td></tr>
  <tr><td class="entry"><a class="el" href="class_dev_application.php#adf819436e1c2ad1b76ae0d57322f3817">destroy</a>() override</td><td class="entry"><a class="el" href="class_dev_application.php">DevApplication</a></td><td class="entry"><span class="mlabel">inline</span><span class="mlabel">virtual</span></td></tr>
  <tr bgcolor="#f0f0f0" class="even"><td class="entry"><b>DevApplication</b>() (defined in <a class="el" href="class_dev_application.php">DevApplication</a>)</td><td class="entry"><a class="el" href="class_dev_application.php">DevApplication</a></td><td class="entry"><span class="mlabel">inline</span></td></tr>
  <tr><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php#a3f0bcb146c0f1f64155718618f6c9dce">NREmain</a>()</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php">NRE::System::Application</a></td><td class="entry"></td></tr>
  <tr class="even"><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php#a91a31e944a7767fe6c75579370dc9fda">operator=</a>(Application const &amp;app)=delete</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php">NRE::System::Application</a></td><td class="entry"></td></tr>
  <tr><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php#ad7e2fff6d6858524305a44526b213398">operator=</a>(Application &amp;&amp;app)=delete</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php">NRE::System::Application</a></td><td class="entry"></td></tr>
  <tr class="even"><td class="entry"><a class="el" href="class_dev_application.php#a1723ab47f59a1d0205b03795a52a530c">render</a>() override</td><td class="entry"><a class="el" href="class_dev_application.php">DevApplication</a></td><td class="entry"><span class="mlabel">inline</span><span class="mlabel">virtual</span></td></tr>
  <tr><td class="entry"><a class="el" href="class_dev_application.php#ae6f34c5c8f81903c448ffba296fa005d">update</a>() override</td><td class="entry"><a class="el" href="class_dev_application.php">DevApplication</a></td><td class="entry"><span class="mlabel">inline</span><span class="mlabel">virtual</span></td></tr>
  <tr class="even"><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php#a9fcb9646e9736afa161f41ca11581835">~Application</a>()</td><td class="entry"><a class="el" href="class_n_r_e_1_1_system_1_1_application.php">NRE::System::Application</a></td><td class="entry"><span class="mlabel">virtual</span></td></tr>
</table></div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>