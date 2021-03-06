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
        <title>NRE-System: /mnt/c/Users/abell/Documents/GitHub/NRE-System/src/System/CpuID/NRE_CpuID.hpp Source File</title>
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
<li class="navelem"><a class="el" href="dir_68267d1309a1af8e8297ef4c3efbcdba.php">src</a></li><li class="navelem"><a class="el" href="dir_ef68f1e1f5148ff8ef7fb1c955106c3c.php">System</a></li><li class="navelem"><a class="el" href="dir_b26836c3efc3ec09408abbe59e8dcc5a.php">CpuID</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="headertitle">
<div class="title">NRE_CpuID.hpp</div>  </div>
</div><!--header-->
<div class="contents">
<a href="_n_r_e___cpu_i_d_8hpp.php">Go to the documentation of this file.</a><div class="fragment"><div class="line"><a name="l00001"></a><span class="lineno">    1</span>&#160;</div><div class="line"><a name="l00010"></a><span class="lineno">   10</span>&#160;<span class="preprocessor">     #pragma once</span></div><div class="line"><a name="l00011"></a><span class="lineno">   11</span>&#160;</div><div class="line"><a name="l00012"></a><span class="lineno">   12</span>&#160;<span class="preprocessor">    #ifdef _WIN32</span></div><div class="line"><a name="l00013"></a><span class="lineno">   13</span>&#160;<span class="preprocessor">        #include &lt;limits.h&gt;</span></div><div class="line"><a name="l00014"></a><span class="lineno">   14</span>&#160;<span class="preprocessor">        #include &lt;intrin.h&gt;</span></div><div class="line"><a name="l00015"></a><span class="lineno">   15</span>&#160;        <span class="keyword">typedef</span> <span class="keywordtype">unsigned</span> __int32 Register;</div><div class="line"><a name="l00016"></a><span class="lineno">   16</span>&#160;<span class="preprocessor">    #else</span></div><div class="line"><a name="l00017"></a><span class="lineno">   17</span>&#160;<span class="preprocessor">        #include &lt;stdint.h&gt;</span></div><div class="line"><a name="l00018"></a><span class="lineno">   18</span>&#160;        <span class="keyword">typedef</span> uint32_t Register;</div><div class="line"><a name="l00019"></a><span class="lineno">   19</span>&#160;<span class="preprocessor">    #endif</span></div><div class="line"><a name="l00020"></a><span class="lineno">   20</span>&#160;</div><div class="line"><a name="l00021"></a><span class="lineno">   21</span>&#160;<span class="preprocessor">    #include &lt;Utility/String/NRE_String.hpp&gt;</span></div><div class="line"><a name="l00022"></a><span class="lineno">   22</span>&#160;</div><div class="line"><a name="l00027"></a><span class="lineno">   27</span>&#160;    <span class="keyword">namespace </span><a class="code" href="namespace_n_r_e.php">NRE</a> {</div><div class="line"><a name="l00032"></a><span class="lineno">   32</span>&#160;        <span class="keyword">namespace </span><a class="code" href="namespace_system.php">System</a> {</div><div class="line"><a name="l00033"></a><span class="lineno">   33</span>&#160;</div><div class="line"><a name="l00038"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_system_1_1_cpu_i_d.php">   38</a></span>&#160;            <span class="keyword">class </span><a class="code" href="class_n_r_e_1_1_system_1_1_cpu_i_d.php">CpuID</a> {</div><div class="line"><a name="l00039"></a><span class="lineno">   39</span>&#160;                <span class="keyword">private</span> :   <span class="comment">// Fields</span></div><div class="line"><a name="l00040"></a><span class="lineno">   40</span>&#160;                    Register registers[4];  </div><div class="line"><a name="l00042"></a><span class="lineno">   42</span>&#160;                <span class="keyword">public</span> :    <span class="comment">// Methods</span></div><div class="line"><a name="l00043"></a><span class="lineno">   43</span>&#160;                    <span class="comment">//## Constructor ##//</span></div><div class="line"><a name="l00047"></a><span class="lineno">   47</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#ac04fc36f36ff255faec57c2fdfc83967">CpuID</a>() = <span class="keyword">delete</span>;</div><div class="line"><a name="l00052"></a><span class="lineno">   52</span>&#160;                        <a class="code" href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#ac04fc36f36ff255faec57c2fdfc83967">CpuID</a>(<span class="keywordtype">unsigned</span> <span class="keywordtype">int</span> i);</div><div class="line"><a name="l00053"></a><span class="lineno">   53</span>&#160;</div><div class="line"><a name="l00054"></a><span class="lineno">   54</span>&#160;                    <span class="comment">//## Getter ##//</span></div><div class="line"><a name="l00060"></a><span class="lineno">   60</span>&#160;<span class="comment"></span>                        Register <span class="keyword">const</span>&amp; <a class="code" href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#ab26379e14f22509c390fc3673586948c">getRegister</a>(<span class="keywordtype">unsigned</span> <span class="keywordtype">int</span> index) <span class="keyword">const</span>;</div><div class="line"><a name="l00064"></a><span class="lineno">   64</span>&#160;                        <span class="keyword">const</span> Register* <a class="code" href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#a31efb1583c0414b452c53ac1ef492ca7">getRegisters</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00068"></a><span class="lineno">   68</span>&#160;                        std::size_t <a class="code" href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#a1a64ffdf0efa46aa56d0254381340c6f">getRegistersSize</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00072"></a><span class="lineno">   72</span>&#160;                        Register <span class="keyword">const</span>&amp; <a class="code" href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#ac1be8d5bd47c4cda2620d4fd1cb38553">getEax</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00076"></a><span class="lineno">   76</span>&#160;                        Register <span class="keyword">const</span>&amp; <a class="code" href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#a2d2fa8cf048b38bc030c0eac79d170e8">getEbx</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00080"></a><span class="lineno">   80</span>&#160;                        Register <span class="keyword">const</span>&amp; <a class="code" href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#abbee77878bf7de86d330240e764cd794">getEcx</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00084"></a><span class="lineno">   84</span>&#160;                        Register <span class="keyword">const</span>&amp; <a class="code" href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#ad33f62f073225b2969b30b4eb4157858">getEdx</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00085"></a><span class="lineno">   85</span>&#160;</div><div class="line"><a name="l00086"></a><span class="lineno">   86</span>&#160;                    <span class="comment">//## Access Operator ##//</span></div><div class="line"><a name="l00092"></a><span class="lineno">   92</span>&#160;<span class="comment"></span>                        Register <span class="keyword">const</span>&amp; <a class="code" href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#a27333c4dc4c2360f695f24349360995a">operator []</a>(<span class="keywordtype">unsigned</span> <span class="keywordtype">int</span> index) <span class="keyword">const</span>;</div><div class="line"><a name="l00093"></a><span class="lineno">   93</span>&#160;</div><div class="line"><a name="l00094"></a><span class="lineno">   94</span>&#160;                    <span class="comment">//## Stream Operator ##//</span></div><div class="line"><a name="l00099"></a><span class="lineno">   99</span>&#160;<span class="comment"></span>                        Utility::String <a class="code" href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#a75be230e4136a130352e51a9d7e5215d">toString</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00100"></a><span class="lineno">  100</span>&#160;            };</div><div class="line"><a name="l00101"></a><span class="lineno">  101</span>&#160;</div><div class="line"><a name="l00108"></a><span class="lineno">  108</span>&#160;            std::ostream&amp; operator &lt;&lt;(std::ostream&amp; stream, <a class="code" href="class_n_r_e_1_1_system_1_1_cpu_i_d.php">CpuID</a> <span class="keyword">const</span>&amp; o);</div><div class="line"><a name="l00109"></a><span class="lineno">  109</span>&#160;        }</div><div class="line"><a name="l00110"></a><span class="lineno">  110</span>&#160;    }</div><div class="line"><a name="l00111"></a><span class="lineno">  111</span>&#160;</div><div class="line"><a name="l00112"></a><span class="lineno">  112</span>&#160;<span class="preprocessor">    #include &quot;NRE_CpuID.tpp&quot;</span></div><div class="ttc" id="class_n_r_e_1_1_system_1_1_cpu_i_d_php_ac1be8d5bd47c4cda2620d4fd1cb38553"><div class="ttname"><a href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#ac1be8d5bd47c4cda2620d4fd1cb38553">NRE::System::CpuID::getEax</a></div><div class="ttdeci">Register const &amp; getEax() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_system_1_1_cpu_i_d_php_abbee77878bf7de86d330240e764cd794"><div class="ttname"><a href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#abbee77878bf7de86d330240e764cd794">NRE::System::CpuID::getEcx</a></div><div class="ttdeci">Register const &amp; getEcx() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_system_1_1_cpu_i_d_php_ab26379e14f22509c390fc3673586948c"><div class="ttname"><a href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#ab26379e14f22509c390fc3673586948c">NRE::System::CpuID::getRegister</a></div><div class="ttdeci">Register const &amp; getRegister(unsigned int index) const </div></div>
<div class="ttc" id="class_n_r_e_1_1_system_1_1_cpu_i_d_php_a75be230e4136a130352e51a9d7e5215d"><div class="ttname"><a href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#a75be230e4136a130352e51a9d7e5215d">NRE::System::CpuID::toString</a></div><div class="ttdeci">Utility::String toString() const </div><div class="ttdef"><b>Definition:</b> NRE_CpuID.cpp:25</div></div>
<div class="ttc" id="class_n_r_e_1_1_system_1_1_cpu_i_d_php_ad33f62f073225b2969b30b4eb4157858"><div class="ttname"><a href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#ad33f62f073225b2969b30b4eb4157858">NRE::System::CpuID::getEdx</a></div><div class="ttdeci">Register const &amp; getEdx() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_system_1_1_cpu_i_d_php_ac04fc36f36ff255faec57c2fdfc83967"><div class="ttname"><a href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#ac04fc36f36ff255faec57c2fdfc83967">NRE::System::CpuID::CpuID</a></div><div class="ttdeci">CpuID()=delete</div></div>
<div class="ttc" id="namespace_system_php"><div class="ttname"><a href="namespace_system.php">System</a></div><div class="ttdoc">System&amp;#39;s API. </div></div>
<div class="ttc" id="namespace_n_r_e_php"><div class="ttname"><a href="namespace_n_r_e.php">NRE</a></div><div class="ttdoc">The NearlyRealEngine&amp;#39;s global namespace. </div></div>
<div class="ttc" id="class_n_r_e_1_1_system_1_1_cpu_i_d_php_a27333c4dc4c2360f695f24349360995a"><div class="ttname"><a href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#a27333c4dc4c2360f695f24349360995a">NRE::System::CpuID::operator[]</a></div><div class="ttdeci">Register const &amp; operator[](unsigned int index) const </div></div>
<div class="ttc" id="class_n_r_e_1_1_system_1_1_cpu_i_d_php_a1a64ffdf0efa46aa56d0254381340c6f"><div class="ttname"><a href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#a1a64ffdf0efa46aa56d0254381340c6f">NRE::System::CpuID::getRegistersSize</a></div><div class="ttdeci">std::size_t getRegistersSize() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_system_1_1_cpu_i_d_php"><div class="ttname"><a href="class_n_r_e_1_1_system_1_1_cpu_i_d.php">NRE::System::CpuID</a></div><div class="ttdoc">Allow access to the cpuid intrinsic command for all system. </div><div class="ttdef"><b>Definition:</b> NRE_CpuID.hpp:38</div></div>
<div class="ttc" id="class_n_r_e_1_1_system_1_1_cpu_i_d_php_a31efb1583c0414b452c53ac1ef492ca7"><div class="ttname"><a href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#a31efb1583c0414b452c53ac1ef492ca7">NRE::System::CpuID::getRegisters</a></div><div class="ttdeci">const Register * getRegisters() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_system_1_1_cpu_i_d_php_a2d2fa8cf048b38bc030c0eac79d170e8"><div class="ttname"><a href="class_n_r_e_1_1_system_1_1_cpu_i_d.php#a2d2fa8cf048b38bc030c0eac79d170e8">NRE::System::CpuID::getEbx</a></div><div class="ttdeci">Register const &amp; getEbx() const </div></div>
</div><!-- fragment --></div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>
