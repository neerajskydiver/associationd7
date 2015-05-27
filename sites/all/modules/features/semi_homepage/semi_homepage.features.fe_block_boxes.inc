<?php
/**
 * @file
 * semi_homepage.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function semi_homepage_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ad Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ad_block';
  $fe_block_boxes->body = '<br /><!--Rotating Banner Begin--><table border="0" style="margin-left:10px;"><tbody><tr><td valign="top"><script src="/sites/all/themes/semi/jquery.cycle.all.min.js"></script><script src="/sites/all/themes/semi/jquery.easing.1.3.js"></script><script type="text/javascript"></script><script type="text/javascript"></script><script type="text/javascript">// <![CDATA[
        $(document).ready(function(){

          $.ajax({
            type: "GET",
            url: "/sites/all/themes/semi/gallery_banner_050615.xml",
            dataTyle: "xml",
            success: function(data){
              var html="";
              $(data).find("photo").each(function(){
                var src=$(this).find("src").text();
                var link=$(this).find("link").text();
                var width="396";
                var height="240";
                html+=\'<a href="\'+link+\'" ><img src="\'+src+\'" width="\'+width+\'" height="\'+height+\'" /></a>\';
              });
              $(html).appendTo($(\'#banner-gallery .gallery\'));

              $(\'#banner-gallery .gallery\').cycle({
                fx: \'scrollHorz\',
                timeout: 6000,
                easing: \'easeInOutExpo\'
              });
            }
          });


          $(".gallery-buttons img").mouseover(function(){
            var title=$(this).attr("alt");
            var newpic=\'/sites/semiconeuropa.org/files/cms/groups/public/documents/web_content/\'+title+\'-hover.png\';
            $(this).attr(\'src\',newpic);
          });
          $(".gallery-buttons img").mouseout(function(){
            var title=$(this).attr("alt");
            var newpic=\'/sites/semiconeuropa.org/files/cms/groups/public/documents/web_content/\'+title+\'.png\';
            $(this).attr(\'src\',newpic);
          });





        });
        // ]]></script><div class="gallery-outer" id="banner-gallery"><div class="gallery" style="position: relative; width: 396px; height: 240px; overflow: hidden;"><a href="http://www.semiconrussia.org" style="position: absolute; top: 0px; left: 0px; display: block; z-index: 4; opacity: 1;"><img height="240" src="/sites/all/themes/semi/russia15-396x240.jpg" width="396" /></a> <a href="http://www.semiconwest.org" style="position: absolute; top: 0px; left: 0px; display: block; z-index: 4; opacity: 1;"> <img height="240" src="/sites/all/themes/semi/west15-396x240.jpg" width="396" /></a> <a href="http://www.semicontaiwan.org" style="position: absolute; top: 0px; left: 0px; display: block; z-index: 4; opacity: 1;"> <img height="240" src="/sites/all/themes/semi/taiwan15-396x240.jpg" width="396" /></a></div></div></td></tr></tbody></table><!-- end of Rotating Banner-->';

  $export['ad_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Top Left Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'homepage_top_left_block';
  $fe_block_boxes->body = '<div class="top_left_phone">+555.123.4567</div>';

  $export['homepage_top_left_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Industry News';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'industry_news';
  $fe_block_boxes->body = '<p><iframe frameborder="0" height="610" marginheight="0" marginwidth="0" scrolling="no" src="http://www.magentanews.com/magenta/xml/html/89/2/29837.html" width="400">&amp;amp;amp;lt;a href=&amp;amp;quot;http://www.magentanews.com/magenta/xml/html/89/2/29837.html&amp;amp;quot;&amp;amp;amp;gt;Feed&amp;amp;amp;lt;/a&amp;amp;amp;gt;</iframe></p>';

  $export['industry_news'] = $fe_block_boxes;

  return $export;
}
