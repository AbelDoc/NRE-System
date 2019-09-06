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
        <title>NRE-System: /mnt/c/Users/abell/Documents/GitHub/NRE-System/src/System/Graphics/Driver/Context/NRE_Context.hpp Source File</title>
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
<li class="navelem"><a class="el" href="dir_68267d1309a1af8e8297ef4c3efbcdba.php">src</a></li><li class="navelem"><a class="el" href="dir_ef68f1e1f5148ff8ef7fb1c955106c3c.php">System</a></li><li class="navelem"><a class="el" href="dir_13c1ecb482d2b1153b2c0856159b065a.php">Graphics</a></li><li class="navelem"><a class="el" href="dir_81cdaf72272f1029aa25cae9892e5ec5.php">Driver</a></li><li class="navelem"><a class="el" href="dir_1477e6a23db3f04bafbf815d517a2f44.php">Context</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="headertitle">
<div class="title">NRE_Context.hpp</div>  </div>
</div><!--header-->
<div class="contents">
<a href="_n_r_e___context_8hpp.php">Go to the documentation of this file.</a><div class="fragment"><div class="line"><a name="l00001"></a><span class="lineno">    1</span>&#160;</div><div class="line"><a name="l00010"></a><span class="lineno">   10</span>&#160;<span class="preprocessor">     #pragma once</span></div><div class="line"><a name="l00011"></a><span class="lineno">   11</span>&#160;</div><div class="line"><a name="l00012"></a><span class="lineno">   12</span>&#160;<span class="preprocessor">     #include &lt;Header/NRE_Math.hpp&gt;</span></div><div class="line"><a name="l00013"></a><span class="lineno">   13</span>&#160;<span class="preprocessor">     #include &quot;../NRE_GraphicsDriver.hpp&quot;</span></div><div class="line"><a name="l00014"></a><span class="lineno">   14</span>&#160;<span class="preprocessor">     #include &quot;../../Window/Internal/NRE_InternalWindow.hpp&quot;</span></div><div class="line"><a name="l00015"></a><span class="lineno">   15</span>&#160;<span class="preprocessor">     #include &quot;<a class="code" href="_n_r_e___context_attributes_8hpp.php">Attributes/NRE_ContextAttributes.hpp</a>&quot;</span></div><div class="line"><a name="l00016"></a><span class="lineno">   16</span>&#160;</div><div class="line"><a name="l00017"></a><span class="lineno">   17</span>&#160;<span class="preprocessor">     #include &quot;../../../../Header/NRE_Exception.hpp&quot;</span></div><div class="line"><a name="l00018"></a><span class="lineno">   18</span>&#160;</div><div class="line"><a name="l00023"></a><span class="lineno">   23</span>&#160;     <span class="keyword">namespace </span><a class="code" href="namespace_n_r_e.php">NRE</a> {</div><div class="line"><a name="l00028"></a><span class="lineno">   28</span>&#160;         <span class="keyword">namespace </span><a class="code" href="namespace_graphics.php">Graphics</a> {</div><div class="line"><a name="l00029"></a><span class="lineno">   29</span>&#160;</div><div class="line"><a name="l00030"></a><span class="lineno">   30</span>&#160;<span class="preprocessor">             #ifdef _WIN32                           // Windows</span></div><div class="line"><a name="l00031"></a><span class="lineno">   31</span>&#160;                 <span class="keyword">typedef</span> HGLRC NativeContextType;</div><div class="line"><a name="l00032"></a><span class="lineno">   32</span>&#160;<span class="preprocessor">             #elif __linux__                         // Linux</span></div><div class="line"><a name="l00033"></a><span class="lineno">   33</span>&#160;                 <span class="keyword">typedef</span> GLXContext NativeContextType;</div><div class="line"><a name="l00034"></a><span class="lineno">   34</span>&#160;<span class="preprocessor">             #endif</span></div><div class="line"><a name="l00035"></a><span class="lineno">   35</span>&#160;</div><div class="line"><a name="l00040"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_graphics_1_1_context.php">   40</a></span>&#160;             <span class="keyword">class </span><a class="code" href="class_n_r_e_1_1_graphics_1_1_context.php">Context</a> {</div><div class="line"><a name="l00041"></a><span class="lineno">   41</span>&#160;                 <span class="keyword">private</span> :  <span class="comment">// Fields</span></div><div class="line"><a name="l00042"></a><span class="lineno">   42</span>&#160;                    NativeContextType <span class="keyword">internal</span>;     </div><div class="line"><a name="l00043"></a><span class="lineno">   43</span>&#160;                    <a class="code" href="class_n_r_e_1_1_graphics_1_1_context_attributes.php">ContextAttributes</a> attributes;   </div><div class="line"><a name="l00044"></a><span class="lineno">   44</span>&#160;                    <span class="keywordtype">bool</span> owned;                     </div><div class="line"><a name="l00046"></a><span class="lineno">   46</span>&#160;                <span class="keyword">public</span> :    <span class="comment">// Methods</span></div><div class="line"><a name="l00047"></a><span class="lineno">   47</span>&#160;                    <span class="comment">//## Constructor ##//</span></div><div class="line"><a name="l00053"></a><span class="lineno">   53</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_graphics_1_1_context.php#a36d866316c088e60ed9771e24ba6df84">Context</a>(<a class="code" href="class_n_r_e_1_1_graphics_1_1_internal_window.php">InternalWindow</a>&amp; window, <a class="code" href="class_n_r_e_1_1_graphics_1_1_context_attributes.php">ContextAttributes</a> <span class="keyword">const</span>&amp; attr);</div><div class="line"><a name="l00054"></a><span class="lineno">   54</span>&#160;</div><div class="line"><a name="l00055"></a><span class="lineno">   55</span>&#160;                    <span class="comment">//## Copy Constructor ##//</span></div><div class="line"><a name="l00060"></a><span class="lineno">   60</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_graphics_1_1_context.php#a36d866316c088e60ed9771e24ba6df84">Context</a>(<a class="code" href="class_n_r_e_1_1_graphics_1_1_context.php">Context</a> <span class="keyword">const</span>&amp; ctx) = <span class="keyword">delete</span>;</div><div class="line"><a name="l00061"></a><span class="lineno">   61</span>&#160;</div><div class="line"><a name="l00062"></a><span class="lineno">   62</span>&#160;                    <span class="comment">//## Move Constructor ##//</span></div><div class="line"><a name="l00067"></a><span class="lineno">   67</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_graphics_1_1_context.php#a36d866316c088e60ed9771e24ba6df84">Context</a>(<a class="code" href="class_n_r_e_1_1_graphics_1_1_context.php">Context</a> &amp;&amp; ctx) = <span class="keyword">delete</span>;</div><div class="line"><a name="l00068"></a><span class="lineno">   68</span>&#160;</div><div class="line"><a name="l00069"></a><span class="lineno">   69</span>&#160;                    <span class="comment">//## Deconstructor ##//</span></div><div class="line"><a name="l00073"></a><span class="lineno">   73</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_graphics_1_1_context.php#a59e9025d012689438fda98ecb309910f">~Context</a>();</div><div class="line"><a name="l00074"></a><span class="lineno">   74</span>&#160;</div><div class="line"><a name="l00075"></a><span class="lineno">   75</span>&#160;                    <span class="comment">//## Methods ##//</span></div><div class="line"><a name="l00079"></a><span class="lineno">   79</span>&#160;<span class="comment"></span>                        <span class="keywordtype">void</span> <a class="code" href="class_n_r_e_1_1_graphics_1_1_context.php#a19a97623f714c0a58cfb97fd9f775bc9">release</a>();</div><div class="line"><a name="l00080"></a><span class="lineno">   80</span>&#160;</div><div class="line"><a name="l00081"></a><span class="lineno">   81</span>&#160;                    <span class="comment">//## Assignment Operator ##//</span></div><div class="line"><a name="l00087"></a><span class="lineno">   87</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_graphics_1_1_context.php">Context</a>&amp; <a class="code" href="class_n_r_e_1_1_graphics_1_1_context.php#ae69f36da5074b4b37661a282d187e101">operator =</a>(<a class="code" href="class_n_r_e_1_1_graphics_1_1_context.php">Context</a> <span class="keyword">const</span>&amp; ctx) = <span class="keyword">delete</span>;</div><div class="line"><a name="l00093"></a><span class="lineno">   93</span>&#160;                        <a class="code" href="class_n_r_e_1_1_graphics_1_1_context.php">Context</a>&amp; <a class="code" href="class_n_r_e_1_1_graphics_1_1_context.php#ae69f36da5074b4b37661a282d187e101">operator =</a>(<a class="code" href="class_n_r_e_1_1_graphics_1_1_context.php">Context</a> &amp;&amp; ctx) = <span class="keyword">delete</span>;</div><div class="line"><a name="l00094"></a><span class="lineno">   94</span>&#160;             };</div><div class="line"><a name="l00095"></a><span class="lineno">   95</span>&#160;         }</div><div class="line"><a name="l00096"></a><span class="lineno">   96</span>&#160;     }</div><div class="line"><a name="l00097"></a><span class="lineno">   97</span>&#160;</div><div class="line"><a name="l00098"></a><span class="lineno">   98</span>&#160;<span class="preprocessor">     #include &quot;NRE_Context.tpp&quot;</span></div><div class="ttc" id="class_n_r_e_1_1_graphics_1_1_context_php_ae69f36da5074b4b37661a282d187e101"><div class="ttname"><a href="class_n_r_e_1_1_graphics_1_1_context.php#ae69f36da5074b4b37661a282d187e101">NRE::Graphics::Context::operator=</a></div><div class="ttdeci">Context &amp; operator=(Context const &amp;ctx)=delete</div></div>
<div class="ttc" id="class_n_r_e_1_1_graphics_1_1_context_php_a36d866316c088e60ed9771e24ba6df84"><div class="ttname"><a href="class_n_r_e_1_1_graphics_1_1_context.php#a36d866316c088e60ed9771e24ba6df84">NRE::Graphics::Context::Context</a></div><div class="ttdeci">Context(InternalWindow &amp;window, ContextAttributes const &amp;attr)</div><div class="ttdef"><b>Definition:</b> NRE_LinuxContext.cpp:18</div></div>
<div class="ttc" id="class_n_r_e_1_1_graphics_1_1_context_php"><div class="ttname"><a href="class_n_r_e_1_1_graphics_1_1_context.php">NRE::Graphics::Context</a></div><div class="ttdoc">Describe an OpenGL Context with a set of attributes. </div><div class="ttdef"><b>Definition:</b> NRE_Context.hpp:40</div></div>
<div class="ttc" id="namespace_n_r_e_php"><div class="ttname"><a href="namespace_n_r_e.php">NRE</a></div><div class="ttdoc">The NearlyRealEngine&amp;#39;s global namespace. </div></div>
<div class="ttc" id="namespace_graphics_php"><div class="ttname"><a href="namespace_graphics.php">Graphics</a></div><div class="ttdoc">Graphics&amp;#39; API. </div></div>
<div class="ttc" id="class_n_r_e_1_1_graphics_1_1_context_attributes_php"><div class="ttname"><a href="class_n_r_e_1_1_graphics_1_1_context_attributes.php">NRE::Graphics::ContextAttributes</a></div><div class="ttdoc">Regroup all attributes needed in a GL context, should be modified before creation. </div><div class="ttdef"><b>Definition:</b> NRE_ContextAttributes.hpp:52</div></div>
<div class="ttc" id="class_n_r_e_1_1_graphics_1_1_context_php_a59e9025d012689438fda98ecb309910f"><div class="ttname"><a href="class_n_r_e_1_1_graphics_1_1_context.php#a59e9025d012689438fda98ecb309910f">NRE::Graphics::Context::~Context</a></div><div class="ttdeci">~Context()</div></div>
<div class="ttc" id="class_n_r_e_1_1_graphics_1_1_internal_window_php"><div class="ttname"><a href="class_n_r_e_1_1_graphics_1_1_internal_window.php">NRE::Graphics::InternalWindow</a></div><div class="ttdoc">Manage the internal os-dependant graphics window. </div><div class="ttdef"><b>Definition:</b> NRE_InternalWindow.hpp:34</div></div>
<div class="ttc" id="_n_r_e___context_attributes_8hpp_php"><div class="ttname"><a href="_n_r_e___context_attributes_8hpp.php">NRE_ContextAttributes.hpp</a></div><div class="ttdoc">Declaration of Graphics&amp;#39;s API&amp;#39;s Object : ContextAttributes. </div></div>
<div class="ttc" id="class_n_r_e_1_1_graphics_1_1_context_php_a19a97623f714c0a58cfb97fd9f775bc9"><div class="ttname"><a href="class_n_r_e_1_1_graphics_1_1_context.php#a19a97623f714c0a58cfb97fd9f775bc9">NRE::Graphics::Context::release</a></div><div class="ttdeci">void release()</div><div class="ttdef"><b>Definition:</b> NRE_LinuxContext.cpp:119</div></div>
</div><!-- fragment --></div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>