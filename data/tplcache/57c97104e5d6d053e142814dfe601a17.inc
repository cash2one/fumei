<div class="newstitem plr10 wow fadeIn"> <a class="newsinfo" href="view.php?aid=[field:id/]">
            <div class="newsimage"> <img src="[field:litpic/]" width="auto" height="auto" /> </div>
            <div class="newsdate">
              <p class="md">[field:pubdate function='strftime("%m-%d",@me)'/]</p>
              <p class="year">[field:pubdate function='strftime("%Y",@me)'/]</p>
            </div>
            <div class="newsbody">
              <p class="title ellipsis">[field:title/]</p>
              <p class="description">[field:description function='cn_substr(@me,250)'/]...</p>
            </div>
            </a> </div>