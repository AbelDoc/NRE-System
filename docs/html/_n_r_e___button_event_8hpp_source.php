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
        <title>NRE-System: /mnt/c/Users/abell/Documents/GitHub/NRE-System/src/System/Event/Event/Button/NRE_ButtonEvent.hpp Source File</title>
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
<li class="navelem"><a class="el" href="dir_68267d1309a1af8e8297ef4c3efbcdba.php">src</a></li><li class="navelem"><a class="el" href="dir_ef68f1e1f5148ff8ef7fb1c955106c3c.php">System</a></li><li class="navelem"><a class="el" href="dir_c60d7283d11d7ab0b1fc187569b1f175.php">Event</a></li><li class="navelem"><a class="el" href="dir_b101bbb39a3efb24b558c10a5603263e.php">Event</a></li><li class="navelem"><a class="el" href="dir_22d34ccadfc2dbcc346758df559ccca7.php">Button</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="headertitle">
<div class="title">NRE_ButtonEvent.hpp</div>  </div>
</div><!--header-->
<div class="contents">
<a href="_n_r_e___button_event_8hpp.php">Go to the documentation of this file.</a><div class="fragment"><div class="line"><a name="l00001"></a><span class="lineno">    1</span>&#160;</div><div class="line"><a name="l00010"></a><span class="lineno">   10</span>&#160;<span class="preprocessor">    #pragma once</span></div><div class="line"><a name="l00011"></a><span class="lineno">   11</span>&#160;</div><div class="line"><a name="l00012"></a><span class="lineno">   12</span>&#160;<span class="preprocessor">    #include &lt;Header/NRE_Math.hpp&gt;</span></div><div class="line"><a name="l00013"></a><span class="lineno">   13</span>&#160;</div><div class="line"><a name="l00014"></a><span class="lineno">   14</span>&#160;<span class="preprocessor">    #include &quot;../../Input/Buttons/NRE_Buttons.hpp&quot;</span></div><div class="line"><a name="l00015"></a><span class="lineno">   15</span>&#160;</div><div class="line"><a name="l00020"></a><span class="lineno">   20</span>&#160;    <span class="keyword">namespace </span><a class="code" href="namespace_n_r_e.php">NRE</a> {</div><div class="line"><a name="l00025"></a><span class="lineno">   25</span>&#160;        <span class="keyword">namespace </span><a class="code" href="namespace_event.php">Event</a> {</div><div class="line"><a name="l00026"></a><span class="lineno">   26</span>&#160;</div><div class="line"><a name="l00031"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_event_1_1_button_event.php">   31</a></span>&#160;            <span class="keyword">class </span><a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php">ButtonEvent</a> {</div><div class="line"><a name="l00032"></a><span class="lineno">   32</span>&#160;                <span class="keyword">private</span>:    <span class="comment">//Fields</span></div><div class="line"><a name="l00033"></a><span class="lineno">   33</span>&#160;                    <a class="code" href="_n_r_e___buttons_8hpp.php#a3117cef30b4eed21ee57db72bd9d3ef8">ButtonCode</a> code;                        </div><div class="line"><a name="l00034"></a><span class="lineno">   34</span>&#160;                    Math::Point2D&lt;unsigned int&gt; position;   </div><div class="line"><a name="l00036"></a><span class="lineno">   36</span>&#160;                <span class="keyword">public</span>:    <span class="comment">// Methods</span></div><div class="line"><a name="l00037"></a><span class="lineno">   37</span>&#160;                    <span class="comment">//## Constructor ##//</span></div><div class="line"><a name="l00041"></a><span class="lineno">   41</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php#afa46b89a8a861c4c90adc8183ecb80c9">ButtonEvent</a>() = <span class="keyword">delete</span>;</div><div class="line"><a name="l00047"></a><span class="lineno">   47</span>&#160;                        <a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php#afa46b89a8a861c4c90adc8183ecb80c9">ButtonEvent</a>(<a class="code" href="_n_r_e___buttons_8hpp.php#a3117cef30b4eed21ee57db72bd9d3ef8">ButtonCode</a> c, Math::Point2D&lt;unsigned int&gt; <span class="keyword">const</span>&amp; pos);</div><div class="line"><a name="l00048"></a><span class="lineno">   48</span>&#160;</div><div class="line"><a name="l00049"></a><span class="lineno">   49</span>&#160;                    <span class="comment">//## Copy-Constructor ##//</span></div><div class="line"><a name="l00054"></a><span class="lineno">   54</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php#afa46b89a8a861c4c90adc8183ecb80c9">ButtonEvent</a>(<a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php">ButtonEvent</a> <span class="keyword">const</span>&amp; e) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00055"></a><span class="lineno">   55</span>&#160;</div><div class="line"><a name="l00056"></a><span class="lineno">   56</span>&#160;                    <span class="comment">//## Move-Constructor ##//</span></div><div class="line"><a name="l00061"></a><span class="lineno">   61</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php#afa46b89a8a861c4c90adc8183ecb80c9">ButtonEvent</a>(<a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php">ButtonEvent</a> &amp;&amp; e) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00062"></a><span class="lineno">   62</span>&#160;</div><div class="line"><a name="l00063"></a><span class="lineno">   63</span>&#160;                    <span class="comment">//## Deconstructor ##//</span></div><div class="line"><a name="l00067"></a><span class="lineno">   67</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php#a9bbb9c8bcc71577bcc65c67571f77723">~ButtonEvent</a>() = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00068"></a><span class="lineno">   68</span>&#160;</div><div class="line"><a name="l00069"></a><span class="lineno">   69</span>&#160;                    <span class="comment">//## Getter ##//</span></div><div class="line"><a name="l00073"></a><span class="lineno">   73</span>&#160;<span class="comment"></span>                        <span class="keyword">inline</span> <a class="code" href="_n_r_e___buttons_8hpp.php#a3117cef30b4eed21ee57db72bd9d3ef8">ButtonCode</a> <a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php#a9be1f65a106e9efa1c74fc9b9e127c93">getCode</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00077"></a><span class="lineno">   77</span>&#160;                        <span class="keyword">inline</span> Math::Point2D&lt;unsigned int&gt; <span class="keyword">const</span>&amp; <a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php#a95f64672b15258e2a75d989024c5d5cf">getPosition</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00083"></a><span class="lineno">   83</span>&#160;                        <span class="keyword">inline</span> <span class="keywordtype">bool</span> <a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php#ac2fb5ff4b3a5447886ab374c3e211aa8">isCode</a>(<a class="code" href="_n_r_e___buttons_8hpp.php#a3117cef30b4eed21ee57db72bd9d3ef8">ButtonCode</a> c) <span class="keyword">const</span>;</div><div class="line"><a name="l00084"></a><span class="lineno">   84</span>&#160;</div><div class="line"><a name="l00085"></a><span class="lineno">   85</span>&#160;                    <span class="comment">//## Assignment Operator ##//</span></div><div class="line"><a name="l00091"></a><span class="lineno">   91</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php">ButtonEvent</a>&amp; <a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php#a096ac30c61997b412801ce35a00f9544">operator =</a>(<a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php">ButtonEvent</a> <span class="keyword">const</span>&amp; e) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00097"></a><span class="lineno">   97</span>&#160;                        <a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php">ButtonEvent</a>&amp; <a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php#a096ac30c61997b412801ce35a00f9544">operator =</a>(<a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php">ButtonEvent</a> &amp;&amp; e) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00098"></a><span class="lineno">   98</span>&#160;</div><div class="line"><a name="l00099"></a><span class="lineno">   99</span>&#160;                    <span class="comment">//## Comparison Operator ##//</span></div><div class="line"><a name="l00105"></a><span class="lineno">  105</span>&#160;<span class="comment"></span>                        <span class="keywordtype">bool</span> <a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php#a27372075885045c427d151529d249f23">operator ==</a>(<a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php">ButtonEvent</a> <span class="keyword">const</span>&amp; e) <span class="keyword">const</span>;</div><div class="line"><a name="l00106"></a><span class="lineno">  106</span>&#160;            };</div><div class="line"><a name="l00107"></a><span class="lineno">  107</span>&#160;</div><div class="line"><a name="l00108"></a><span class="lineno">  108</span>&#160;            <span class="keyword">typedef</span> <a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php">ButtonEvent</a> <a class="code" href="class_n_r_e_1_1_event_1_1_button_event.php">ButtonEventData</a>;</div><div class="line"><a name="l00109"></a><span class="lineno">  109</span>&#160;        }</div><div class="line"><a name="l00110"></a><span class="lineno">  110</span>&#160;    }</div><div class="line"><a name="l00111"></a><span class="lineno">  111</span>&#160;</div><div class="line"><a name="l00112"></a><span class="lineno">  112</span>&#160;<span class="preprocessor">    #include &quot;NRE_ButtonEvent.tpp&quot;</span></div><div class="ttc" id="class_n_r_e_1_1_event_1_1_button_event_php_a9be1f65a106e9efa1c74fc9b9e127c93"><div class="ttname"><a href="class_n_r_e_1_1_event_1_1_button_event.php#a9be1f65a106e9efa1c74fc9b9e127c93">NRE::Event::ButtonEvent::getCode</a></div><div class="ttdeci">ButtonCode getCode() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_event_1_1_button_event_php_a096ac30c61997b412801ce35a00f9544"><div class="ttname"><a href="class_n_r_e_1_1_event_1_1_button_event.php#a096ac30c61997b412801ce35a00f9544">NRE::Event::ButtonEvent::operator=</a></div><div class="ttdeci">ButtonEvent &amp; operator=(ButtonEvent const &amp;e)=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_event_1_1_button_event_php_a9bbb9c8bcc71577bcc65c67571f77723"><div class="ttname"><a href="class_n_r_e_1_1_event_1_1_button_event.php#a9bbb9c8bcc71577bcc65c67571f77723">NRE::Event::ButtonEvent::~ButtonEvent</a></div><div class="ttdeci">~ButtonEvent()=default</div></div>
<div class="ttc" id="namespace_event_php"><div class="ttname"><a href="namespace_event.php">Event</a></div><div class="ttdoc">Event&amp;#39;s API. </div></div>
<div class="ttc" id="class_n_r_e_1_1_event_1_1_button_event_php_a27372075885045c427d151529d249f23"><div class="ttname"><a href="class_n_r_e_1_1_event_1_1_button_event.php#a27372075885045c427d151529d249f23">NRE::Event::ButtonEvent::operator==</a></div><div class="ttdeci">bool operator==(ButtonEvent const &amp;e) const </div></div>
<div class="ttc" id="class_n_r_e_1_1_event_1_1_button_event_php_ac2fb5ff4b3a5447886ab374c3e211aa8"><div class="ttname"><a href="class_n_r_e_1_1_event_1_1_button_event.php#ac2fb5ff4b3a5447886ab374c3e211aa8">NRE::Event::ButtonEvent::isCode</a></div><div class="ttdeci">bool isCode(ButtonCode c) const </div></div>
<div class="ttc" id="class_n_r_e_1_1_event_1_1_button_event_php_a95f64672b15258e2a75d989024c5d5cf"><div class="ttname"><a href="class_n_r_e_1_1_event_1_1_button_event.php#a95f64672b15258e2a75d989024c5d5cf">NRE::Event::ButtonEvent::getPosition</a></div><div class="ttdeci">Math::Point2D&lt; unsigned int &gt; const &amp; getPosition() const </div></div>
<div class="ttc" id="namespace_n_r_e_php"><div class="ttname"><a href="namespace_n_r_e.php">NRE</a></div><div class="ttdoc">The NearlyRealEngine&amp;#39;s global namespace. </div></div>
<div class="ttc" id="class_n_r_e_1_1_event_1_1_button_event_php"><div class="ttname"><a href="class_n_r_e_1_1_event_1_1_button_event.php">NRE::Event::ButtonEvent</a></div><div class="ttdoc">Manage a button event. </div><div class="ttdef"><b>Definition:</b> NRE_ButtonEvent.hpp:31</div></div>
<div class="ttc" id="_n_r_e___buttons_8hpp_php_a3117cef30b4eed21ee57db72bd9d3ef8"><div class="ttname"><a href="_n_r_e___buttons_8hpp.php#a3117cef30b4eed21ee57db72bd9d3ef8">NRE::Event::ButtonCode</a></div><div class="ttdeci">ButtonCode</div><div class="ttdef"><b>Definition:</b> NRE_Buttons.hpp:27</div></div>
<div class="ttc" id="class_n_r_e_1_1_event_1_1_button_event_php_afa46b89a8a861c4c90adc8183ecb80c9"><div class="ttname"><a href="class_n_r_e_1_1_event_1_1_button_event.php#afa46b89a8a861c4c90adc8183ecb80c9">NRE::Event::ButtonEvent::ButtonEvent</a></div><div class="ttdeci">ButtonEvent()=delete</div></div>
</div><!-- fragment --></div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>
