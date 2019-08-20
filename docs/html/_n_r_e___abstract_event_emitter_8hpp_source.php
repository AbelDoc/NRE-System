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
        <title>NRE-System: /mnt/c/Users/abell/Documents/GitHub/NRE-System/src/System/Event/Emitter/NRE_AbstractEventEmitter.hpp Source File</title>
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
<li class="navelem"><a class="el" href="dir_68267d1309a1af8e8297ef4c3efbcdba.php">src</a></li><li class="navelem"><a class="el" href="dir_ef68f1e1f5148ff8ef7fb1c955106c3c.php">System</a></li><li class="navelem"><a class="el" href="dir_c60d7283d11d7ab0b1fc187569b1f175.php">Event</a></li><li class="navelem"><a class="el" href="dir_28d7eb6cd73777177980c12562ba07d0.php">Emitter</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="headertitle">
<div class="title">NRE_AbstractEventEmitter.hpp</div>  </div>
</div><!--header-->
<div class="contents">
<a href="_n_r_e___abstract_event_emitter_8hpp.php">Go to the documentation of this file.</a><div class="fragment"><div class="line"><a name="l00001"></a><span class="lineno">    1</span>&#160;</div><div class="line"><a name="l00010"></a><span class="lineno">   10</span>&#160;<span class="preprocessor">    #pragma once</span></div><div class="line"><a name="l00011"></a><span class="lineno">   11</span>&#160;</div><div class="line"><a name="l00012"></a><span class="lineno">   12</span>&#160;<span class="preprocessor">    #include &lt;Header/NRE_Utility.hpp&gt;</span></div><div class="line"><a name="l00013"></a><span class="lineno">   13</span>&#160;</div><div class="line"><a name="l00018"></a><span class="lineno">   18</span>&#160;    <span class="keyword">namespace </span><a class="code" href="namespace_n_r_e.php">NRE</a> {</div><div class="line"><a name="l00023"></a><span class="lineno">   23</span>&#160;        <span class="keyword">namespace </span><a class="code" href="namespace_event.php">Event</a> {</div><div class="line"><a name="l00024"></a><span class="lineno">   24</span>&#160;</div><div class="line"><a name="l00029"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php">   29</a></span>&#160;            <span class="keyword">class </span><a class="code" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php">AbstractEventEmitter</a> : <span class="keyword">public</span> Utility::Observable {</div><div class="line"><a name="l00030"></a><span class="lineno">   30</span>&#160;                <span class="keyword">public</span> :    <span class="comment">// Fields</span></div><div class="line"><a name="l00032"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#a6e164be684cf1aabb1fe66d5a64b1f1f">   32</a></span>&#160;<span class="comment"></span>                    <span class="keyword">typedef</span> std::size_t <a class="code" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#a6e164be684cf1aabb1fe66d5a64b1f1f">Category</a>;</div><div class="line"><a name="l00033"></a><span class="lineno">   33</span>&#160;</div><div class="line"><a name="l00034"></a><span class="lineno">   34</span>&#160;                <span class="keyword">private</span> :   <span class="comment">// Fields</span></div><div class="line"><a name="l00035"></a><span class="lineno">   35</span>&#160;                    <span class="keywordtype">bool</span> consumed;  </div><div class="line"><a name="l00037"></a><span class="lineno">   37</span>&#160;                <span class="keyword">public</span>  :   <span class="comment">// Methods</span></div><div class="line"><a name="l00038"></a><span class="lineno">   38</span>&#160;                    <span class="comment">//## Constructor ##//</span></div><div class="line"><a name="l00042"></a><span class="lineno">   42</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#adb38e168906f12e942e4d1dfa2eac39a">AbstractEventEmitter</a>() = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00043"></a><span class="lineno">   43</span>&#160;</div><div class="line"><a name="l00044"></a><span class="lineno">   44</span>&#160;                    <span class="comment">//## Copy Constructor ##//</span></div><div class="line"><a name="l00049"></a><span class="lineno">   49</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#adb38e168906f12e942e4d1dfa2eac39a">AbstractEventEmitter</a>(<a class="code" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php">AbstractEventEmitter</a> <span class="keyword">const</span>&amp; e) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00050"></a><span class="lineno">   50</span>&#160;</div><div class="line"><a name="l00051"></a><span class="lineno">   51</span>&#160;                    <span class="comment">//## Move Constructor ##//</span></div><div class="line"><a name="l00056"></a><span class="lineno">   56</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#adb38e168906f12e942e4d1dfa2eac39a">AbstractEventEmitter</a>(<a class="code" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php">AbstractEventEmitter</a> &amp;&amp; e) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00057"></a><span class="lineno">   57</span>&#160;</div><div class="line"><a name="l00058"></a><span class="lineno">   58</span>&#160;                    <span class="comment">//## Deconstructor ##//</span></div><div class="line"><a name="l00062"></a><span class="lineno">   62</span>&#160;<span class="comment"></span>                        <span class="keyword">virtual</span> <a class="code" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#af21e926e910d1a05ac82da783e833c0f">~AbstractEventEmitter</a>() = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00063"></a><span class="lineno">   63</span>&#160;</div><div class="line"><a name="l00064"></a><span class="lineno">   64</span>&#160;                    <span class="comment">//## Getter ##//</span></div><div class="line"><a name="l00068"></a><span class="lineno">   68</span>&#160;<span class="comment"></span>                        <span class="keywordtype">bool</span> <a class="code" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#afd90cd7556f3d07711b37f15a51640cc">isConsumed</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00069"></a><span class="lineno">   69</span>&#160;</div><div class="line"><a name="l00070"></a><span class="lineno">   70</span>&#160;                    <span class="comment">//## Setter ##//</span></div><div class="line"><a name="l00075"></a><span class="lineno">   75</span>&#160;<span class="comment"></span>                        <span class="keywordtype">void</span> <a class="code" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#a61c5e87e19799557ba980e4b6ddc6b1b">setConsumed</a>(<span class="keywordtype">bool</span> state);</div><div class="line"><a name="l00076"></a><span class="lineno">   76</span>&#160;</div><div class="line"><a name="l00077"></a><span class="lineno">   77</span>&#160;                    <span class="comment">//## Assignment Operator ##//</span></div><div class="line"><a name="l00083"></a><span class="lineno">   83</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php">AbstractEventEmitter</a>&amp; <a class="code" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#a9449334881d89c077e8e73ff16912b54">operator =</a>(<a class="code" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php">AbstractEventEmitter</a> <span class="keyword">const</span>&amp; e) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00089"></a><span class="lineno">   89</span>&#160;                        <a class="code" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php">AbstractEventEmitter</a>&amp; <a class="code" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#a9449334881d89c077e8e73ff16912b54">operator =</a>(<a class="code" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php">AbstractEventEmitter</a> &amp;&amp; e) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00090"></a><span class="lineno">   90</span>&#160;</div><div class="line"><a name="l00091"></a><span class="lineno">   91</span>&#160;                <span class="keyword">public</span> :    <span class="comment">// Static</span></div><div class="line"><a name="l00092"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#afffc04ff4a4626985e294b46e5ae2bfa">   92</a></span>&#160;                    <span class="keyword">static</span> Category <a class="code" href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#afffc04ff4a4626985e294b46e5ae2bfa">counter</a>;    </div><div class="line"><a name="l00093"></a><span class="lineno">   93</span>&#160;            };</div><div class="line"><a name="l00094"></a><span class="lineno">   94</span>&#160;        }</div><div class="line"><a name="l00095"></a><span class="lineno">   95</span>&#160;    }</div><div class="line"><a name="l00096"></a><span class="lineno">   96</span>&#160;</div><div class="line"><a name="l00097"></a><span class="lineno">   97</span>&#160;<span class="preprocessor">    #include &quot;NRE_AbstractEventEmitter.tpp&quot;</span></div><div class="ttc" id="class_n_r_e_1_1_event_1_1_abstract_event_emitter_php_a9449334881d89c077e8e73ff16912b54"><div class="ttname"><a href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#a9449334881d89c077e8e73ff16912b54">NRE::Event::AbstractEventEmitter::operator=</a></div><div class="ttdeci">AbstractEventEmitter &amp; operator=(AbstractEventEmitter const &amp;e)=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_event_1_1_abstract_event_emitter_php_adb38e168906f12e942e4d1dfa2eac39a"><div class="ttname"><a href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#adb38e168906f12e942e4d1dfa2eac39a">NRE::Event::AbstractEventEmitter::AbstractEventEmitter</a></div><div class="ttdeci">AbstractEventEmitter()=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_event_1_1_abstract_event_emitter_php_af21e926e910d1a05ac82da783e833c0f"><div class="ttname"><a href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#af21e926e910d1a05ac82da783e833c0f">NRE::Event::AbstractEventEmitter::~AbstractEventEmitter</a></div><div class="ttdeci">virtual ~AbstractEventEmitter()=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_event_1_1_abstract_event_emitter_php_afd90cd7556f3d07711b37f15a51640cc"><div class="ttname"><a href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#afd90cd7556f3d07711b37f15a51640cc">NRE::Event::AbstractEventEmitter::isConsumed</a></div><div class="ttdeci">bool isConsumed() const </div></div>
<div class="ttc" id="namespace_event_php"><div class="ttname"><a href="namespace_event.php">Event</a></div><div class="ttdoc">Event&amp;#39;s API. </div></div>
<div class="ttc" id="namespace_n_r_e_php"><div class="ttname"><a href="namespace_n_r_e.php">NRE</a></div><div class="ttdoc">The NearlyRealEngine&amp;#39;s global namespace. </div></div>
<div class="ttc" id="class_n_r_e_1_1_event_1_1_abstract_event_emitter_php_a61c5e87e19799557ba980e4b6ddc6b1b"><div class="ttname"><a href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#a61c5e87e19799557ba980e4b6ddc6b1b">NRE::Event::AbstractEventEmitter::setConsumed</a></div><div class="ttdeci">void setConsumed(bool state)</div></div>
<div class="ttc" id="class_n_r_e_1_1_event_1_1_abstract_event_emitter_php_a6e164be684cf1aabb1fe66d5a64b1f1f"><div class="ttname"><a href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#a6e164be684cf1aabb1fe66d5a64b1f1f">NRE::Event::AbstractEventEmitter::Category</a></div><div class="ttdeci">std::size_t Category</div><div class="ttdef"><b>Definition:</b> NRE_AbstractEventEmitter.hpp:32</div></div>
<div class="ttc" id="class_n_r_e_1_1_event_1_1_abstract_event_emitter_php_afffc04ff4a4626985e294b46e5ae2bfa"><div class="ttname"><a href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php#afffc04ff4a4626985e294b46e5ae2bfa">NRE::Event::AbstractEventEmitter::counter</a></div><div class="ttdeci">static Category counter</div><div class="ttdef"><b>Definition:</b> NRE_AbstractEventEmitter.hpp:92</div></div>
<div class="ttc" id="class_n_r_e_1_1_event_1_1_abstract_event_emitter_php"><div class="ttname"><a href="class_n_r_e_1_1_event_1_1_abstract_event_emitter.php">NRE::Event::AbstractEventEmitter</a></div><div class="ttdoc">Abstract class for specialized event emission. </div><div class="ttdef"><b>Definition:</b> NRE_AbstractEventEmitter.hpp:29</div></div>
</div><!-- fragment --></div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>
