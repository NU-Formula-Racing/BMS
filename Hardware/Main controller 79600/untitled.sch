<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE eagle SYSTEM "eagle.dtd">
<eagle version="9.6.2">
<drawing>
<settings>
<setting alwaysvectorfont="no"/>
<setting verticaltext="up"/>
</settings>
<grid distance="0.1" unitdist="inch" unit="inch" style="lines" multiple="1" display="no" altdistance="0.01" altunitdist="inch" altunit="inch"/>
<layers>
<layer number="1" name="Top" color="4" fill="1" visible="no" active="no"/>
<layer number="2" name="Route2" color="16" fill="1" visible="no" active="no"/>
<layer number="3" name="Route3" color="17" fill="1" visible="no" active="no"/>
<layer number="4" name="Route4" color="18" fill="1" visible="no" active="no"/>
<layer number="5" name="Route5" color="19" fill="1" visible="no" active="no"/>
<layer number="6" name="Route6" color="25" fill="1" visible="no" active="no"/>
<layer number="7" name="Route7" color="26" fill="1" visible="no" active="no"/>
<layer number="8" name="Route8" color="27" fill="1" visible="no" active="no"/>
<layer number="9" name="Route9" color="28" fill="1" visible="no" active="no"/>
<layer number="10" name="Route10" color="29" fill="1" visible="no" active="no"/>
<layer number="11" name="Route11" color="30" fill="1" visible="no" active="no"/>
<layer number="12" name="Route12" color="20" fill="1" visible="no" active="no"/>
<layer number="13" name="Route13" color="21" fill="1" visible="no" active="no"/>
<layer number="14" name="Route14" color="22" fill="1" visible="no" active="no"/>
<layer number="15" name="Route15" color="23" fill="1" visible="no" active="no"/>
<layer number="16" name="Bottom" color="1" fill="1" visible="no" active="no"/>
<layer number="17" name="Pads" color="2" fill="1" visible="no" active="no"/>
<layer number="18" name="Vias" color="2" fill="1" visible="no" active="no"/>
<layer number="19" name="Unrouted" color="6" fill="1" visible="no" active="no"/>
<layer number="20" name="Dimension" color="24" fill="1" visible="no" active="no"/>
<layer number="21" name="tPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="22" name="bPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="23" name="tOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="24" name="bOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="25" name="tNames" color="7" fill="1" visible="no" active="no"/>
<layer number="26" name="bNames" color="7" fill="1" visible="no" active="no"/>
<layer number="27" name="tValues" color="7" fill="1" visible="no" active="no"/>
<layer number="28" name="bValues" color="7" fill="1" visible="no" active="no"/>
<layer number="29" name="tStop" color="7" fill="3" visible="no" active="no"/>
<layer number="30" name="bStop" color="7" fill="6" visible="no" active="no"/>
<layer number="31" name="tCream" color="7" fill="4" visible="no" active="no"/>
<layer number="32" name="bCream" color="7" fill="5" visible="no" active="no"/>
<layer number="33" name="tFinish" color="6" fill="3" visible="no" active="no"/>
<layer number="34" name="bFinish" color="6" fill="6" visible="no" active="no"/>
<layer number="35" name="tGlue" color="7" fill="4" visible="no" active="no"/>
<layer number="36" name="bGlue" color="7" fill="5" visible="no" active="no"/>
<layer number="37" name="tTest" color="7" fill="1" visible="no" active="no"/>
<layer number="38" name="bTest" color="7" fill="1" visible="no" active="no"/>
<layer number="39" name="tKeepout" color="4" fill="11" visible="no" active="no"/>
<layer number="40" name="bKeepout" color="1" fill="11" visible="no" active="no"/>
<layer number="41" name="tRestrict" color="4" fill="10" visible="no" active="no"/>
<layer number="42" name="bRestrict" color="1" fill="10" visible="no" active="no"/>
<layer number="43" name="vRestrict" color="2" fill="10" visible="no" active="no"/>
<layer number="44" name="Drills" color="7" fill="1" visible="no" active="no"/>
<layer number="45" name="Holes" color="7" fill="1" visible="no" active="no"/>
<layer number="46" name="Milling" color="3" fill="1" visible="no" active="no"/>
<layer number="47" name="Measures" color="7" fill="1" visible="no" active="no"/>
<layer number="48" name="Document" color="7" fill="1" visible="no" active="no"/>
<layer number="49" name="Reference" color="7" fill="1" visible="no" active="no"/>
<layer number="51" name="tDocu" color="7" fill="1" visible="no" active="no"/>
<layer number="52" name="bDocu" color="7" fill="1" visible="no" active="no"/>
<layer number="88" name="SimResults" color="9" fill="1" visible="yes" active="yes"/>
<layer number="89" name="SimProbes" color="9" fill="1" visible="yes" active="yes"/>
<layer number="90" name="Modules" color="5" fill="1" visible="yes" active="yes"/>
<layer number="91" name="Nets" color="2" fill="1" visible="yes" active="yes"/>
<layer number="92" name="Busses" color="1" fill="1" visible="yes" active="yes"/>
<layer number="93" name="Pins" color="2" fill="1" visible="no" active="yes"/>
<layer number="94" name="Symbols" color="4" fill="1" visible="yes" active="yes"/>
<layer number="95" name="Names" color="7" fill="1" visible="yes" active="yes"/>
<layer number="96" name="Values" color="7" fill="1" visible="yes" active="yes"/>
<layer number="97" name="Info" color="7" fill="1" visible="yes" active="yes"/>
<layer number="98" name="Guide" color="6" fill="1" visible="yes" active="yes"/>
</layers>
<schematic xreflabel="%F%N/%S.%C%R" xrefpart="/%S.%C%R">
<libraries>
<library name="op_amp">
<packages>
<package name="D14_TEX">
<smd name="1" x="-2.4638" y="3.81" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="2" x="-2.4638" y="2.54" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="3" x="-2.4638" y="1.27" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="4" x="-2.4638" y="0" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="5" x="-2.4638" y="-1.27" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="6" x="-2.4638" y="-2.54" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="7" x="-2.4638" y="-3.81" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="8" x="2.4638" y="-3.81" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="9" x="2.4638" y="-2.54" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="10" x="2.4638" y="-1.27" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="11" x="2.4638" y="0" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="12" x="2.4638" y="1.27" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="13" x="2.4638" y="2.54" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="14" x="2.4638" y="3.81" dx="1.9812" dy="0.5588" layer="1"/>
<wire x1="-1.9812" y1="3.556" x2="-1.9812" y2="4.064" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="4.064" x2="-3.0988" y2="4.064" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="4.064" x2="-3.0988" y2="3.556" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="3.556" x2="-1.9812" y2="3.556" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="2.286" x2="-1.9812" y2="2.794" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="2.794" x2="-3.0988" y2="2.794" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="2.794" x2="-3.0988" y2="2.286" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="2.286" x2="-1.9812" y2="2.286" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="1.016" x2="-1.9812" y2="1.524" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="1.524" x2="-3.0988" y2="1.524" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="1.524" x2="-3.0988" y2="1.016" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="1.016" x2="-1.9812" y2="1.016" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-0.254" x2="-1.9812" y2="0.254" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="0.254" x2="-3.0988" y2="0.254" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="0.254" x2="-3.0988" y2="-0.254" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-0.254" x2="-1.9812" y2="-0.254" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-1.524" x2="-1.9812" y2="-1.016" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-1.016" x2="-3.0988" y2="-1.016" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-1.016" x2="-3.0988" y2="-1.524" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-1.524" x2="-1.9812" y2="-1.524" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-2.794" x2="-1.9812" y2="-2.286" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-2.286" x2="-3.0988" y2="-2.286" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-2.286" x2="-3.0988" y2="-2.794" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-2.794" x2="-1.9812" y2="-2.794" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-4.064" x2="-1.9812" y2="-3.556" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-3.556" x2="-3.0988" y2="-3.556" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-3.556" x2="-3.0988" y2="-4.064" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-4.064" x2="-1.9812" y2="-4.064" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-3.556" x2="1.9812" y2="-4.064" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-4.064" x2="3.0988" y2="-4.064" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-4.064" x2="3.0988" y2="-3.556" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-3.556" x2="1.9812" y2="-3.556" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-2.286" x2="1.9812" y2="-2.794" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-2.794" x2="3.0988" y2="-2.794" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-2.794" x2="3.0988" y2="-2.286" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-2.286" x2="1.9812" y2="-2.286" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-1.016" x2="1.9812" y2="-1.524" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-1.524" x2="3.0988" y2="-1.524" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-1.524" x2="3.0988" y2="-1.016" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-1.016" x2="1.9812" y2="-1.016" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="0.254" x2="1.9812" y2="-0.254" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-0.254" x2="3.0988" y2="-0.254" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-0.254" x2="3.0988" y2="0.254" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="0.254" x2="1.9812" y2="0.254" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="1.524" x2="1.9812" y2="1.016" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="1.016" x2="3.0988" y2="1.016" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="1.016" x2="3.0988" y2="1.524" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="1.524" x2="1.9812" y2="1.524" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="2.794" x2="1.9812" y2="2.286" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="2.286" x2="3.0988" y2="2.286" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="2.286" x2="3.0988" y2="2.794" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="2.794" x2="1.9812" y2="2.794" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="4.064" x2="1.9812" y2="3.556" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="3.556" x2="3.0988" y2="3.556" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="3.556" x2="3.0988" y2="4.064" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="4.064" x2="1.9812" y2="4.064" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-4.3688" x2="1.9812" y2="-4.3688" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-4.3688" x2="1.9812" y2="4.3688" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="4.3688" x2="0.3048" y2="4.3688" width="0.1524" layer="51"/>
<wire x1="0.3048" y1="4.3688" x2="-0.3048" y2="4.3688" width="0.1524" layer="51"/>
<wire x1="-0.3048" y1="4.3688" x2="-1.9812" y2="4.3688" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="4.3688" x2="-1.9812" y2="-4.3688" width="0.1524" layer="51"/>
<wire x1="0.3048" y1="4.3688" x2="-0.3048" y2="4.3688" width="0.1524" layer="51" curve="-180"/>
<text x="-2.1844" y="3.0226" size="1.27" layer="51" ratio="6" rot="SR0">*</text>
<wire x1="-2.1336" y1="-4.4958" x2="2.1336" y2="-4.4958" width="0.1524" layer="21"/>
<wire x1="2.1336" y1="4.4958" x2="-2.1336" y2="4.4958" width="0.1524" layer="21"/>
<polygon width="0.0254" layer="21">
<vertex x="3.9624" y="-1.0795"/>
<vertex x="3.9624" y="-1.4605"/>
<vertex x="3.7084" y="-1.4605"/>
<vertex x="3.7084" y="-1.0795"/>
</polygon>
<text x="-3.302" y="4.2418" size="1.27" layer="21" ratio="6" rot="SR0">*</text>
<text x="-3.2766" y="-0.635" size="1.27" layer="25" ratio="6" rot="SR0">&gt;Name</text>
<text x="-1.7272" y="-0.635" size="1.27" layer="27" ratio="6" rot="SR0">&gt;Value</text>
</package>
<package name="D14_TEX-M">
<smd name="1" x="-2.5146" y="3.81" dx="2.286" dy="0.5588" layer="1"/>
<smd name="2" x="-2.5146" y="2.54" dx="2.286" dy="0.5588" layer="1"/>
<smd name="3" x="-2.5146" y="1.27" dx="2.286" dy="0.5588" layer="1"/>
<smd name="4" x="-2.5146" y="0" dx="2.286" dy="0.5588" layer="1"/>
<smd name="5" x="-2.5146" y="-1.27" dx="2.286" dy="0.5588" layer="1"/>
<smd name="6" x="-2.5146" y="-2.54" dx="2.286" dy="0.5588" layer="1"/>
<smd name="7" x="-2.5146" y="-3.81" dx="2.286" dy="0.5588" layer="1"/>
<smd name="8" x="2.5146" y="-3.81" dx="2.286" dy="0.5588" layer="1"/>
<smd name="9" x="2.5146" y="-2.54" dx="2.286" dy="0.5588" layer="1"/>
<smd name="10" x="2.5146" y="-1.27" dx="2.286" dy="0.5588" layer="1"/>
<smd name="11" x="2.5146" y="0" dx="2.286" dy="0.5588" layer="1"/>
<smd name="12" x="2.5146" y="1.27" dx="2.286" dy="0.5588" layer="1"/>
<smd name="13" x="2.5146" y="2.54" dx="2.286" dy="0.5588" layer="1"/>
<smd name="14" x="2.5146" y="3.81" dx="2.286" dy="0.5588" layer="1"/>
<wire x1="-1.9812" y1="3.556" x2="-2.0066" y2="4.064" width="0.1524" layer="51"/>
<wire x1="-2.0066" y1="4.064" x2="-3.0988" y2="4.064" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="4.064" x2="-3.0988" y2="3.556" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="3.556" x2="-1.9812" y2="3.556" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="2.286" x2="-2.0066" y2="2.794" width="0.1524" layer="51"/>
<wire x1="-2.0066" y1="2.794" x2="-3.0988" y2="2.794" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="2.794" x2="-3.0988" y2="2.286" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="2.286" x2="-1.9812" y2="2.286" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="1.016" x2="-1.9812" y2="1.524" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="1.524" x2="-3.0988" y2="1.524" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="1.524" x2="-3.0988" y2="1.016" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="1.016" x2="-1.9812" y2="1.016" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-0.254" x2="-1.9812" y2="0.254" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="0.254" x2="-3.0988" y2="0.254" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="0.254" x2="-3.0988" y2="-0.254" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-0.254" x2="-1.9812" y2="-0.254" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-1.524" x2="-1.9812" y2="-1.016" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-1.016" x2="-3.0988" y2="-1.016" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-1.016" x2="-3.0988" y2="-1.524" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-1.524" x2="-1.9812" y2="-1.524" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-2.794" x2="-1.9812" y2="-2.286" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-2.286" x2="-3.0988" y2="-2.286" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-2.286" x2="-3.0988" y2="-2.794" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-2.794" x2="-1.9812" y2="-2.794" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-4.064" x2="-1.9812" y2="-3.556" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-3.556" x2="-3.0988" y2="-3.556" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-3.556" x2="-3.0988" y2="-4.064" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-4.064" x2="-1.9812" y2="-4.064" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-3.556" x2="2.0066" y2="-4.064" width="0.1524" layer="51"/>
<wire x1="2.0066" y1="-4.064" x2="3.0988" y2="-4.064" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-4.064" x2="3.0988" y2="-3.556" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-3.556" x2="1.9812" y2="-3.556" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-2.286" x2="1.9812" y2="-2.794" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-2.794" x2="3.0988" y2="-2.794" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-2.794" x2="3.0988" y2="-2.286" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-2.286" x2="1.9812" y2="-2.286" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-1.016" x2="1.9812" y2="-1.524" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-1.524" x2="3.0988" y2="-1.524" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-1.524" x2="3.0988" y2="-1.016" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-1.016" x2="1.9812" y2="-1.016" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="0.254" x2="1.9812" y2="-0.254" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-0.254" x2="3.0988" y2="-0.254" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-0.254" x2="3.0988" y2="0.254" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="0.254" x2="1.9812" y2="0.254" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="1.524" x2="1.9812" y2="1.016" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="1.016" x2="3.0988" y2="1.016" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="1.016" x2="3.0988" y2="1.524" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="1.524" x2="1.9812" y2="1.524" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="2.794" x2="1.9812" y2="2.286" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="2.286" x2="3.0988" y2="2.286" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="2.286" x2="3.0988" y2="2.794" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="2.794" x2="1.9812" y2="2.794" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="4.064" x2="1.9812" y2="3.556" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="3.556" x2="3.0988" y2="3.556" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="3.556" x2="3.0988" y2="4.064" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="4.064" x2="1.9812" y2="4.064" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-4.3688" x2="1.9812" y2="-4.3688" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-4.3688" x2="1.9812" y2="4.3688" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="4.3688" x2="0.3048" y2="4.3688" width="0.1524" layer="51"/>
<wire x1="0.3048" y1="4.3688" x2="-0.3048" y2="4.3688" width="0.1524" layer="51"/>
<wire x1="-0.3048" y1="4.3688" x2="-1.9812" y2="4.3688" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="4.3688" x2="-1.9812" y2="-4.3688" width="0.1524" layer="51"/>
<wire x1="0.3048" y1="4.3688" x2="-0.3048" y2="4.3688" width="0.1524" layer="51" curve="-180"/>
<text x="-2.1844" y="3.0226" size="1.27" layer="51" ratio="6" rot="SR0">*</text>
<wire x1="-2.1336" y1="-4.4958" x2="2.1336" y2="-4.4958" width="0.1524" layer="21"/>
<wire x1="2.1336" y1="4.4958" x2="-2.1336" y2="4.4958" width="0.1524" layer="21"/>
<polygon width="0.0254" layer="21">
<vertex x="4.1656" y="-1.0795"/>
<vertex x="4.1656" y="-1.4605"/>
<vertex x="3.9116" y="-1.4605"/>
<vertex x="3.9116" y="-1.0795"/>
</polygon>
<text x="-3.3528" y="4.2418" size="1.27" layer="21" ratio="6" rot="SR0">*</text>
<text x="-3.2766" y="-0.635" size="1.27" layer="25" ratio="6" rot="SR0">&gt;Name</text>
<text x="-1.7272" y="-0.635" size="1.27" layer="27" ratio="6" rot="SR0">&gt;Value</text>
</package>
<package name="D14_TEX-L">
<smd name="1" x="-2.413" y="3.81" dx="1.6764" dy="0.508" layer="1"/>
<smd name="2" x="-2.413" y="2.54" dx="1.6764" dy="0.508" layer="1"/>
<smd name="3" x="-2.413" y="1.27" dx="1.6764" dy="0.508" layer="1"/>
<smd name="4" x="-2.413" y="0" dx="1.6764" dy="0.508" layer="1"/>
<smd name="5" x="-2.413" y="-1.27" dx="1.6764" dy="0.508" layer="1"/>
<smd name="6" x="-2.413" y="-2.54" dx="1.6764" dy="0.508" layer="1"/>
<smd name="7" x="-2.413" y="-3.81" dx="1.6764" dy="0.508" layer="1"/>
<smd name="8" x="2.413" y="-3.81" dx="1.6764" dy="0.508" layer="1"/>
<smd name="9" x="2.413" y="-2.54" dx="1.6764" dy="0.508" layer="1"/>
<smd name="10" x="2.413" y="-1.27" dx="1.6764" dy="0.508" layer="1"/>
<smd name="11" x="2.413" y="0" dx="1.6764" dy="0.508" layer="1"/>
<smd name="12" x="2.413" y="1.27" dx="1.6764" dy="0.508" layer="1"/>
<smd name="13" x="2.413" y="2.54" dx="1.6764" dy="0.508" layer="1"/>
<smd name="14" x="2.413" y="3.81" dx="1.6764" dy="0.508" layer="1"/>
<wire x1="-1.9812" y1="3.556" x2="-2.0066" y2="4.064" width="0.1524" layer="51"/>
<wire x1="-2.0066" y1="4.064" x2="-3.0988" y2="4.064" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="4.064" x2="-3.0988" y2="3.556" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="3.556" x2="-1.9812" y2="3.556" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="2.286" x2="-2.0066" y2="2.794" width="0.1524" layer="51"/>
<wire x1="-2.0066" y1="2.794" x2="-3.0988" y2="2.794" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="2.794" x2="-3.0988" y2="2.286" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="2.286" x2="-1.9812" y2="2.286" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="1.016" x2="-1.9812" y2="1.524" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="1.524" x2="-3.0988" y2="1.524" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="1.524" x2="-3.0988" y2="1.016" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="1.016" x2="-1.9812" y2="1.016" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-0.254" x2="-1.9812" y2="0.254" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="0.254" x2="-3.0988" y2="0.254" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="0.254" x2="-3.0988" y2="-0.254" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-0.254" x2="-1.9812" y2="-0.254" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-1.524" x2="-1.9812" y2="-1.016" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-1.016" x2="-3.0988" y2="-1.016" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-1.016" x2="-3.0988" y2="-1.524" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-1.524" x2="-1.9812" y2="-1.524" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-2.794" x2="-1.9812" y2="-2.286" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-2.286" x2="-3.0988" y2="-2.286" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-2.286" x2="-3.0988" y2="-2.794" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-2.794" x2="-1.9812" y2="-2.794" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-4.064" x2="-1.9812" y2="-3.556" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-3.556" x2="-3.0988" y2="-3.556" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-3.556" x2="-3.0988" y2="-4.064" width="0.1524" layer="51"/>
<wire x1="-3.0988" y1="-4.064" x2="-1.9812" y2="-4.064" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-3.556" x2="2.0066" y2="-4.064" width="0.1524" layer="51"/>
<wire x1="2.0066" y1="-4.064" x2="3.0988" y2="-4.064" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-4.064" x2="3.0988" y2="-3.556" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-3.556" x2="1.9812" y2="-3.556" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-2.286" x2="1.9812" y2="-2.794" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-2.794" x2="3.0988" y2="-2.794" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-2.794" x2="3.0988" y2="-2.286" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-2.286" x2="1.9812" y2="-2.286" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-1.016" x2="1.9812" y2="-1.524" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-1.524" x2="3.0988" y2="-1.524" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-1.524" x2="3.0988" y2="-1.016" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-1.016" x2="1.9812" y2="-1.016" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="0.254" x2="1.9812" y2="-0.254" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-0.254" x2="3.0988" y2="-0.254" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="-0.254" x2="3.0988" y2="0.254" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="0.254" x2="1.9812" y2="0.254" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="1.524" x2="1.9812" y2="1.016" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="1.016" x2="3.0988" y2="1.016" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="1.016" x2="3.0988" y2="1.524" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="1.524" x2="1.9812" y2="1.524" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="2.794" x2="1.9812" y2="2.286" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="2.286" x2="3.0988" y2="2.286" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="2.286" x2="3.0988" y2="2.794" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="2.794" x2="1.9812" y2="2.794" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="4.064" x2="1.9812" y2="3.556" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="3.556" x2="3.0988" y2="3.556" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="3.556" x2="3.0988" y2="4.064" width="0.1524" layer="51"/>
<wire x1="3.0988" y1="4.064" x2="1.9812" y2="4.064" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="-4.3688" x2="1.9812" y2="-4.3688" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="-4.3688" x2="1.9812" y2="4.3688" width="0.1524" layer="51"/>
<wire x1="1.9812" y1="4.3688" x2="0.3048" y2="4.3688" width="0.1524" layer="51"/>
<wire x1="0.3048" y1="4.3688" x2="-0.3048" y2="4.3688" width="0.1524" layer="51"/>
<wire x1="-0.3048" y1="4.3688" x2="-1.9812" y2="4.3688" width="0.1524" layer="51"/>
<wire x1="-1.9812" y1="4.3688" x2="-1.9812" y2="-4.3688" width="0.1524" layer="51"/>
<wire x1="0.3048" y1="4.3688" x2="-0.3048" y2="4.3688" width="0.1524" layer="51" curve="-180"/>
<text x="-2.1844" y="3.0226" size="1.27" layer="51" ratio="6" rot="SR0">*</text>
<wire x1="-2.1336" y1="-4.4958" x2="2.1336" y2="-4.4958" width="0.1524" layer="21"/>
<wire x1="2.1336" y1="4.4958" x2="-2.1336" y2="4.4958" width="0.1524" layer="21"/>
<polygon width="0.0254" layer="21">
<vertex x="3.7592" y="-1.0795"/>
<vertex x="3.7592" y="-1.4605"/>
<vertex x="3.5052" y="-1.4605"/>
<vertex x="3.5052" y="-1.0795"/>
</polygon>
<text x="-3.2512" y="4.191" size="1.27" layer="21" ratio="6" rot="SR0">*</text>
<text x="-3.2766" y="-0.635" size="1.27" layer="25" ratio="6" rot="SR0">&gt;Name</text>
<text x="-1.7272" y="-0.635" size="1.27" layer="27" ratio="6" rot="SR0">&gt;Value</text>
</package>
</packages>
<symbols>
<symbol name="OPA4197ID">
<pin name="OUT_A" x="2.54" y="0" length="middle" direction="out"/>
<pin name="-IN_A" x="2.54" y="-2.54" length="middle" direction="in"/>
<pin name="+IN_A" x="2.54" y="-5.08" length="middle" direction="in"/>
<pin name="V+" x="2.54" y="-7.62" length="middle" direction="pwr"/>
<pin name="+IN_B" x="2.54" y="-10.16" length="middle" direction="in"/>
<pin name="-IN_B" x="2.54" y="-12.7" length="middle" direction="in"/>
<pin name="OUT_B" x="2.54" y="-15.24" length="middle" direction="out"/>
<pin name="OUTC" x="38.1" y="-15.24" length="middle" direction="out" rot="R180"/>
<pin name="-INC" x="38.1" y="-12.7" length="middle" direction="in" rot="R180"/>
<pin name="+INC" x="38.1" y="-10.16" length="middle" direction="in" rot="R180"/>
<pin name="V-" x="38.1" y="-7.62" length="middle" direction="pwr" rot="R180"/>
<pin name="+IND" x="38.1" y="-5.08" length="middle" direction="in" rot="R180"/>
<pin name="-IND" x="38.1" y="-2.54" length="middle" direction="in" rot="R180"/>
<pin name="OUTD" x="38.1" y="0" length="middle" direction="out" rot="R180"/>
<wire x1="7.62" y1="5.08" x2="7.62" y2="-20.32" width="0.1524" layer="94"/>
<wire x1="7.62" y1="-20.32" x2="33.02" y2="-20.32" width="0.1524" layer="94"/>
<wire x1="33.02" y1="-20.32" x2="33.02" y2="5.08" width="0.1524" layer="94"/>
<wire x1="33.02" y1="5.08" x2="7.62" y2="5.08" width="0.1524" layer="94"/>
<text x="15.5956" y="9.1186" size="2.0828" layer="95" ratio="6" rot="SR0">&gt;Name</text>
<text x="14.9606" y="6.5786" size="2.0828" layer="96" ratio="6" rot="SR0">&gt;Value</text>
</symbol>
</symbols>
<devicesets>
<deviceset name="OPA4197ID" prefix="U">
<gates>
<gate name="A" symbol="OPA4197ID" x="0" y="0"/>
</gates>
<devices>
<device name="" package="D14_TEX">
<connects>
<connect gate="A" pin="+INC" pad="10"/>
<connect gate="A" pin="+IND" pad="12"/>
<connect gate="A" pin="+IN_A" pad="3"/>
<connect gate="A" pin="+IN_B" pad="5"/>
<connect gate="A" pin="-INC" pad="9"/>
<connect gate="A" pin="-IND" pad="13"/>
<connect gate="A" pin="-IN_A" pad="2"/>
<connect gate="A" pin="-IN_B" pad="6"/>
<connect gate="A" pin="OUTC" pad="8"/>
<connect gate="A" pin="OUTD" pad="14"/>
<connect gate="A" pin="OUT_A" pad="1"/>
<connect gate="A" pin="OUT_B" pad="7"/>
<connect gate="A" pin="V+" pad="4"/>
<connect gate="A" pin="V-" pad="11"/>
</connects>
<technologies>
<technology name="">
<attribute name="BUILT_BY" value="EMA_Molly" constant="no"/>
<attribute name="COPYRIGHT" value="Copyright (C) 2018 Accelerated Designs. All rights reserved" constant="no"/>
<attribute name="MANUFACTURER_PART_NUMBER" value="OPA4197ID" constant="no"/>
<attribute name="SOURCELIBRARY" value="TI_2019-05-11" constant="no"/>
<attribute name="VENDOR" value="Texas Instruments" constant="no"/>
</technology>
</technologies>
</device>
<device name="D14_TEX-M" package="D14_TEX-M">
<connects>
<connect gate="A" pin="+INC" pad="10"/>
<connect gate="A" pin="+IND" pad="12"/>
<connect gate="A" pin="+IN_A" pad="3"/>
<connect gate="A" pin="+IN_B" pad="5"/>
<connect gate="A" pin="-INC" pad="9"/>
<connect gate="A" pin="-IND" pad="13"/>
<connect gate="A" pin="-IN_A" pad="2"/>
<connect gate="A" pin="-IN_B" pad="6"/>
<connect gate="A" pin="OUTC" pad="8"/>
<connect gate="A" pin="OUTD" pad="14"/>
<connect gate="A" pin="OUT_A" pad="1"/>
<connect gate="A" pin="OUT_B" pad="7"/>
<connect gate="A" pin="V+" pad="4"/>
<connect gate="A" pin="V-" pad="11"/>
</connects>
<technologies>
<technology name="">
<attribute name="BUILT_BY" value="EMA_Molly" constant="no"/>
<attribute name="COPYRIGHT" value="Copyright (C) 2018 Accelerated Designs. All rights reserved" constant="no"/>
<attribute name="MANUFACTURER_PART_NUMBER" value="OPA4197ID" constant="no"/>
<attribute name="SOURCELIBRARY" value="TI_2019-05-11" constant="no"/>
<attribute name="VENDOR" value="Texas Instruments" constant="no"/>
</technology>
</technologies>
</device>
<device name="D14_TEX-L" package="D14_TEX-L">
<connects>
<connect gate="A" pin="+INC" pad="10"/>
<connect gate="A" pin="+IND" pad="12"/>
<connect gate="A" pin="+IN_A" pad="3"/>
<connect gate="A" pin="+IN_B" pad="5"/>
<connect gate="A" pin="-INC" pad="9"/>
<connect gate="A" pin="-IND" pad="13"/>
<connect gate="A" pin="-IN_A" pad="2"/>
<connect gate="A" pin="-IN_B" pad="6"/>
<connect gate="A" pin="OUTC" pad="8"/>
<connect gate="A" pin="OUTD" pad="14"/>
<connect gate="A" pin="OUT_A" pad="1"/>
<connect gate="A" pin="OUT_B" pad="7"/>
<connect gate="A" pin="V+" pad="4"/>
<connect gate="A" pin="V-" pad="11"/>
</connects>
<technologies>
<technology name="">
<attribute name="BUILT_BY" value="EMA_Molly" constant="no"/>
<attribute name="COPYRIGHT" value="Copyright (C) 2018 Accelerated Designs. All rights reserved" constant="no"/>
<attribute name="MANUFACTURER_PART_NUMBER" value="OPA4197ID" constant="no"/>
<attribute name="SOURCELIBRARY" value="TI_2019-05-11" constant="no"/>
<attribute name="VENDOR" value="Texas Instruments" constant="no"/>
</technology>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
</libraries>
<attributes>
</attributes>
<variantdefs>
</variantdefs>
<classes>
<class number="0" name="default" width="0" drill="0">
</class>
</classes>
<parts>
<part name="U1" library="op_amp" deviceset="OPA4197ID" device=""/>
</parts>
<sheets>
<sheet>
<plain>
</plain>
<instances>
<instance part="U1" gate="A" x="73.66" y="71.12" smashed="yes">
<attribute name="NAME" x="89.2556" y="80.2386" size="2.0828" layer="95" ratio="6" rot="SR0"/>
<attribute name="VALUE" x="88.6206" y="77.6986" size="2.0828" layer="96" ratio="6" rot="SR0"/>
</instance>
</instances>
<busses>
</busses>
<nets>
</nets>
</sheet>
</sheets>
</schematic>
</drawing>
</eagle>
